#include <iostream>
using namespace std;

#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"

enum class eDepartment { CLEANING, ENGINEERING, GUARDS, MANAGERS };

class Manager: public Employee
{
    //TODO - we need to make it an abstract class
    
protected:
    eDepartment department;

public:
    virtual char* showEmployee();
};

#endif //MANAGER_H