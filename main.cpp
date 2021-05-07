#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <cstring>
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
    typeName.push_back("string");
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

    DataStructure *head = nullptr;

    for (std::vector<std::string> item : list) {
        DataStructure *dataStructure = new DataStructure();
        if (head == nullptr) {
            head = dataStructure;
        } else {
            DataStructure *p = head;
            while (p->getDownIndictor() != nullptr) {
                p = p->getDownIndictor();
                std::cout << "--" << std::endl;
            }
            p->setDownIndictor(dataStructure);
            dataStructure->setUpIndicator(p);
        }
        DataStructure *temp = dataStructure;
        for (int i = 0; i < item.size(); i++) {
            DataStructure *tempDataStructure = new DataStructure();
            temp->setRightIndictor(tempDataStructure);
            tempDataStructure->setLifeIndictor(temp);
            temp = tempDataStructure;
        }

        temp = dataStructure;
        for (std::string value : typeName) {
            if (value == "int") {
                IntType *intType = new IntType();
                intType->setTypeName(value);
                temp->setIntType(intType);
            }
            if (value == "double") {
                DoubleType *doubleType = new DoubleType();
                doubleType->setTypeName(value);
                temp->setDoubleType(doubleType);
            }
            if (value == "string") {
                StringType *stringType = new StringType();
                stringType->setTypeName(value);
                temp->setStringType(stringType);
            }
            if (value == "date") {
                DateType *dateType = new DateType();
                dateType->setTypeName(value);
                temp->setDateType(dateType);
            }
            temp = temp->getRightIndictor();
            std::cout << value << " ";
        }
        std::cout << std::endl;
        temp = dataStructure;
        for (std::string value : clunmName) {
            if (temp->getIntType() != nullptr) {
                temp->getIntType()->setName(value);
            }
            if (temp->getStringType() != nullptr) {
                temp->getStringType()->setName(value);
            }
            if (temp->getDoubleType() != nullptr) {
                temp->getDoubleType()->setName(value);
            }
            if (temp->getDateType() != nullptr) {
                temp->getDateType()->setName(value);
            }
            temp = temp->getRightIndictor();
            std::cout << value << " ";
        }
        std::cout << std::endl;
        temp = dataStructure;
        for (std::string value : item) {
            if (temp->getIntType() != nullptr) {
                temp->getIntType()->setValue(std::stoi(value));
            }
            if (temp->getStringType() != nullptr) {
                temp->getStringType()->setValue(value);
            }
            if (temp->getDoubleType() != nullptr) {
                temp->getDoubleType()->setValue(std::stod(value));
            }
            temp = temp->getRightIndictor();
            std::cout << value << " ";
        }
        std::cout << std::endl;

        temp = dataStructure;
        do {
            if (temp->getIntType() != nullptr) {
                std::cout << temp->getIntType()->getTypeName() << " ";
                std::cout << temp->getIntType()->getName() << " ";
                std::cout << temp->getIntType()->getValue();
            }
            if (temp->getStringType() != nullptr) {
                std::cout << temp->getStringType()->getTypeName() << " ";
                std::cout << temp->getStringType()->getName() << " ";
                std::cout << temp->getStringType()->getValue();
            }
            if (temp->getDoubleType() != nullptr) {
                std::cout << temp->getDoubleType()->getTypeName() << " ";
                std::cout << temp->getDoubleType()->getName() << " ";
                std::cout << temp->getDoubleType()->getValue();
            }
            if (temp->getDateType() != nullptr) {
                std::cout << temp->getDateType()->getTypeName() << " ";
                std::cout << temp->getDateType()->getName() << " ";
                std::cout << temp->getDateType()->getValue().getCHSString();
            }
            std::cout << std::endl;
            temp = temp->getRightIndictor();
        } while (temp->getRightIndictor() != nullptr);
    }

    DataStructure *temp = head;
    do {
        if (temp->getIntType() != nullptr) {
            std::cout << temp->getIntType()->getTypeName() << " ";
            std::cout << temp->getIntType()->getName() << " ";
            std::cout << temp->getIntType()->getValue();
        }
        if (temp->getStringType() != nullptr) {
            std::cout << temp->getStringType()->getTypeName() << " ";
            std::cout << temp->getStringType()->getName() << " ";
            std::cout << temp->getStringType()->getValue();
        }
        if (temp->getDoubleType() != nullptr) {
            std::cout << temp->getDoubleType()->getTypeName() << " ";
            std::cout << temp->getDoubleType()->getName() << " ";
            std::cout << temp->getDoubleType()->getValue();
        }
        if (temp->getDateType() != nullptr) {
            std::cout << temp->getDateType()->getTypeName() << " ";
            std::cout << temp->getDateType()->getName() << " ";
            std::cout << temp->getDateType()->getValue().getCHSString();
        }
        std::cout << std::endl;
        temp = temp->getDownIndictor();
    } while (temp->getDownIndictor() != nullptr);
    if (temp->getIntType() != nullptr) {
        std::cout << temp->getIntType()->getTypeName() << " ";
        std::cout << temp->getIntType()->getName() << " ";
        std::cout << temp->getIntType()->getValue();
    }
    if (temp->getStringType() != nullptr) {
        std::cout << temp->getStringType()->getTypeName() << " ";
        std::cout << temp->getStringType()->getName() << " ";
        std::cout << temp->getStringType()->getValue();
    }
    if (temp->getDoubleType() != nullptr) {
        std::cout << temp->getDoubleType()->getTypeName() << " ";
        std::cout << temp->getDoubleType()->getName() << " ";
        std::cout << temp->getDoubleType()->getValue();
    }
    if (temp->getDateType() != nullptr) {
        std::cout << temp->getDateType()->getTypeName() << " ";
        std::cout << temp->getDateType()->getName() << " ";
        std::cout << temp->getDateType()->getValue().getCHSString();
    }

    return 0;
}
