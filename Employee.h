#include <iostream>
using namespace std;

#ifndef EMPLOYEE_E
#define EMPLOYEE_E

#include "Person.h"

class Employee : public Person
{
    //This class doesnt allow having a copy c'tor, so we made it private.
private:
    Employee(const Employee& otherEmployee);
    const Employee& operator=(const Employee& otherEmployee);
protected:
    const Date* startingDate;
    int salary;
    int numOfWorkingDays;
    char** weeklyWorkingDays;

    Employee(int id, const char* name, const Date* birthDate, const Date* startingDate, int salary, int numOfWorkingDays, char** weeklyWorkingDays)
            : Person(id, name, birthDate), startingDate(startingDate), salary(salary), numOfWorkingDays(numOfWorkingDays), weeklyWorkingDays(weeklyWorkingDays){}

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

    virtual const char* showEmployee() const {return "show func in employee";};

    const Date* getStartingDate() const{return startingDate;}
    int getSalary() const{return salary;}
    int getNumOfWorkingDays() const{return numOfWorkingDays;}
    char** getWeeklyWorkingDays() const{return weeklyWorkingDays;}
};

#endif //EMPLOYEE_E