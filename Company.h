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
    //This class doesnt allow having a copy c'tor, so we made it private.
private:
    Company(const Company& otherCompany);
    const Company& operator=(const Company& otherCompany);
protected:
    Employee** employees;
public:
    Company(){};
    virtual ~Company(){};
    // We didn't allow adding const epmloyees as we might want to update them later on
    void addGuard(Guard& g){};
    void updateGuard(Guard& g){};
    void removeGuard(Guard& g){};
    void addCleaner(Cleaner& c){};
    void updateCleaner(Cleaner& c){};
    void removeCleaner(Cleaner& c){};
    void addEngineer(Engineer& e){};
    void updateEngineer(Engineer& e){};
    void removeEngineer(Engineer& e){};
    void addManager(Manager& m){};
    void updateManager(Manager& m){};
    void removeManager(Manager& m){};
    void showEmployeesWithHighestSalaries(){};
    void sendBirthdayCards(){}; //should iterate over all the employees in the company and check who has birthdays this months
    void addBonusToOutstandingEngineer(Engineer& e, const int bonus){}; //give a bonus to an outstanding engineer
    void printDailyShift(const char* day){}; //print all the working employees of the given day
};

#endif //COMPANY_H
