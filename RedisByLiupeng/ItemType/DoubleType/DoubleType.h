//
// Created by 刘鹏 on 2020/10/2.
//

#ifndef CPLUSPLUSSTLBYLIUPENG_DOUBLETYPE_H
#define CPLUSPLUSSTLBYLIUPENG_DOUBLETYPE_H
#include<iostream>
#include<string>

class DoubleType {
private:
    double value;

    std::string name;

    std::string typeName;

public:
    double getValue() const;

    void setValue(double value);

    const std::string &getName() const;

    void setName(const std::string &name);

    const std::string &getTypeName() const;

    void setTypeName(const std::string &typeName);
};


#endif //CPLUSPLUSSTLBYLIUPENG_DOUBLETYPE_H
