#ifndef ITEM_H
#define ITEM_H
#include<QString>
#include<QDebug>

class Item
{
private:
    QString name;
    int price;
public:
    Item(QString name, int price);
    QString getName();
    int getPrice() const;
};

#endif // ITEM_H
