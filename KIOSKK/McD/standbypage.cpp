#include "standbypage.h"
#include "ui_standbypage.h"
#include"QMouseEvent"

StandByPage::StandByPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StandByPage)
{
    ui->setupUi(this);
    //this->setFixedSize(760, 1040);
    this->setFixedSize(400, 400);
    this->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
}

StandByPage::~StandByPage()
{
    delete ui;
}

void StandByPage::mousePressEvent(QMouseEvent *event){

}
