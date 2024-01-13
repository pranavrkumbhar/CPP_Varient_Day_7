

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include "EmployeeType.h"

class Employee
{
private:
    std::string _name;
    EmployeeType _type;
    float _salary;
public:
    Employee(/* args */) = delete;
    Employee(Employee& ) = delete;
    Employee(Employee&& ) = delete;

    Employee(std::string name, EmployeeType type, float salary);
    ~Employee() = default;

    float salary() const { return _salary; }

    EmployeeType type() const { return _type; }

    std::string name() const { return _name; }
};


#endif // EMPLOYEE_H
