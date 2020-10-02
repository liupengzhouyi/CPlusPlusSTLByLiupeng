//
// Created by 刘鹏 on 2020/10/2.
//

#include "DoubleType.h"

double DoubleType::getValue() const {
    return value;
}

void DoubleType::setValue(double value) {
    DoubleType::value = value;
}

const std::string &DoubleType::getName() const {
    return name;
}

void DoubleType::setName(const std::string &name) {
    DoubleType::name = name;
}

const std::string &DoubleType::getTypeName() const {
    return typeName;
}

void DoubleType::setTypeName(const std::string &typeName) {
    DoubleType::typeName = typeName;
}
