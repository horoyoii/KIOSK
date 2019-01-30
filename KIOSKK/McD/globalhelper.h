#ifndef GLOBALHELPER_H
#define GLOBALHELPER_H
#include<map>
#include<QString>

// to convert symbolized tokens to its mapping fullname

using namespace std;



class GlobalHelper
{
private:
     static map<QString, QString> FullNameInfo;
public:
    GlobalHelper();
    static void Init();
    static QString GetFullName(QString tocken, QString option = nullptr, int kind = 0);
};

#endif // GLOBALHELPER_H
