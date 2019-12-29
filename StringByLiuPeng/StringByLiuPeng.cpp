//
// Created by 刘鹏 on 2019/12/28.
//

#include <cstring>
#include <iostream>
#include "StringByLiuPeng.h"

StringByLiuPeng::StringByLiuPeng() {
    this->str_ = new char['\0'];
}

StringByLiuPeng::StringByLiuPeng(char *stringByliupen) {
    int len = strlen(stringByliupen) + 1;
    this->str_ = new char[len];
    // 方法一
    //strcpy(this->str_, stringByLiupeng);
    // 方法二
    for (int i = 0; i < len; i++) {
        this->str_[i] = stringByliupen[i];
    }
}

StringByLiuPeng::StringByLiuPeng(const StringByLiuPeng &stringByLiupeng) {
    int len = strlen(stringByLiupeng.str_) + 1;
    this->str_ = new char[len];
    memset(this->str_, 0, len);
    strcpy(this->str_, stringByLiupeng.str_);
}

int StringByLiuPeng::longth() {
    return strlen(this->str_);
}

void StringByLiuPeng::printString() {
    for (int i = 0; i < this->longth(); i++) {
        std::cout << this->str_[i];
    }
    std::cout << std::endl;
}

StringByLiuPeng::~StringByLiuPeng() {
    delete [] this->str_;
}

void StringByLiuPeng::addStringByLiuPeng(const char *stringByLiuPeng) {
    int len = strlen(this->str_) + strlen(stringByLiuPeng) + 1;
    char *newptr = new char[strlen(this->str_)];
    strcpy(newptr, this->str_);
    memset(this->str_, 0, len);
    strcpy(this->str_, newptr);
    strcat(this->str_, stringByLiuPeng);
}
