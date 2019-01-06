#include "detailwindow.h"
#include "ui_detailwindow.h"
#include<QString>
#include<QDebug>
#include<QIcon>

DetailWindow::DetailWindow(QWidget *parent, QString name, MyDatabase *items) :
    QWidget(parent),
    ui(new Ui::DetailWindow)
{
    ui->setupUi(this);

    SetWindowSize();
    SetIconImage();
    SetBurgerName(name);
    SetBurgerPrice(name, items);
    SetMainImage(name);



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

}

void DetailWindow::on_btn_normal_clicked(){

}

void DetailWindow::on_btn_single_clicked(){

}


DetailWindow::~DetailWindow()
{
    delete ui;
}
