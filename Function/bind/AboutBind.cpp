//
// Created by 刘鹏 on 2019/12/31.
//

#include <functional>
#include "AboutBind.h"

void palyInAboutBind() {
    //1.
    struct AboutBind per;

    /**
     * 2. bind(要绑定的函数名, 函数来自哪个struct实例, 参数1, 参数2, ...);
     */
    auto show1 = std::bind(&AboutBind::show1, &per, std::placeholders::_1);//一个参数
    auto show2 = std::bind(&AboutBind::show2, &per, std::placeholders::_1, std::placeholders::_2);//二个参数
    auto show3 = std::bind(&AboutBind::show3, &per, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3);//二个参数

    //3.
    show1(19);
    show2(19, 20);
    show3(19, 20, 21);
}