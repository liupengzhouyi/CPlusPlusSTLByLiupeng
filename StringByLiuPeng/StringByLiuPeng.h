//
// Created by 刘鹏 on 2019/12/28.
//

#ifndef CPLUSPLUSSTLBYLIUPENG_STRINGBYLIUPENG_H
#define CPLUSPLUSSTLBYLIUPENG_STRINGBYLIUPENG_H

#include <iostream>

class StringByLiuPeng {

public:
    // 无参构造函数
    StringByLiuPeng();

    // 构造函数
    StringByLiuPeng(char *stringByliupen);

    // 构造函数
    StringByLiuPeng(const StringByLiuPeng& stringByLiupeng);

    // 析构函数
    ~StringByLiuPeng();

    // 获取长度
    int longth();

    // 输出自己
    void printString();

    // 加一个到本字符串后面
    void addStringByLiuPeng(const char *StringByLiuPeng);

    StringByLiuPeng returnself();

    StringByLiuPeng &operator=(char *str);

    StringByLiuPeng &operator=(const StringByLiuPeng &stringByLiuPeng);

    char& operator[](unsigned int index);

    const char& operator[](unsigned int index) const;

    StringByLiuPeng& operator+=(const StringByLiuPeng& s);

    friend StringByLiuPeng operator+(const StringByLiuPeng& stringByLiuPeng1, const StringByLiuPeng& stringByLiuPeng2);

    friend std::ostream& operator<<(std::ostream& out, const StringByLiuPeng &stringByLiuPeng);

    friend std::istream& operator>>(std::istream& in, StringByLiuPeng &stringByLiuPeng);
    
private:

    char *str_;

};


#endif //CPLUSPLUSSTLBYLIUPENG_STRINGBYLIUPENG_H
