#include "item.h"

Item::Item(QString name, int price)
    :name(name), price(price){

}
Item::Item(QString kind, QString name, QString option, int price)
    :kind(kind), name(name), option(option), price(price){

}
Item::Item(QString name, QString option, int price)
    :name(name), option(option), price(price){

}
QString Item::getName() const{
    return name;
}
int Item::getPrice() const{
    return price;
}
