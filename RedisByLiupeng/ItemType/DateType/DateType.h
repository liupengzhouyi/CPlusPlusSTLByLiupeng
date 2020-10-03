//
// Created by 刘鹏 on 2020/10/3.
//

#ifndef CPLUSPLUSSTLBYLIUPENG_DATETYPE_H
#define CPLUSPLUSSTLBYLIUPENG_DATETYPE_H


#include "DateByLiuPeng/DateByLiupeng.h"

class DateType {
private:
    DateByLiupeng value;

    std::string name;

    std::string typeName;

public:
    const DateByLiupeng &getValue() const;

    void setValue(const DateByLiupeng &value);

    const std::string &getName() const;

    void setName(const std::string &name);

    const std::string &getTypeName() const;

    void setTypeName(const std::string &typeName);

};


#endif //CPLUSPLUSSTLBYLIUPENG_DATETYPE_H
