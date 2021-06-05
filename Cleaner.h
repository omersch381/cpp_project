#include <iostream>
using namespace std;

#ifndef CLEANER_H
#define CLEANER_H

#include "Employee.h"

class Cleaner: public Employee
{
public:
    Cleaner(int id, const char* name, const Date* birthDate, const Date* startingDate, int salary, int numOfWorkingDays, char** weeklyWorkingDays)
            : Employee(id, name, birthDate, startingDate, salary, numOfWorkingDays, weeklyWorkingDays){}
    const char* clean(){return "Cleaning!";}
    char* showEmployee();
};

#endif //CLEANER_H