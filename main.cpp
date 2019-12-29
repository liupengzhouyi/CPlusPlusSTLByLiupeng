#include <iostream>
#include "StringByLiuPeng/StringByLiuPeng.h"
#include "Function/strlen/AboutStrlen.h"
#include "Function/memset/AboutMemset.h"

int main() {

    palyInStrlen();
    testForinit();
    std::cout << "Hello, World!" << std::endl;
    StringByLiuPeng * stringByLiuPeng;
    char *ch = "ghj765k";
    stringByLiuPeng = new StringByLiuPeng(ch);
    stringByLiuPeng = new StringByLiuPeng("cfvgbhjnkm");
    std::cout << stringByLiuPeng->longth();

    return 0;
}