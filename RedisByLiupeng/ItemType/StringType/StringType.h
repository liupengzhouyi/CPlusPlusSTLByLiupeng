//
// Created by 刘鹏 on 2020/10/2.
//

#ifndef CPLUSPLUSSTLBYLIUPENG_STRINGTYPE_H
#define CPLUSPLUSSTLBYLIUPENG_STRINGTYPE_H

#include<iostream>
#include<string>

class StringType {
private:
    std::string value;

    std::string name;

    std::string typeName;

public:
    const std::string &getValue() const;

    void setValue(const std::string &value);

    const std::string &getName() const;

    void setName(const std::string &name);

    const std::string &getTypeName() const;

    void setTypeName(const std::string &typeName);

};


#endif //CPLUSPLUSSTLBYLIUPENG_STRINGTYPE_H
