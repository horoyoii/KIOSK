#include "globalhelper.h"



map<QString, QString> GlobalHelper::FullNameInfo;
void GlobalHelper::Init(){

    FullNameInfo.insert({"SS", "SuSu Burger"});
    FullNameInfo.insert({"DB", "Double Bulgogi Burger"});
    FullNameInfo.insert({"Lucky", "Lucky Burger - Gold"});
    FullNameInfo.insert({"Big", "BigMac Burger"});
    FullNameInfo.insert({"cen", "1955 Burger"});
    FullNameInfo.insert({"GEC", "Golden Egg Cheese"});
    FullNameInfo.insert({"BTD", "Bacon Tomato Delux"});
    FullNameInfo.insert({"SangHai", "SangHai Burger"});
    FullNameInfo.insert({"Coke", "Coke"});
    FullNameInfo.insert({"Milk", "Milk"});
    FullNameInfo.insert({"Orange", "Orange Juice"});
    FullNameInfo.insert({"ShCh", "Choco Shake"});
    FullNameInfo.insert({"ShBa", "Banana Shake"});
    FullNameInfo.insert({"ShSt", "Strawberry Shake"});
    FullNameInfo.insert({"Cafe", "Cafe Latte"});
    FullNameInfo.insert({"Chil", "Golden Kiwi CHiller"});
    FullNameInfo.insert({"Ches", "Mozza CheeseStick"});
    FullNameInfo.insert({"Shan", "Shan Chicken Snaplap"});
    FullNameInfo.insert({"Conn", "Corn Soup"});



}

GlobalHelper::GlobalHelper(){


}


QString GlobalHelper::GetFullName(QString tocken, QString option, int kind){
    if(option == nullptr)
        return FullNameInfo[tocken];
    else{
        QString rtn = FullNameInfo[tocken];
        if(kind == 0){
            if(!option.compare("S"))
                rtn+=" Single";
            else if(!option.compare("N"))
                rtn+=" Set";
            else if(!option.compare("L"))
                rtn+=" Large Set";
        }else if(kind == 1){
            if(!option.compare("S"))
                rtn+=" Small";
            else if(!option.compare("N"))
                rtn+=" Normal";
            else if(!option.compare("L"))
                rtn+=" Large";
        }else if(kind == 2){

        }

        return rtn;
    }
}

