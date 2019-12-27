//
// Created by 刘鹏 on 2019/12/28.
//

#ifndef CPLUSPLUSSTLBYLIUPENG_STRINGBYLIUPENG_H
#define CPLUSPLUSSTLBYLIUPENG_STRINGBYLIUPENG_H


class StringByLiuPeng {

public:
    StringByLiuPeng();

    StringByLiuPeng(char *stringByliupen);

    StringByLiuPeng(const StringByLiuPeng& stringByLiupeng);

    ~StringByLiuPeng();

    int longth();

    void printString();

private:

    char *str;

};


#endif //CPLUSPLUSSTLBYLIUPENG_STRINGBYLIUPENG_H
