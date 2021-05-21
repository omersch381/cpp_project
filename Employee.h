#include <iostream>
using namespace std;

#ifndef EMPLOYEE_E
#define EMPLOYEE_E

#include "Person.h"

class Employee : virtual public Person
{

protected:
    const Date* startingDate;
    int salary;
    int numOfWorkingDays;
    char** weeklyWorkingDays;

public:
    Employee(const Person& thePerson, const Date& startingDate, int salary, int numOfWorkingDays, char** weeklyWorkingDays): Person(thePerson)
    { //TODO
        startingDate = new Date(startingDate.getDay(), startingDate.getMonth(), startingDate.getYear());
    }

    // Employee(const Employee& otherEmployee)
    // {

    // }

    ~Employee()
    {
        delete startingDate;
        for (int i = 0; i < numOfWorkingDays; i++)
		    delete weeklyWorkingDays[i];

	    delete[]weeklyWorkingDays;
    }
    
    bool operator<(const Employee& other) const{return (salary < other.salary);}

    bool operator>(const Employee& other) const{return (salary > other.salary);}

    bool operator==(const Employee& other) const{return (salary == other.salary);}

    void operator++(){salary += 1000;}

    void operator+=(int raise){salary += raise;}

    friend ostream& operator<<(ostream& os, const Employee& e);
};

#endif //EMPLOYEE_E