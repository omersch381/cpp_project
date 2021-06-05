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
public:
    Manager(int id, const char* name, const Date* birthDate, const Date* startingDate, int salary, int numOfWorkingDays, char** weeklyWorkingDays, eDepartment _department)
            : Employee(id, name, birthDate, startingDate, salary, numOfWorkingDays, weeklyWorkingDays){
        setDepartment(_department);
    }
    eDepartment getDepartment() const { return department; }
    void setDepartment(eDepartment _department) { department = _department;}
    char* showEmployee();
};

#endif //MANAGER_H