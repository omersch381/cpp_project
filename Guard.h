#include <iostream>
using namespace std;

#ifndef GUARD_H
#define GUARD_H

#include "Employee.h"
#include "Pistol.h"

class Guard: public Employee
{
    //This class doesnt allow having a copy c'tor, so we made it private.
private:
    Guard(const Guard& otherGuard);
    const Guard& operator=(const Guard& otherGuard);
protected:
    char* weaponSpecialty;
    Pistol* pistol;

public:
    Guard(int id, const char* name, const Date* birthDate, const Date* startingDate, int salary, int numOfWorkingDays, char** weeklyWorkingDays, const char* weaponSpecialty, const Pistol* p)
            : Employee(id, name, birthDate, startingDate, salary, numOfWorkingDays, weeklyWorkingDays), weaponSpecialty(nullptr), pistol(nullptr)
    {
        setWeaponSpecialty(weaponSpecialty);
        setPistol(p);
    }
    //This class doesnt allow having a copy c'tor
    ~Guard()
    {
        delete this->pistol;
        delete this->weaponSpecialty;
    }

    void setPistol(const Pistol* thePistol)
    {
        delete this->pistol;
        this->pistol = new Pistol(thePistol->getNumOfBullets());
    }

    const Pistol& getPistol() const {return *pistol;}

    const char* showEmployee() const { return "TODO: add implementation"; };

    void setWeaponSpecialty(const char* weaponSpecialty)
    {
        delete[]this->weaponSpecialty;
        this->weaponSpecialty = new char[strlen(weaponSpecialty) + 1];
        strcpy(this->weaponSpecialty, weaponSpecialty);
    }
};

#endif //GUARD_H