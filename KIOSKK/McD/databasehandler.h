#ifndef DATABASEHANDLER_H
#define DATABASEHANDLER_H
#include<QSqlDatabase>
#include<QSqlQuery>
#include<QDebug>
#include<QSqlRecord>
#include<QtSql>

// 사용하지 않음.
class DatabaseHandler{
private:
public:
    DatabaseHandler();
    void InsertData(QString kind, QString name, int price);

};

#endif // DATABASEHANDLER_H
