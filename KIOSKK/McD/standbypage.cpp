#include "standbypage.h"
#include "ui_standbypage.h"
#include"QMouseEvent"

StandByPage::StandByPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StandByPage)
{
    ui->setupUi(this);
    this->setFixedSize(770, 1020);
    //this->setFixedSize(400, 400);
    this->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);

    QPixmap pix("C:\\Users\\friend\\GitHub\\KIOSK\\KIOSKK\\McD\\image\\stb.jpg");
    ui->backImage->setGeometry(0, 0, 800, 1070);
    ui->backImage->setPixmap(pix);
    ui->backImage->setFixedSize(760, 1040);


    ui->welcome->setGeometry(160, 00, 1000, 200);
    ui->welcome->setFont((QFont("Century Gothic",40)));
    ui->welcome->setStyleSheet("color: #ffffff");
    ui->welcome->setText("  Welcome!");

    ui->hello->setGeometry(270, 160, 700, 300);
    ui->hello->setFont((QFont("Century Gothic",25)));
    ui->hello->setStyleSheet("color: #ffffff");
    ui->hello->setText(" you can \nAccess via Your App");

}

StandByPage::~StandByPage()
{
    delete ui;
}

void StandByPage::mousePressEvent(QMouseEvent *event){

}
