//
// Created by 刘鹏 on 2020/10/3.
//

#include "DataStructure.h"

DataStructure::DataStructure() {
    intType = nullptr;
    doubleType = nullptr;
    stringType = nullptr;
    dateType = nullptr;
    upIndicator = nullptr;
    downIndictor = nullptr;
    lifeIndictor = nullptr;
    rightIndictor = nullptr;
    isNull = true;
}

bool DataStructure::isNull1() const {
    return isNull;
}

void DataStructure::setIsNull(bool isNull) {
    DataStructure::isNull = isNull;
}

IntType *DataStructure::getIntType() const {
    return intType;
}

void DataStructure::setIntType(IntType *intType) {
    this->setIsNull(false);
    DataStructure::intType = intType;
}

DoubleType *DataStructure::getDoubleType() const {
    return doubleType;
}

void DataStructure::setDoubleType(DoubleType *doubleType) {
    this->setIsNull(false);
    DataStructure::doubleType = doubleType;
}

StringType *DataStructure::getStringType() const {
    return stringType;
}

void DataStructure::setStringType(StringType *stringType) {
    this->setIsNull(false);
    DataStructure::stringType = stringType;
}

DateType *DataStructure::getDateType() const {
    return dateType;
}

void DataStructure::setDateType(DateType *dateType) {
    this->setIsNull(false);
    DataStructure::dateType = dateType;
}

DataStructure *DataStructure::getUpIndicator() const {
    return upIndicator;
}

void DataStructure::setUpIndicator(DataStructure *upIndicator) {
    DataStructure::upIndicator = upIndicator;
}

DataStructure *DataStructure::getDownIndictor() const {
    return downIndictor;
}

void DataStructure::setDownIndictor(DataStructure *downIndictor) {
    DataStructure::downIndictor = downIndictor;
}

DataStructure *DataStructure::getLifeIndictor() const {
    return lifeIndictor;
}

void DataStructure::setLifeIndictor(DataStructure *lifeIndictor) {
    DataStructure::lifeIndictor = lifeIndictor;
}

DataStructure *DataStructure::getRightIndictor() const {
    return rightIndictor;
}

void DataStructure::setRightIndictor(DataStructure *rightIndictor) {
    DataStructure::rightIndictor = rightIndictor;
}
