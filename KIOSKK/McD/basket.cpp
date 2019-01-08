#include"basket.h"
#include<QDebug>
Basket::Basket()
    :totalSum(0){

}

void Basket::AddItem(Item item){
    List.push_back(item);
    totalSum+=item.getPrice();
}

int Basket::getTotalSum() const {
    return totalSum;
}

vector<Item> Basket::getList() const{
    return List;
}
