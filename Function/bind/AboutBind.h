//
// Created by 刘鹏 on 2019/12/31.
//

#ifndef CPLUSPLUSSTLBYLIUPENG_ABOUTBIND_H
#define CPLUSPLUSSTLBYLIUPENG_ABOUTBIND_H


#include <cstdio>

struct AboutBind {
    void show1(int a) {
        printf("a = %d\n", a);
    }

    void show2(int a, int b) {
        printf("a = %d, b = %d\n", a, b);
    }

    void show3(int a, int b, int c) {
        printf("a = %d, b = %d, c = %d\n", a, b, c);
    }
};


void palyInAboutBind();

#endif //CPLUSPLUSSTLBYLIUPENG_ABOUTBIND_H
