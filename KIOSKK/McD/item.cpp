#include "item.h"

Item::Item(QString name, int price)
    :name(name), price(price){

}

QString Item::getName(){
    return name;
}
int Item::getPrice() const{
    return price;
}
