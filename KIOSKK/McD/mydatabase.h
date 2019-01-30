#ifndef MYDATABASE_H
#define MYDATABASE_H
#include<vector>
#include"item.h"
#include<QSqlDatabase>
#include<QSqlQuery>
#include<QDebug>
#include<QSqlRecord>
#include<QtSql>
#include"basket.h"

class MyDatabase
{
private:
    std::vector<Item> ArrayBurger;
    std::vector<Item> ArraySideMenu;
    std::vector<Item> ArrayDesert;
    std::vector<Item> ArrayDrink;

public:
    MyDatabase();
    void InsertResult(Basket basket); // MariaDB로 결제내역 저장.
    std::vector<Item> getArrayBurger() const;
    std::vector<Item> getArrayDesert() const;
    std::vector<Item> getArrayRecommand() const;
    std::vector<Item> getArrayDrink() const;


};

#endif // MYDATABASE_H
