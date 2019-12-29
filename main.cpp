#include <iostream>
#include "StringByLiuPeng/StringByLiuPeng.h"
#include "Function/strlen/AboutStrlen.h"
#include "Function/memset/AboutMemset.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    StringByLiuPeng * stringByLiuPeng;

    char *ch = "ghj765k";
    stringByLiuPeng = new StringByLiuPeng(ch);

    stringByLiuPeng = new StringByLiuPeng("cfvgbhjnkm");

    std::cout << stringByLiuPeng->longth() << std::endl;

    stringByLiuPeng->addStringByLiuPeng("123");

    std::cout << stringByLiuPeng->longth() << std::endl;

    stringByLiuPeng->printString();

    /*std::string s("as");
    std::cout << s << std::endl;*/

    StringByLiuPeng stringByLiuPeng1("h123");
    std::cout << stringByLiuPeng1 << std::endl;

    return 0;
}