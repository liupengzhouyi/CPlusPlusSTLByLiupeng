//
// Created by 刘鹏 on 2019/12/31.
//

#include <iostream>
#include "AboutAuto.h"


// 初始化
void initInAuto() {
    auto number = 12.05;
    std::cout << number << std::endl;
}

//返回值
auto getReturnInAuto() {
    auto number1 = 123;
    auto number2 = 12.56;
    auto number = number1 + number2;
    return number;
}