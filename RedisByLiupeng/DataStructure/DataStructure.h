//
// Created by 刘鹏 on 2020/10/3.
//

#ifndef CPLUSPLUSSTLBYLIUPENG_DATASTRUCTURE_H
#define CPLUSPLUSSTLBYLIUPENG_DATASTRUCTURE_H


#include "../ItemType/IntType/IntType.h"
#include "../ItemType/DoubleType/DoubleType.h"
#include "../ItemType/StringType/StringType.h"
#include "../ItemType/DateType/DateType.h"

class DataStructure {
private:
    bool isNull = 1;

    IntType * intType;

    DoubleType * doubleType;

    StringType * stringType;

    DateType * dateType;

    DataStructure * upIndicator;

    DataStructure * downIndictor;

    DataStructure * lifeIndictor;

    DataStructure * rightIndictor;

public:
    DataStructure();
};


#endif //CPLUSPLUSSTLBYLIUPENG_DATASTRUCTURE_H
