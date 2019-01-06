#include"basket.h"
#include<QDebug>
Basket::Basket()
    :totalSum(0){

}

int Basket::getTotalSum() const {
    return totalSum;
}

map<string, int> Basket::getList() const{
    return List;
}
