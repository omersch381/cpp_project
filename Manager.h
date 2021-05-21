#include <iostream>
using namespace std;

#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"

enum class eDepartment { CLEANING, ENGINEERING, GUARDS, MANAGERS };

class Manager: virtual public Employee
{
    
protected:
    eDepartment department;

};

#endif //MANAGER_H