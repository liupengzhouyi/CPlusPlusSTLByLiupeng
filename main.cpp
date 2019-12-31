#include <iostream>
#include "StringByLiuPeng/StringByLiuPeng.h"
#include "Function/strlen/AboutStrlen.h"
#include "Function/memset/AboutMemset.h"
#include "Function/bind/AboutBind.h"

int main() {
    palyInAboutBind();

    std::cout << "Hello, World!" << std::endl;

    StringByLiuPeng * stringByLiuPeng;

    char *ch = "ghj765k";
    stringByLiuPeng = new StringByLiuPeng(ch);

    stringByLiuPeng = new StringByLiuPeng("cfvgbhjnkm");

    std::cout << stringByLiuPeng->longth() << std::endl;

    stringByLiuPeng->addStringByLiuPeng("123");

    std::cout << stringByLiuPeng->longth() << std::endl;

    stringByLiuPeng->printString();

    StringByLiuPeng stringByLiuPeng1("h123");
    std::cout << stringByLiuPeng1 << std::endl;

    StringByLiuPeng stringByLiuPeng2("123");

    stringByLiuPeng2 += stringByLiuPeng1;
    std::cout << stringByLiuPeng2 << std::endl;
    return 0;
}