#include <iostream>
#include "StringByLiuPeng/StringByLiuPeng.h"

void paly(char ch[]) {
    std::cout << ch << std::endl;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    StringByLiuPeng * stringByLiuPeng;
    char *ch = "ghj765k";
    stringByLiuPeng = new StringByLiuPeng(ch);
    stringByLiuPeng = new StringByLiuPeng("cfvgbhjnkm");
    std::cout << stringByLiuPeng->longth();
    return 0;
}