//
// Created by liupeng on 2021/4/30.
//

#ifndef CPLUSPLUSSTLBYLIUPENG_INTTYPE_H
#define CPLUSPLUSSTLBYLIUPENG_INTTYPE_H


#include <string>

class IntType {

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


#endif //CPLUSPLUSSTLBYLIUPENG_INTTYPE_H
