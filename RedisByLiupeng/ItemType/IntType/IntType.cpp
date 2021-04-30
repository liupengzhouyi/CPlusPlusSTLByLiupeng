//
// Created by liupeng on 2021/4/30.
//

#include "IntType.h"

double IntType::getValue() const {
    return value;
}

void IntType::setValue(double value) {
    IntType::value = value;
}

const std::string &IntType::getName() const {
    return name;
}

void IntType::setName(const std::string &name) {
    IntType::name = name;
}

const std::string &IntType::getTypeName() const {
    return typeName;
}

void IntType::setTypeName(const std::string &typeName) {
    IntType::typeName = typeName;
}
