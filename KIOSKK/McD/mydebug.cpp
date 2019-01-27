#include "mydebug.h"

MyDebug::MyDebug(){


}

void MyDebug::Log(QString str){
   qDebug()<<"HOROYOI : "+str;
}
