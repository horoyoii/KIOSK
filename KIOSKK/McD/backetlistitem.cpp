#include "backetlistitem.h"
#include "ui_backetlistitem.h"

BasketListItem::BasketListItem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BacketListItem)
{
    ui->setupUi(this);
}

BasketListItem::~BasketListItem()
{
    delete ui;
}
