#ifndef DATAMODELLER_H
#define DATAMODELLER_H

#include<memory>
#include<vector>
#include<variant>
#include"BusinessOwer.h"
#include"Employee.h"

using BusinessPointer = std::unique_ptr<BusinessOwer>;
using EmpPointer = std::unique_ptr<Employee>;
using VType = std::variant<BusinessPointer, EmpPointer>;



class DataModeller
{
private:
    VType _instance;
    std::vector<float> _goodPrice; 
    
public:
    DataModeller(VType v, const std::vector<float>& prices);
    void operator()();
    DataModeller()=delete;
    ~DataModeller()=default;

    const VType& instance() const { return _instance; }
};

#endif // DATAMODELLER_H
