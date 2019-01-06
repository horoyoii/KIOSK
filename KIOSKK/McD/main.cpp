#include "mainwindow.h"
#include <QApplication>
#include<QMouseEvent>
#include<QLabel>

#include<QSqlDatabase>
#include<QSqlQuery>
#include<QDebug>
#include<QSqlRecord>
#include<QtSql>
#include<QTextCodec>

#include"mydatabase.h"
#include"databasehandler.h"

/*
 * SS
 * DB
 * Lucky
 * Big
 * 1995
 * GEC
 * BTD
 * SangHai
 *
*/

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    /* If need to insert new data to DB
    DatabaseHandler dbH;
    dbH.InsertData("drink", "coke", 1000);
    dbH.InsertData("drink", "sprite", 1000);
    */

/*
      qry.prepare( "SELECT names.firstname, names.lastname, salaries.annual FROM names JOIN salaries ON names.id = salaries.id" );
      if( !qry.exec() )
        qDebug() << qry.lastError();
      else
      {
        qDebug( "Selected!" );

        QSqlRecord rec = qry.record();
        int cols = rec.count();

        QString temp;
        for( int c=0; c<cols; c++ )
          temp += rec.fieldName(c) + ((c<cols-1)?"\t":"");
        qDebug() << temp;

        while( qry.next() )
        {
          temp = "";
          for( int c=0; c<cols; c++ )
            temp += qry.value(c).toString() + ((c<cols-1)?"\t":"");
          qDebug() << temp;
        }
      }
    */
    //=====================================================================================
    //TODO : to create 대기 화면


    //
    MainWindow w;
    w.show();

    return a.exec();
}

