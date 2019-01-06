#include"basket.h"
#include<QDebug>
Basket::Basket()
    :totalSum(0){

}

void Basket::AddItem(QString kind, QString name, QString option, int price){
    List.push_back(Item(kind, name, option, price));
}

int Basket::getTotalSum() const {
    return totalSum;
}

vector<Item> Basket::getList() const{
    return List;
}
