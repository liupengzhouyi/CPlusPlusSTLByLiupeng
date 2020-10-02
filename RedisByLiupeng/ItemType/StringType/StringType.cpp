//
// Created by 刘鹏 on 2020/10/2.
//

#include "StringType.h"

const std::string &StringType::getValue() const {
    return value;
}

void StringType::setValue(const std::string &value) {
    StringType::value = value;
}

const std::string &StringType::getName() const {
    return name;
}

void StringType::setName(const std::string &name) {
    StringType::name = name;
}

const std::string &StringType::getTypeName() const {
    return typeName;
}

void StringType::setTypeName(const std::string &typeName) {
    StringType::typeName = typeName;
}
