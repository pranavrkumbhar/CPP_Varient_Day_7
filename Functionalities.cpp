#include "Functionalities.h"

void CreateObject(Container &data)
{
    data.emplace_back( 
        std::make_unique<DataModeller>(
            //instance
            std::make_unique<Employee>(
                "Pranav",
                EmployeeType::REGULAR,
                780000.0f
            ),
            //vector of floats
            std::vector<float>{19.21f, 145.31f, 204.5f}
        )
    );
    data.emplace_back( 
        std::make_unique<DataModeller>(
            //instance
            std::make_unique<BusinessOwer>(
                1000.0f,
                20000.0f,
                "XYC corpo",
                BusinessType::MNC
            ),
            //vector of floats
            std::vector<float>{19.21f, 145.31f, 204.5f}
        )
    );
}

/*
    this function will accept a Container of DataModeller Pointer

    FOR EACH POINTER, perform the following

    a) capture the instance reference
    b) use holds_alternative to verify which type of pointer is present in the _instance
    c) if poiter is of type BusinessOwer
        1)use std::get to fetch BusinessOwerPointer (this will be safe because if has bee)
        2) use the fetched poiter in BusinessOwer 
*/

void calculateTaxPayable(const Container& data){

    for(const dataVariant& ptr : data){

        const VType& val = ptr->instance();

        if( std::holds_alternative<BusinessPointer>(val) ){

            const BusinessPointer& p = std::get<BusinessPointer>(val);
            std::cout<< "\nTax is 10% "<<0.1f * (p->revenue() - p->expense());
        }
        else{
            const EmpPointer& p = std::get<EmpPointer>(val);
            std::cout<< "\nTax is 20% "<<0.2f * p->salary() ;
        }
    }
}

void CallParenoperator(const Container& data){
    if(data.empty()){
        throw std::runtime_error("Data is empty .");
    }
    else{
        for(const dataVariant& ptr : data){
            ptr->operator()();
        }
    }
}


// design pattern 