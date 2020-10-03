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

    bool isNull1() const;

    void setIsNull(bool isNull);

    IntType *getIntType() const;

    void setIntType(IntType *intType);

    DoubleType *getDoubleType() const;

    void setDoubleType(DoubleType *doubleType);

    StringType *getStringType() const;

    void setStringType(StringType *stringType);

    DateType *getDateType() const;

    void setDateType(DateType *dateType);

    DataStructure *getUpIndicator() const;

    void setUpIndicator(DataStructure *upIndicator);

    DataStructure *getDownIndictor() const;

    void setDownIndictor(DataStructure *downIndictor);

    DataStructure *getLifeIndictor() const;

    void setLifeIndictor(DataStructure *lifeIndictor);

    DataStructure *getRightIndictor() const;

    void setRightIndictor(DataStructure *rightIndictor);


};


#endif //CPLUSPLUSSTLBYLIUPENG_DATASTRUCTURE_H
