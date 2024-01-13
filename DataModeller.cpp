#include "DataModeller.h"

DataModeller::DataModeller(VType v, const std::vector<float>& prices)
:_goodPrice(prices),
_instance(std::move(v))
{
}

void DataModeller::operator()()
{
    if(_goodPrice.empty()){
        throw std::runtime_error("Not found");
    }
    float total = 0.0f;

    for(float val : _goodPrice) {
        total += val;
    }

    std::cout << "Average value is : "<< total/_goodPrice.size() <<"\n";


}
