#include <iostream>
using namespace std;

#ifndef CLEANER_H
#define CLEANER_H

#include "Employee.h"

class Cleaner: public Employee
{
    //This class doesnt allow having a copy c'tor, so we made it private.
private:
    Cleaner(const Cleaner& otherCleaner);
    const Cleaner& operator=(const Cleaner& otherCleaner);
public:
    Cleaner(int id, const char* name, const Date* birthDate, const Date* startingDate, int salary, int numOfWorkingDays, char** weeklyWorkingDays)
            : Employee(id, name, birthDate, startingDate, salary, numOfWorkingDays, weeklyWorkingDays){}
    //This class doesnt allow having a copy c'tor
    virtual ~Cleaner(){};
    const char* clean(){return "Cleaning!";}
    const char* showEmployee() const { return "TODO: add implementation"; };
};

#endif //CLEANER_H