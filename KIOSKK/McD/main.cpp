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

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GlobalHelper::Init();

    MainWindow w;
    MyServer server;
    server.startServer(w.getPaymentInstance());
    QObject::connect(&server, SIGNAL(newConnectionIsComming()), &w, SLOT(openTheMainPage()));
    w.show();


    return a.exec();
}

