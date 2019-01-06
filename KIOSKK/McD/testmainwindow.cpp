#include "testmainwindow.h"
#include "ui_testmainwindow.h"

testMainWindow::testMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::testMainWindow)
{
    ui->setupUi(this);
}

testMainWindow::~testMainWindow()
{
    delete ui;
}
