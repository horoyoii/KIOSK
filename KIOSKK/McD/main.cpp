#include "mainwindow.h"
#include <QApplication>
#include<QMouseEvent>
#include<QLabel>

#include<QSqlDatabase>
#include<QSqlQuery>
#include<QDebug>
#include<QSqlRecord>
#include<QtSql>
#include<QTextCodec>
#include "myserver.h"
#include"mydatabase.h"
#include"databasehandler.h"
#include"globalhelper.h"
/*
 * SS
 * DB
 * Lucky
 * Big
 * 1995
 * GEC
 * BTD
 * SangHai
 *
*/


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GlobalHelper::Init();


    /* If need to insert new data to DB
    DatabaseHandler dbH;
    dbH.InsertData("drink", "coke", 1000);
    dbH.InsertData("drink", "sprite", 1000);
    */
    MainWindow w;
    MyServer server;
    server.startServer(w.getPaymentInstance());

    w.show();


    return a.exec();
}

