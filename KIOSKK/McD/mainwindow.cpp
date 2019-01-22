#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QPixmap>
#include<QIcon>
#include<QDebug>
#include<QTextStream>
#include<QQmlContext>
#include "mydatabase.h"
#include"detailwindow.h"
#include <QtCore/QCoreApplication>
#include<QListWidgetItem>
#include<QAbstractItemModel>
#include<QStringList>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent), InitFlag(false),
    ui(new Ui::MainWindow)
{
    // Setting MainWindow ==========================================================
    this->setFixedSize(760, 1040);
    this->setStyleSheet("background-color:white;");
    py = new Payment;

   // Setting Images & Size & QuickWidget===========================================
    ui->setupUi(this);

    setSwipeView();
    setLayoutSize();
    setTabIcon();

    // Create a Basket & Get Itmems from DB ========================================
    basket = new Basket();
    items = new MyDatabase();
    stp = new StandByPage;

    //=============================================================================
    // Update Item List
    UpdateItemListIntoWidget();

}
// Slots ========================================================================
void MainWindow::UpdateBasket(QString arg){


    // update basket instance
    QStringList list;
    list = arg.split(QRegExp("\\W+"));
    basket->AddItem(Item(list[0], list[1], list[2].toInt()));
    qDebug()<<list[0];
    qDebug()<<list[1];
    ui->basketList_name->addItem(GlobalHelper::GetFullName(list[0], list[1]));
    ui->basketList_price->addItem(list[2]);
    ui->basketList_cacel->addItem("cacenl");


    signal_UpdateTotalCost();
}

void MainWindow::UpdateTotalCost(void){
    ui->TotalCost->setText(QString::number(this->basket->getTotalSum()));
}

//===============================================================================


void MainWindow::setSwipeView(){
    ui->quickWidget_2->rootContext()->setContextProperty("MainWindow", this);
    ui->quickWidget_2->setSource(QUrl(QStringLiteral("qrc:/swipe.qml")));
}

void MainWindow::setLayoutSize(){
    QPixmap pix("C:\\Users\\friend\\GitHub\\KIOSK\\KIOSKK\\McD\\image\\banner.jpg");
    ui->banner->setPixmap(pix);
    ui->banner->setFixedSize(760, 170);

    ui->tabWidget->setGeometry(0, 170, 760, 590);
    ui->basketLabel->setGeometry(0, 735, 760, 25);
    ui->basketLabel->setStyleSheet("QLabel { background-color : red; color : white}");
    ui->TotalCost->setGeometry(520, 735, 120, 25);
    ui->TotalCost->setStyleSheet("QLabel { background-color : red; color : white}");
    ui->TotalCost->setFont(QFont("Century Gothic",14, 3));


    ui->basketList_name->setGeometry(0, 760, 450, 200);
    ui->basketList_name->setStyleSheet("border: 0px;");
    ui->basketList_name->setFont(QFont("Century Gothic",14));

    ui->basketList_price->setGeometry(520, 760, 100, 200);
    ui->basketList_price->setStyleSheet("border: 0px;");
    ui->basketList_price->setFont(QFont("Century Gothic",14));

    ui->basketList_cacel->setGeometry(630, 760, 100, 200);
    ui->basketList_cacel->setStyleSheet("border: 0px;");
    ui->basketList_cacel->setFont(QFont("Century Gothic",14));

    ui->btn_cancel->setGeometry(40, 960, 300, 50);

    ui->btn_cancel->setStyleSheet("background-color: red;"
                "border-style:solid;"
                                  "border-width: 2px;"
                                  "border-color: #999999;"
                                  "border-radius: 10px;"
                                  "color: #ffffff");
    ui->btn_order->setGeometry(410, 960, 300, 50);
    ui->btn_order->setStyleSheet("background-color: red;"
                "border-style:solid;"
                                  "border-width: 2px;"
                                  "border-color: #999999;"
                                  "border-radius: 10px;"
                                  "color: #ffffff");


}

void MainWindow::setTabIcon(){
    QPixmap pix1("C:\\Users\\friend\\GitHub\\KIOSK\\KIOSKK\\McD\\image\\tabimage1.jpg");
    QIcon icon(pix1);
    ui->tabWidget->setTabIcon(0, icon);

    QPixmap pix2("C:\\Users\\friend\\GitHub\\KIOSK\\KIOSKK\\McD\\image\\tabimage2.jpg");
    icon = pix2;
    ui->tabWidget->setTabIcon(1, icon);


    QPixmap pix3("C:\\Users\\friend\\GitHub\\KIOSK\\KIOSKK\\McD\\image\\tabimage3.jpg");
    icon = pix3;
    ui->tabWidget->setTabIcon(2, icon);


    QPixmap pix4("C:\\Users\\friend\\GitHub\\KIOSK\\KIOSKK\\McD\\image\\tabimage4.jpg");
    icon = pix4;
    ui->tabWidget->setTabIcon(3, icon);
}

void MainWindow::UpdateItemListIntoWidget(){

    QPixmap pixmap("C:\\Users\\friend\\GitHub\\KIOSK\\KIOSKK\\McD\\image\\bg_btd2.jpg");
    QIcon ButtonIcon(pixmap);

}




Payment* MainWindow::getPaymentInstance() const{
    return py;
}








//프로그램을 원하는 위치까지 이동시킨 다음 타이틀바를 제거하기 위하여
// (원하는 위치까지 이동 후) 마우스를 클릭하게 되면 타이틀바가 사라지게 된다.
void MainWindow::mousePressEvent(QMouseEvent *event){
    if(InitFlag == false){
        if(event->button() & Qt::LeftButton){
            this->setWindowFlags(Qt::Window | Qt::FramelessWindowHint); // hide the title bar
            this->show();
            stp->show();
            InitFlag = true;
        }
    }
}



void MainWindow::ShowBurgerInfoDetails(QString name){
    DetailWindow *dw = new DetailWindow(nullptr, name, items);

    // connection =======================================================================================
    QObject::connect(dw, SIGNAL(SignalToMainClass(QString)),this, SLOT(UpdateBasket(QString)));
    QObject::connect(this, SIGNAL(signal_UpdateTotalCost(void)), this, SLOT(UpdateTotalCost(void)));
    //QObject::connect()
    /*
     QObject::connect(&sender, SIGNAL(foo(QString)), &receiver, SLOT(bar(QString)));
     sender.fireSignal();
     */

    // =================================================================================================

    dw->show();

}




MainWindow::~MainWindow(){

    delete ui;
}




void MainWindow::on_btn_order_clicked(){
    py->show();
}

void MainWindow::on_btn_cancel_clicked(){
    stp->show();

    // Init all state =========================


        // Init all state =========================

}
