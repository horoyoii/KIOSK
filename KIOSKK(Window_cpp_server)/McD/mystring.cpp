#include "mystring.h"
#include"QDebug"
MyString::MyString(const char *str)
    :QString(str){
    //ConvertToKor.insert({"BTD", "베이컨 버거"});

}

QString MyString::toKor(){
    qDebug()<<*this;
    QString str = "Tomato Beacon ";
    ConvertToKor.insert({"BTD", str});
    return ConvertToKor[*this];

}
