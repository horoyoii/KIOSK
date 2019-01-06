#ifndef MYDATABASE_H
#define MYDATABASE_H
#include<vector>
#include"item.h"
#include<QSqlDatabase>
#include<QSqlQuery>
#include<QDebug>
#include<QSqlRecord>
#include<QtSql>


class MyDatabase
{
private:
    std::vector<Item> ArrayBurger;
    std::vector<Item> ArraySideMenu;
    std::vector<Item> ArrayRecommand;
    std::vector<Item> ArrayDrink;

public:
    MyDatabase();
    std::vector<Item> getArrayBurger() const;
    std::vector<Item> getArraySideMenu() const;
    std::vector<Item> getArrayRecommand() const;
    std::vector<Item> getArrayDrink() const;

};

#endif // MYDATABASE_H
