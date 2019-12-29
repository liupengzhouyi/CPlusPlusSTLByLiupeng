//
// Created by 刘鹏 on 2019/12/30.
//

#include <iostream>
#include "AboutMemset.h"

void testForinit() {
    char *ch = "abcdef";
    std::cout << ch << std::endl;
    memset(ch, 0, sizeof(char)*20);
    ch = "123456789";
    std::cout << ch << std::endl;
}