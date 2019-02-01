#include "finnotification.h"
#include "ui_finnotification.h"

FinNotification::FinNotification(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FinNotification)
{
    ui->setupUi(this);
}

FinNotification::~FinNotification()
{
    delete ui;
}
