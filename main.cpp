#include <iostream>
#include "StringByLiuPeng/StringByLiuPeng.h"
#include "Function/strlen/AboutStrlen.h"
#include "Function/memset/AboutMemset.h"
#include "Function/bind/AboutBind.h"
#include "Function/auto/AboutAuto.h"
#include "Function/for/AboutFor.h"
#include "RedisByLiupeng/ItemType/DateType/DateByLiuPeng/DateByLiupeng.h"
#include "RedisByLiupeng/DataStructure/DataStructure.h"

int main() {
// current date/time based on current system
    DataStructure *p1 = new DataStructure();
    IntType *intType = new IntType();
    intType->setValue(1);
    intType->setName("ID");
    intType->setTypeName("int");
    p1->setIntType(intType);

    DataStructure *p2 = new DataStructure();
    IntType *intType2 = new IntType();
    intType2->setValue(2);
    intType2->setName("ID");
    intType2->setTypeName("int");
    p2->setIntType(intType2);

    p1->setRightIndictor(p2);
    p2->setLifeIndictor(p1);

    DataStructure * temp = p1;
    while (temp->getRightIndictor() != nullptr) {
        if (temp->getIntType() != nullptr) {
            std::cout << temp->getIntType()->getValue() << std::endl;
        }
        if (temp->getDoubleType() != nullptr) {
            std::cout << temp->getDoubleType()->getValue() << std::endl;
        }
        if (temp->getStringType() != nullptr) {
            std::cout << temp->getStringType()->getValue() << std::endl;
        }
        if (temp->getDateType() != nullptr) {
            DateByLiupeng l = temp->getDateType()->getValue();
            std::cout << l.getCHSString() << std::endl;
        }
        temp = temp->getRightIndictor();
    }
    if (temp->getIntType() != nullptr) {
        std::cout << temp->getIntType()->getValue() << std::endl;
    }
    if (temp->getDoubleType() != nullptr) {
        std::cout << temp->getDoubleType()->getValue() << std::endl;
    }
    if (temp->getStringType() != nullptr) {
        std::cout << temp->getStringType()->getValue() << std::endl;
    }
    if (temp->getDateType() != nullptr) {
        DateByLiupeng l = temp->getDateType()->getValue();
        std::cout << l.getCHSString() << std::endl;
    }

    return 0;
}