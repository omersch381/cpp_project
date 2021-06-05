#include <iostream>
using namespace std;

#ifndef COMPANY_H
#define COMPANY_H

#include "Employee.h"
#include "Guard.h"
#include "Cleaner.h"
#include "Engineer.h"
#include "Manager.h"

class Company
{
protected:
    Employee** employees;

public:
    // Company();
    //TODO: verify if receiving the employees as const i a good idea in add methods
    void addGuard(const Guard& g){};
    void updateGuard(const Guard& g){};
    void removeGuard(const Guard& g){};
    void addCleaner(const Cleaner& c){};
    void updateCleaner(const Cleaner& c){};
    void removeCleaner(const Cleaner& c){};
    void addEngineer(const Engineer& e){};
    void updateEngineer(const Engineer& e){};
    void removeEngineer(const Engineer& e){};
    void addManager(const Manager& m){};
    void updateManager(const Manager& m){};
    void removeManager(const Manager& m){};
    void showEmployeesWithHighestSalaries(){};
    void sendBirthdayCards(){}; //should iterate over all the employees in the company and check who has birthdays this months
    void addBonusToOutstandingEngineer(const Engineer& e, const int bonus){}; //give a bonus to an outstanding engineer
    void printDailyShift(const char* day){}; //print all the working employees of the given day
};

#endif //COMPANY_H
