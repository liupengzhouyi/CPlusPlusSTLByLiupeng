//
// Created by 刘鹏 on 2019/12/29.
//

#include <iostream>
#include "AboutStrlen.h"

void palyInStrlen() {
    char str0[8]={'a','b','c','d','e','f','i','g'};

    char str1[]="abcdefig";

    char str2[]="01234/056789" ;

    char str3[]="abcse/0fgkij";

    std::cout << "strlen(str0)=" << strlen(str0) << std::endl;

    std::cout << "strlen(str1)=" << strlen(str1) << std::endl;

    std::cout << "strlen(str2)=" << strlen(str2) << std::endl;

    std::cout << "strlen(str3)=" << strlen(str3) << std::endl;

}
