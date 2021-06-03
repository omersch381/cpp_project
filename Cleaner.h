#include <iostream>
using namespace std;

#ifndef CLEANER_H
#define CLEANER_H

#include "Employee.h"

class Cleaner: public Employee
{
    
public:
    const char* clean(){return "Cleaning!";}
    virtual char* showEmployee();
};

#endif //CLEANER_H