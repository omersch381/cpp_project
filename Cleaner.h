#include <iostream>
using namespace std;

#ifndef CLEANER_H
#define CLEANER_H

#include "Employee.h"

class Cleaner: virtual public Employee
{
    
public:
    const char* clean(){return "Cleaning!";}
};

#endif //CLEANER_H