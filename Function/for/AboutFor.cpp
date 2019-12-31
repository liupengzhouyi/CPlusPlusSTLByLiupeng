//
// Created by 刘鹏 on 2019/12/31.
//

#include <vector>
#include <iostream>
#include "AboutFor.h"


void testInFor() {
    std::vector<int> v = {1, 2, 3, 4};
    for (int i : v)
        std::cout << i << " ";
}