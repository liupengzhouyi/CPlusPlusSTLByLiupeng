//
// Created by 刘鹏 on 2019/12/28.
//

#include <cstring>
#include <iostream>
#include "StringByLiuPeng.h"

StringByLiuPeng::StringByLiuPeng() {
    this->str = new char['\0'];
}

StringByLiuPeng::StringByLiuPeng(char *stringByliupen) {
    int len = strlen(stringByliupen) + 1;
    this->str = new char[len];
    for (int i = 0; i < len; i++) {
        this->str[i] = stringByliupen[i];
    }
}



StringByLiuPeng::StringByLiuPeng(const StringByLiuPeng &stringByLiupeng) {
    int len = strlen(stringByLiupeng.str) + 1;
    this->str = new char[len];
    memset(this->str, 0, len);
    strcpy(this->str, stringByLiupeng.str);
}

int StringByLiuPeng::longth() {
    return strlen(this->str);
}

void StringByLiuPeng::printString() {
    for (int i = 0; i < this->longth(); i++) {
        std::cout << this->str[i];
    }
    std::cout << std::endl;
}

StringByLiuPeng::~StringByLiuPeng() {
    delete [] this->str;
}
