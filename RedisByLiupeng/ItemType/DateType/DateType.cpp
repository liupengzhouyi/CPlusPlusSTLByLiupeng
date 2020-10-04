//
// Created by 刘鹏 on 2020/10/3.
//

#include "DateType.h"

const DateByLiupeng DateType::getValue() const {
    return value;
}

void DateType::setValue(const DateByLiupeng &value) {
    DateType::value = value;
}

const std::string &DateType::getName() const {
    return name;
}

void DateType::setName(const std::string &name) {
    DateType::name = name;
}

const std::string &DateType::getTypeName() const {
    return typeName;
}

void DateType::setTypeName(const std::string &typeName) {
    DateType::typeName = typeName;
}
