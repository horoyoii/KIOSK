#ifndef ITEM_H
#define ITEM_H
#include<QString>
#include<QDebug>

class Item
{
private:
    QString kind;
    QString name;
    QString option;
    int price;
public:
    Item(QString name, int price);
    Item(QString name, QString option, int price);
    Item(QString kind, QString name, QString option, int price);
    QString getName() const;
    int getPrice() const;
};

#endif // ITEM_H
