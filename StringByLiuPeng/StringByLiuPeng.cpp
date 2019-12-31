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

StringByLiuPeng StringByLiuPeng::returnself() {
    return this->str_;
}

StringByLiuPeng &StringByLiuPeng::operator=(char *str) {
    delete [] this->str_;
    int len = strlen(str) + 1;
    this->str_ = new char[len];
    memset(this->str_, 0, len);
    strcpy(this->str_, str);
    return *this;
}

StringByLiuPeng &StringByLiuPeng::operator=(const StringByLiuPeng &stringByLiuPeng) {
    if(this == &stringByLiuPeng){
        return *this;
    } else {
        int len = strlen(stringByLiuPeng.str_) + 1;
        delete[] this->str_;
        this->str_ = new char[len];
        memset(this->str_, 0, len);
        strcpy(str_, stringByLiuPeng.str_);
        return *this;
    }
}

std::ostream &operator<<(std::ostream &out, const StringByLiuPeng &stringByLiuPeng) {
    out << stringByLiuPeng.str_;
    return out;

}

std::istream &operator>>(std::istream &in, StringByLiuPeng &stringByLiuPeng) {
    char buffer[4096];
    in >> buffer;
    int len = strlen(buffer)+1;
    stringByLiuPeng.str_ = new char[len];
    memset(stringByLiuPeng.str_, 0, len);
    strcpy(stringByLiuPeng.str_, buffer);
    // delete(buffer);
    return in;
}

char &StringByLiuPeng::operator[](unsigned int index) {
    return const_cast<char&>(static_cast<const StringByLiuPeng&>(*this)[index]);
}

const char &StringByLiuPeng::operator[](unsigned int index) const {
    return this->str_[index];
}

StringByLiuPeng operator+(const StringByLiuPeng &stringByLiuPeng1, const StringByLiuPeng &stringByLiuPeng2) {
    int len = strlen(stringByLiuPeng1.str_) + strlen(stringByLiuPeng2.str_) + 1;
    char *newStr = new char[len];
    memset(newStr, 0, len);
    strcpy(newStr, stringByLiuPeng1.str_);
    strcat(newStr, stringByLiuPeng2.str_);
    return newStr;
}

StringByLiuPeng &StringByLiuPeng::operator+=(const StringByLiuPeng &s) {
    int len = strlen(s.str_) + strlen(this->str_) + 1;
    char *tempStr = new char[len];
    memset(tempStr, 0, len);
    strcpy(tempStr, this->str_);
    strcat(tempStr, s.str_);
    delete [] this->str_;
    this->str_ = new char[len];
    strcpy(this->str_, tempStr);
    delete[] tempStr;
    return *this;
}
