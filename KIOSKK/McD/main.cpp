#include "mainwindow.h"
#include <QApplication>
#include<QMouseEvent>
#include<QLabel>
#include<QSqlTableModel>
#include<QSqlDatabase>
#include<QMessageBox>
#include<QSqlQuery>
#include<QDebug>
#include<QSqlRecord>
#include<QtSql>
class QSqlTableModel;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Database INIT

    QSqlTableModel *model;
    QSqlDatabase mDatabase;


    mDatabase = QSqlDatabase::addDatabase("QMYSQL");
    mDatabase.setHostName("localhost");
    mDatabase.setPort(3306);
    mDatabase.setUserName("root");
    mDatabase.setPassword("whdgus22");
    if(!mDatabase.open()){
        printf("\a");
    }else
        qDebug( "Connected!" );
    QSqlQuery qry;
qry.prepare("USE test");
if( !qry.exec() )
  qDebug() << qry.lastError();
else
  qDebug() << "Table created!";
      qry.prepare( "CREATE TABLE IF NOT EXISTS names (id INTEGER UNIQUE PRIMARY KEY, firstname VARCHAR(30), lastname VARCHAR(30))" );
      if( !qry.exec() )
        qDebug() << qry.lastError();
      else
        qDebug() << "Table created!";

      qry.prepare( "INSERT INTO names (id, firstname, lastname) VALUES (1, 'John', 'Doe')" );
      if( !qry.exec() )
        qDebug() << qry.lastError();
      else
        qDebug( "Inserted!" );

      qry.prepare( "INSERT INTO names (id, firstname, lastname) VALUES (2, 'Jane', 'Doe')" );
      if( !qry.exec() )
        qDebug() << qry.lastError();
      else
        qDebug( "Inserted!" );

      qry.prepare( "INSERT INTO names (id, firstname, lastname) VALUES (3, 'James', 'Doe')" );
      if( !qry.exec() )
        qDebug() << qry.lastError();
      else
        qDebug( "Inserted!" );

      qry.prepare( "INSERT INTO names (id, firstname, lastname) VALUES (4, 'Judy', 'Doe')" );
      if( !qry.exec() )
        qDebug() << qry.lastError();
      else
        qDebug( "Inserted!" );

      qry.prepare( "INSERT INTO names (id, firstname, lastname) VALUES (5, 'Richard', 'Roe')" );
      if( !qry.exec() )
        qDebug() << qry.lastError();
      else
        qDebug( "Inserted!" );

      qry.prepare( "INSERT INTO names (id, firstname, lastname) VALUES (6, 'Jane', 'Roe')" );
      if( !qry.exec() )
        qDebug() << qry.lastError();
      else
        qDebug( "Inserted!" );

      qry.prepare( "INSERT INTO names (id, firstname, lastname) VALUES (7, 'John', 'Noakes')" );
      if( !qry.exec() )
        qDebug() << qry.lastError();
      else
        qDebug( "Inserted!" );

      qry.prepare( "INSERT INTO names (id, firstname, lastname) VALUES (8, 'Donna', 'Doe')" );
      if( !qry.exec() )
        qDebug() << qry.lastError();
      else
        qDebug( "Inserted!" );

      qry.prepare( "INSERT INTO names (id, firstname, lastname) VALUES (9, 'Ralph', 'Roe')" );
      if( !qry.exec() )
        qDebug() << qry.lastError();
      else
        qDebug( "Inserted!" );

    // SALARIES
      qry.prepare( "CREATE TABLE IF NOT EXISTS salaries (id INTEGER UNIQUE PRIMARY KEY, annual INTEGER)" );
      if( !qry.exec() )
        qDebug() << qry.lastError();
      else
        qDebug( "Inserted!" );

      qry.prepare( "INSERT INTO salaries (id, annual) VALUES (1, 1000)" );
      if( !qry.exec() )
        qDebug() << qry.lastError();
      else
        qDebug( "Inserted!" );

      qry.prepare( "INSERT INTO salaries (id, annual) VALUES (2, 900)" );
      if( !qry.exec() )
        qDebug() << qry.lastError();
      else
        qDebug( "Inserted!" );

      qry.prepare( "INSERT INTO salaries (id, annual) VALUES (3, 900)" );
      if( !qry.exec() )
        qDebug() << qry.lastError();
      else
        qDebug( "Inserted!" );

      qry.prepare( "INSERT INTO salaries (id, annual) VALUES (5, 1100)" );
      if( !qry.exec() )
        qDebug() << qry.lastError();
      else
        qDebug( "Inserted!" );

      qry.prepare( "INSERT INTO salaries (id, annual) VALUES (6, 1000)" );
      if( !qry.exec() )
        qDebug() << qry.lastError();
      else
        qDebug( "Inserted!" );

      qry.prepare( "INSERT INTO salaries (id, annual) VALUES (8, 1200)" );
      if( !qry.exec() )
        qDebug() << qry.lastError();
      else
        qDebug( "Inserted!" );

      qry.prepare( "INSERT INTO salaries (id, annual) VALUES (9, 1200)" );
      if( !qry.exec() )
        qDebug() << qry.lastError();
      else
        qDebug( "Inserted!" );

      qry.prepare( "SELECT * FROM salaries" );
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
    /*
    QSqlQuery qry;
    qry.prepare( "SELECT * FROM menu" );
      if( !qry.exec() )
        qDebug("Error");
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





    model = new QSqlTableModel();
    model->setTable("menu");
    model->select();
    //model->setQuery("SELECT * FROM employee");
    */



    //=====================================================================================
    //TODO : to create 대기 화면


    //
    MainWindow w;
    w.show();

    return a.exec();
}

