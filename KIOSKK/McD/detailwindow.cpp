#include "detailwindow.h"
#include "ui_detailwindow.h"

DetailWindow::DetailWindow(QWidget *parent, QString name) :
    QWidget(parent),
    ui(new Ui::DetailWindow)
{
    ui->setupUi(this);
    SetWindowSize();



}





void DetailWindow::SetWindowSize(){
    // Setting Size ===============================
    this->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    this->setFixedSize(600, 700);
    this->setStyleSheet("background-color:white;");
}




DetailWindow::~DetailWindow()
{
    delete ui;
}

void DetailWindow::on_Cancel_clicked(){
    this->close();
}
