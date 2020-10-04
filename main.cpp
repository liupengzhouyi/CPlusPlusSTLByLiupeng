#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include "StringByLiuPeng/StringByLiuPeng.h"
#include "Function/strlen/AboutStrlen.h"
#include "Function/memset/AboutMemset.h"
#include "Function/bind/AboutBind.h"
#include "Function/auto/AboutAuto.h"
#include "Function/for/AboutFor.h"
#include "RedisByLiupeng/ItemType/DateType/DateByLiuPeng/DateByLiupeng.h"
#include "RedisByLiupeng/DataStructure/DataStructure.h"

using namespace std;
int main() {



    std::vector<std::string> clunmName;
    clunmName.push_back("ID");
    clunmName.push_back("name");
    clunmName.push_back("userName");
    clunmName.push_back("passwordValue");

    
    
    std::vector<std::string> typeName;
    typeName.push_back("int");
    typeName.push_back("string");
    typeName.push_back("string");
    typeName.push_back("string");

    std::vector<std::vector<std::string>> list;

    std::vector<std::string> informationI;
    informationI.push_back("1");
    informationI.push_back("liupeng");
    informationI.push_back("zhouyi");
    informationI.push_back("1234561");
    list.push_back(informationI);

    std::vector<std::string> informationII;
    informationII.push_back("2");
    informationII.push_back("liupeng");
    informationII.push_back("zhouyi");
    informationII.push_back("1234562");
    list.push_back(informationII);

    std::vector<std::string> informationIII;
    informationIII.push_back("3");
    informationIII.push_back("liupeng");
    informationIII.push_back("zhouyi");
    informationIII.push_back("1234563");
    list.push_back(informationIII);

    std::vector<std::string> informationIV;
    informationIV.push_back("4");
    informationIV.push_back("liupeng");
    informationIV.push_back("zhouyi");
    informationIV.push_back("1234564");
    list.push_back(informationIV);

    for (std::vector<std::string> item : list) {
        for (std::string value : item) {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }
    



// current date/time based on current system
/*

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
*/

    return 0;
}