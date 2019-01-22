#ifndef MYSTRING_H
#define MYSTRING_H
#include<QString>
#include<map>

class MyString : public QString{
private:
    std::map<MyString, QString> ConvertToKor;
public:
    MyString(){

    }
    MyString(const char *str);
    QString toKor();
    MyString& operator=(const QString &ref){
        for(auto &x : ref){
            this->push_back(x);
        }

        return *this;
    }
    MyString(const MyString &ref){
        for(auto &x : ref){
            this->push_back(x);
        }
    }

};

#endif // MYSTRING_H
