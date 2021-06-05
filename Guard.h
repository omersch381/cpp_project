#include <iostream>
using namespace std;

#ifndef GUARD_H
#define GUARD_H

#include "Employee.h"
#include "Pistol.h"

class Guard: public Employee
{

protected:
    char* weaponSpecialty;
    Pistol* pistol;
    // Guard(const Guard& otherGuard);

public:
    Guard(int id, const char* name, const Date* birthDate, const Date* startingDate, int salary, int numOfWorkingDays, char** weeklyWorkingDays, const char* weaponSpecialty, const Pistol* p)
            : Employee(id, name, birthDate, startingDate, salary, numOfWorkingDays, weeklyWorkingDays), weaponSpecialty(nullptr), pistol(nullptr)
    {
        setWeaponSpecialty(weaponSpecialty);
        setPistol(p);
    }

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

    char* showEmployee() const { return "TODO: add implementation"; };

    void setWeaponSpecialty(const char* weaponSpecialty)
    {
        delete[]this->weaponSpecialty;
        this->weaponSpecialty = new char[strlen(weaponSpecialty) + 1];
        strcpy(this->weaponSpecialty, weaponSpecialty);
    }
};

#endif //GUARD_H