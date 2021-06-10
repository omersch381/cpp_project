#include <iostream>
using namespace std;

#ifndef ENGINEER_H
#define ENGINEER_H

#include "Employee.h"

class Engineer: public Employee
{
    //This class doesnt allow having a copy c'tor, so we made it private.
private:
    Engineer(const Engineer& otherEngineer);
    const Engineer& operator=(const Engineer& otherEngineer);
protected:
    char* specialty;

public:
    Engineer(int id, const char* name, const Date* birthDate, const Date* startingDate, int salary, int numOfWorkingDays, char** weeklyWorkingDays, const char* specialty)
            : Employee(id, name, birthDate, startingDate, salary, numOfWorkingDays, weeklyWorkingDays), specialty(nullptr)
    {
        setSpecialty(specialty);
    }
    //This class doesnt allow having a copy c'tor
    Engineer(char* specialty);
    virtual ~Engineer(){};
    const char* showEmployee() const { return "TODO: add implementation"; };
    void setSpecialty(const char* specialty)
    {
        delete[]this->specialty;
        this->specialty = new char[strlen(specialty) + 1];
        strcpy(this->specialty, specialty);
    }
};

#endif //ENGINEER_H