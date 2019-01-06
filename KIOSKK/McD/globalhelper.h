#ifndef GLOBALHELPER_H
#define GLOBALHELPER_H
#include<map>
#include<QString>

using namespace std;
class GlobalHelper
{
private:
     static map<QString, QString> FullNameInfo;
public:
    GlobalHelper();
    static void Init();
    static QString GetFullName(QString tocken);
};


#endif // GLOBALHELPER_H
