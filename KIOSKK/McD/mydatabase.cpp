#include "mydatabase.h"

MyDatabase::MyDatabase(){
    QSqlDatabase mDatabase;
    mDatabase = QSqlDatabase::addDatabase("QMYSQL");
    mDatabase.setHostName("localhost");
    mDatabase.setPort(3306);
    mDatabase.setUserName("root");
    mDatabase.setPassword("whdgus22");
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


    // get Burger Info from MariaDB =====================================================================
    qry.prepare("SELECT * FROM menu WHERE kind = 'burger'");
    if(!qry.exec())
       qDebug() << qry.lastError();

    QSqlRecord rec = qry.record();
    QString name;
    int price;
    while( qry.next() ){
        name.clear();
        name = qry.value(1).toString();
        price = qry.value(2).toInt();
        ArrayBurger.push_back(Item(name, price));
    }

    // get Drink Info from MariaDB =====================================================================
    qry.prepare("SELECT * FROM menu WHERE kind = 'drink'");
    if(!qry.exec())
       qDebug() << qry.lastError();

    rec = qry.record();
    while( qry.next() ){
        name.clear();
        name = qry.value(1).toString();
        price = qry.value(2).toInt();
        ArrayDrink.push_back(Item(name, price));
    }

    // get Side Info from MariaDB =====================================================================
    qry.prepare("SELECT * FROM menu WHERE kind = 'side'");
    if(!qry.exec())
       qDebug() << qry.lastError();

    rec = qry.record();
    while( qry.next() ){
        name.clear();
        name = qry.value(1).toString();
        price = qry.value(2).toInt();
        ArraySideMenu.push_back(Item(name, price));
    }

    // get Desert Info from MariaDB =====================================================================
    qry.prepare("SELECT * FROM menu WHERE kind = 'desert'");
    if(!qry.exec())
       qDebug() << qry.lastError();

    rec = qry.record();
    while( qry.next() ){
        name.clear();
        name = qry.value(1).toString();
        price = qry.value(2).toInt();
        ArrayBurger.push_back(Item(name, price));
    }





}


std::vector<Item> MyDatabase::getArrayBurger() const{
    return ArrayBurger;
}

std::vector<Item> MyDatabase::getArrayDrink() const{
    return ArrayDrink;
}

std::vector<Item> MyDatabase::getArraySideMenu() const{
    return ArraySideMenu;
}

std::vector<Item> MyDatabase::getArrayRecommand() const{
    return ArrayRecommand;
}










