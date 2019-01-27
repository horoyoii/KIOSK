#ifndef MYDEBUG_H
#define MYDEBUG_H
#include<QDebug>
#include<QString>
class MyDebug
{
public:
    MyDebug();
    static void Log(QString str);
};

#endif // MYDEBUG_H
