#include "databasehandler.h"
#include<QString>
DatabaseHandler::DatabaseHandler(){

}

void DatabaseHandler::InsertData(QString kind, QString name, int price){

    QSqlDatabase mDatabase;
    mDatabase = QSqlDatabase::addDatabase("QMYSQL");
    mDatabase.setHostName("localhost");
    mDatabase.setPort(3306);
    mDatabase.setUserName("root");
    mDatabase.setPassword("####"); // 임의 

    if(!mDatabase.open()){
        printf("\a");
    }else
        qDebug( "Connected!" );


    QSqlQuery qry;
    qry.prepare("USE menu");
    if( !qry.exec() )
      qDebug() << qry.lastError();
    else
      qDebug() << "DB Selected";


    qry.prepare("INSERT INTO menu (kind, name, price) VALUES ('"+kind+"', '"+name+"', "+QString::number(price)+")");
    if(!qry.exec())
        qDebug()<<qry.lastError();
    else {
        qDebug("Inserted!");
    }

  mDatabase.close();
}
