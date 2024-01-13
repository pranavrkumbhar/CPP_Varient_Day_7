#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "Employee.h"
#include "BusinessOwer.h"
#include "DataModeller.h"
#include <vector>

using dataVariant = std::unique_ptr < DataModeller >;
using Container = std::vector < dataVariant >;

void CreateObject(Container& );

void calculateTaxPayable(const Container& );

void CallParenoperator(const Container& );

#endif // FUNCTIONALITIES_H
