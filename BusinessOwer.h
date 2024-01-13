


#ifndef BUSINESSOWER_H
#define BUSINESSOWER_H

#include<iostream>
#include"BusinessType.h"

class BusinessOwer
{
private:
    float _expense;
    float _revenue;
    std::string _registerBusinessName;
    BusinessType _type;

    
public:

    BusinessOwer(float expense, float revenue, std::string name, BusinessType type);
    BusinessOwer()=delete;
    ~BusinessOwer()=default;

    float expense() const { return _expense; }

    float revenue() const { return _revenue; }

    std::string registerBusinessName() const { return _registerBusinessName; }

    BusinessType type() const { return _type; }

    friend std::ostream &operator<<(std::ostream &os, const BusinessOwer &rhs);
};

#endif // BUSINESSOWER_H
