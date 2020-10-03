#include <iostream>
#include "StringByLiuPeng/StringByLiuPeng.h"
#include "Function/strlen/AboutStrlen.h"
#include "Function/memset/AboutMemset.h"
#include "Function/bind/AboutBind.h"
#include "Function/auto/AboutAuto.h"
#include "Function/for/AboutFor.h"
#include "RedisByLiupeng/ItemType/DateType/DateByLiuPeng/DateByLiupeng.h"

int main() {
// current date/time based on current system
    time_t now = time(0);

    tm *ltm = localtime(&now);

    DateByLiupeng dateByLiupeng = DateByLiupeng();
    dateByLiupeng.tmToDateByLiupeng(ltm);

    std::cout << dateByLiupeng.getCHSString() << std::endl;

    std::cout << dateByLiupeng.getENString() << std::endl;

    tm newTm = dateByLiupeng.dateByLiupengToTm();

    std::string dt = asctime(&newTm);
    std::cout << "UTC 日期和时间："<< dt << std::endl;

    return 0;
}