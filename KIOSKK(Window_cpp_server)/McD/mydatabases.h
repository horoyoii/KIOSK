#ifndef MYDATABASES_H
#define MYDATABASES_H
#include<QString>
#include<QSqlDatabase>

class MyDatabases{
private:
    static QSqlDatabase mDatabase;
 public:
     static void Init(QString type, QString host, int portNum, QString userName, QString pw);
     static void test();
};

#endif // MYDATABASES_H
