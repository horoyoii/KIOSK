#include "mydatabase.h"

MyDatabase::MyDatabase(){
    QSqlDatabase mDatabase;
    mDatabase = QSqlDatabase::addDatabase("QMYSQL");
    mDatabase.setHostName("localhost");
    mDatabase.setPort(3306);
    mDatabase.setUserName("root");
    mDatabase.setPassword("####"); // 임의 설정
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
        ArrayDesert.push_back(Item(name, price));
    }



    mDatabase.close();

}


std::vector<Item> MyDatabase::getArrayBurger() const{
    return ArrayBurger;
}

std::vector<Item> MyDatabase::getArrayDrink() const{
    return ArrayDrink;
}

std::vector<Item> MyDatabase::getArrayDesert() const{
    return ArrayDesert;
}

std::vector<Item> MyDatabase::getArrayRecommand() const{
    return ArraySideMenu;
}

void MyDatabase::InsertResult(Basket basket){
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
      qDebug() << " result DB Selected";

    QString time = QDateTime::currentDateTime().toString();
    time.remove(0,2);
    qDebug()<<time;

    int payment = basket.getTotalSum();
    qDebug()<<QString::number(payment);
    QString location = "Seoul";
    QString List;
    for(auto &x : basket.getList()){
        List+=x.getName();
        List+=" / ";
    }
    qry.prepare("INSERT INTO result (ORDERTIME, PAYMENT, LOCATION, ORDERLIST) VALUES ('"+time+"', "+QString::number(payment)+", '"+location+"', '"+List+"')");
    //qry.prepare("INSERT INTO result (ORDERTIME, PAYMENT, LOCATION, ORDERLIST) VALUES ('time', 1230, 'seoul', 'ss')");
    if(!qry.exec())
        qDebug()<<qry.lastError();
    else {
        qDebug(" Result Inserted!");
    }
    //qry.prepare("INSERT INTO menu (kind, name, price) VALUES ('"+kind+"', '"+name+"', "+QString::number(price)+")");

  mDatabase.close();
}








