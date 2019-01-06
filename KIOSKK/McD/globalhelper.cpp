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

}

GlobalHelper::GlobalHelper(){


}


QString GlobalHelper::GetFullName(QString tocken){
    return FullNameInfo[tocken];
}
