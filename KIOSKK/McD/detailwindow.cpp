#include "detailwindow.h"
#include "ui_detailwindow.h"
#include<QString>
#include<QDebug>
#include<QIcon>


DetailWindow::DetailWindow(QWidget *parent, QString name, MyDatabase *items, int option) :
    QWidget(parent),
    ui(new Ui::DetailWindow)
{
    ui->setupUi(this);
    SetWindowSize();
    SetIconImage();
    this->option = option;

    switch(option){
    case 0: // Page For Burger
        SetBurgerName(name);
        SetBurgerPrice(name, items);
        SetMainImage(name);
        break;
    case 1:// Page For Drink
        ui->label_large->setText("Large");
        ui->label_medium->setText("Medium");
        ui->label_small->setText("Small");
        ui->single_text->setGeometry(120, 20, 241, 31);
        ui->normal_text->setGeometry(120, 20, 241, 31);
        ui->large_text->setGeometry(120, 20, 241, 31);
        SetDrinkName(name);
        SetDrinkPrice(name, items);
        SetDrinkImage(name);
        break;
    case 2:
        ui->label_large->setText("Single");
        ui->label_medium->hide();
        ui->label_small->hide();
        ui->large_text->setGeometry(120, 20, 241, 31);
        ui->groupBox_3->hide();
        ui->groupBox_4->hide();
        SetDesertName(name);
        SetDesertPrice(name, items);
        SetDesertImage(name);

        break;
    }

}




void DetailWindow::SetIconImage(){
    ui->btn_larger->setStyleSheet("border-style:solid;"
                                  "border-width: 2px;"
                                  "border-color: #999999;"
                                  "border-radius: 10px;"
                                  "color: #999999");

    ui->btn_normal->setStyleSheet("border-style:solid;"
                                  "border-width: 2px;"
                                  "border-color: #999999;"
                                  "border-radius: 10px;"
                                  "color: #999999");

    ui->btn_single->setStyleSheet("border-style:solid;"
                                  "border-width: 2px;"
                                  "border-color: #999999;"
                                  "border-radius: 10px;"
                                  "color: #999999");
}


void DetailWindow::SetBurgerName(QString name){
    // Set Burger Name===========================================
    BasicName = name;
    QString FullName = GlobalHelper::GetFullName(name);
    ui->bg_name->setText(FullName);
    ui->single_text->setText(FullName);
    ui->large_text->setText(FullName);
    ui->normal_text->setText(FullName);
}

void DetailWindow::SetBurgerPrice(QString name, MyDatabase *items){
    // Set Burger Price===========================================
    int price =0;
    for(auto &x : items->getArrayBurger()){
        if(name == x.getName()){
            price = x.getPrice();
            break;
        }
    }
    BasicPrice = price;
    ui->Single_price->setText(QString::number(price));
    ui->Normal_price->setText(QString::number(price + 1200));
    ui->Larger_price->setText(QString::number(price + 1800));
}

void DetailWindow::SetMainImage(QString name){
    // Set Image=================================================
    QString ImageUrl = "C:\\Users\\friend\\GitHub\\KIOSK\\KIOSKK\\McD\\image\\burgerImage\\"+name+".jpg";
    QPixmap pix(ImageUrl);
    ui->image->setPixmap(pix);
    ui->image->setScaledContents(true);
}


void DetailWindow::SetDrinkName(QString name){
    // Set Burger Name===========================================
    BasicName = name;
    QString FullName = GlobalHelper::GetFullName(name);
    ui->bg_name->setText(FullName);
    ui->single_text->setText(FullName);
    ui->large_text->setText(FullName);
    ui->normal_text->setText(FullName);
}

void DetailWindow::SetDrinkPrice(QString name, MyDatabase *items){
    // Set Burger Price===========================================
    int price =0;
    for(auto &x : items->getArrayDrink()){
        if(name == x.getName()){
            price = x.getPrice();
            break;
        }
    }
    BasicPrice = price;
    ui->Single_price->setText(QString::number(price));
    ui->Normal_price->setText(QString::number(price + 500));
    ui->Larger_price->setText(QString::number(price + 1000));
}

void DetailWindow::SetDrinkImage(QString name){
    // Set Image=================================================
    //qDebug()<<name;
    QString ImageUrl = "C:\\Users\\friend\\GitHub\\KIOSK\\KIOSKK\\McD\\image\\Drink\\"+name+".jpg";
    QPixmap pix(ImageUrl);
    ui->image->setPixmap(pix);
    ui->image->setScaledContents(true);
}

void DetailWindow::SetDesertName(QString name){
    // Set Burger Name===========================================
    BasicName = name;
    QString FullName = GlobalHelper::GetFullName(name);
    ui->bg_name->setText(FullName);
    ui->large_text->setText(FullName);
}

void DetailWindow::SetDesertPrice(QString name, MyDatabase *items){
    // Set Burger Price===========================================
    int price =0;
    for(auto &x : items->getArrayDesert()){
        if(name == x.getName()){
            price = x.getPrice();
            break;
        }
    }
    BasicPrice = price;
    ui->Single_price->hide();
    ui->Normal_price->hide();
    ui->Larger_price->setText(QString::number(price));
}

void DetailWindow::SetDesertImage(QString name){
    // Set Image=================================================
    //qDebug()<<name;
    QString ImageUrl = "C:\\Users\\friend\\GitHub\\KIOSK\\KIOSKK\\McD\\image\\Desert\\"+name+".jpg";
    QPixmap pix(ImageUrl);
    ui->image->setPixmap(pix);
    ui->image->setScaledContents(true);
}




void DetailWindow::SetWindowSize(){
    // Setting Size ===============================
    this->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    this->setFixedSize(600, 700);
    this->setStyleSheet("background-color:white;");
}



void DetailWindow::on_Cancel_clicked(){
    this->close();
}


void DetailWindow::on_btn_larger_clicked(){
    //Info to pass : name $ option $ price $
    QString arg = BasicName+"$";
    arg+="L$";
    if(option == 0){
        arg+=QString::number(BasicPrice+1800)+"$";
        arg+="burger$";
    }else if(option == 1){
        arg+=QString::number(BasicPrice+1000)+"$";
        arg+="drink$";
    }else if(option == 2){
        arg+=QString::number(BasicPrice)+"$";
        arg+="desert$";
    }
    emit SignalToMainClass(arg);
    this->close();
}

void DetailWindow::on_btn_normal_clicked(){

    QString arg = BasicName+"$";
    arg+="N$";
    if(option == 0){
        arg+=QString::number(BasicPrice+1200)+"$";
        arg+="burger$";
    }else if(option == 1){
        arg+=QString::number(BasicPrice+500)+"$";
        arg+="drink$";
    }
    emit SignalToMainClass(arg);
    this->close();
}

void DetailWindow::on_btn_single_clicked(){

    QString arg = BasicName+"$";
    arg+="S$";
    if(option == 0){
        arg+=QString::number(BasicPrice)+"$";
        arg+="burger$";
    }else if(option == 1){
        arg+=QString::number(BasicPrice)+"$";
        arg+="drink$";
    }
    emit SignalToMainClass(arg);
    this->close();
}


DetailWindow::~DetailWindow()
{
    delete ui;
}
