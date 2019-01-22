#include "testwid.h"
#include "ui_testwid.h"

testWid::testWid(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::testWid)
{
    ui->setupUi(this);
}

testWid::~testWid()
{
    delete ui;
}
