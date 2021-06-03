#include <iostream>
using namespace std;

#ifndef ENGINEER_H
#define ENGINEER_H

#include "Employee.h"

class Engineer: public Employee
{
protected:
    char* specialty;

public:
    Engineer(char* specialty);
    ~Engineer();
    virtual char* showEmployee();
};

#endif //ENGINEER_H