#include <iostream>
using namespace std;

#ifndef EMPLOYEE_E
#define EMPLOYEE_E

#include "Person.h"

class Employee : public Person
{

protected:
    const Date* startingDate;
    int salary;
    int numOfWorkingDays;
    char** weeklyWorkingDays;

    // TODO - we might not use this constructor
    // Employee(const Person& thePerson, const Date& startingDate, int salary, int numOfWorkingDays, char** weeklyWorkingDays): Person(thePerson)
    // {
    //     this->startingDate = new Date(startingDate.getDay(), startingDate.getMonth(), startingDate.getYear());
    //     this->salary = salary;
    //     this->numOfWorkingDays = numOfWorkingDays;
    //     this->weeklyWorkingDays = weeklyWorkingDays;
    // }
    Employee(int id, const char* name, const Date* birthDate, const Date* startingDate, int salary, int numOfWorkingDays, char** weeklyWorkingDays)
     : Person(id, name, birthDate), startingDate(startingDate), salary(salary), numOfWorkingDays(numOfWorkingDays), weeklyWorkingDays(weeklyWorkingDays)
    {
    }

    ~Employee()
    {
        delete startingDate;
        for (int i = 0; i < numOfWorkingDays; i++)
		    delete weeklyWorkingDays[i];

	    delete[]weeklyWorkingDays;
    }
public:
    bool operator<(const Employee& other) const{return (salary < other.salary);}

    bool operator>(const Employee& other) const{return (salary > other.salary);}

    bool operator==(const Employee& other) const{return (salary == other.salary);}

    void operator++(){salary += 1000;}

    void operator+=(int raise){salary += raise;}

    friend ostream& operator<<(ostream& os, const Employee& e);

    virtual char* showEmployee();

    const Date* getStartingDate() const{return startingDate;}
    int getSalary() const{return salary;}
    int getNumOfWorkingDays() const{return numOfWorkingDays;}
    char** getWeeklyWorkingDays() const{return weeklyWorkingDays;}
};

#endif //EMPLOYEE_E