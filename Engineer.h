#include <iostream>
using namespace std;

#ifndef ENGINEER_H
#define ENGINEER_H

#include "Employee.h"

class Engineer: virtual public Employee
{
protected:
    char* specialty;

public:
    Engineer(char* specialty);
    ~Engineer();
};

#endif //ENGINEER_H