#include "mainwindow.h"
#include <QApplication>
#include<QMouseEvent>
#include<QLabel>
#include<QSqlTableModel>
#include<QSqlDatabase>
#include<QMessageBox>

class QSqlTableModel;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Database INIT

    QSqlTableModel *model;
    QSqlDatabase mDatabase;


    mDatabase = QSqlDatabase::addDatabase("QMYSQL");
    mDatabase.setHostName("localhost");
    mDatabase.setPort(3306);
    mDatabase.setUserName("root");
    mDatabase.setPassword("whdgus22");
    if(!mDatabase.open()){
       // QMessageBox::critical(this, "Error", mDatabase.lastError().text);
        printf("\a");
    }
    model = new QSqlTableModel();
    model->setTable("menu");
    model->select();
    //model->setQuery("SELECT * FROM employee");


    //TODO : to create 대기 화면


    //
    MainWindow w;
    w.show();

    return a.exec();
}

