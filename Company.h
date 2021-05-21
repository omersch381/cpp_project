#include <iostream>
using namespace std;

#ifndef COMPANY_H
#define COMPANY_H

#include "Employee.h"

class Company
{ 
protected: 
    Employee** employees;

public:
    Company();
};

#endif //COMPANY_H
