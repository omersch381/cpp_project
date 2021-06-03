#include <iostream>
using namespace std;

#ifndef COMPANY_H
#define COMPANY_H

#include "Employee.h"
#include "Guard.h"
#include "Cleaner.h"
#include "Engineer.h"
#include "Manager.h"

class Company
{ 
protected: 
    Employee** employees;

public:
    // Company();
    void addGuard(const Guard& g);
    void addCleaner(const Cleaner& c);
    void addEngineer(const Engineer& e);
    void addManager(const Manager& m);
};

#endif //COMPANY_H
