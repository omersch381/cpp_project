#include <iostream>
using namespace std;

#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"

class Manager: public Employee
{
public:
    enum class eDepartment { CLEANING, ENGINEERING, GUARDS, MANAGERS };
private:
    eDepartment department;
    //This class doesnt allow having a copy c'tor, so we made it private.
    Manager(const Manager& otherManager);
    const Manager& operator=(const Manager& otherManager);
public:
    Manager(int id, const char* name, const Date* birthDate, const Date* startingDate, int salary, int numOfWorkingDays, char** weeklyWorkingDays, eDepartment _department)
            : Employee(id, name, birthDate, startingDate, salary, numOfWorkingDays, weeklyWorkingDays){
        setDepartment(_department);
    }
    //This class doesnt allow having a copy c'tor
    virtual ~Manager(){};
    eDepartment getDepartment() const { return department; }
    void setDepartment(eDepartment _department) { department = _department;}
    const char* showEmployee() const { return "TODO: add implementation"; };
};

#endif //MANAGER_H