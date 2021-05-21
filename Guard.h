#include <iostream>
using namespace std;

#ifndef GUARD_H
#define GUARD_H

#include "Employee.h"
#include "Pistol.h"

class Guard: virtual public Employee
{

protected:
    char* weaponSpecialty;
    Pistol* pistol;
    Guard(const Guard& otherGuard);

public:
    // TODO
    Guard(const Employee& theEmployee, const Pistol& thePistol, const char* weaponSpecialty) : Employee(theEmployee), weaponSpecialty(nullptr)
    {
        setPistol(&thePistol);
    }

    ~Guard()
    {
        //TODO
    }

    void setPistol(const Pistol* thePistol)
    {
        delete this->pistol;
        this->pistol = new Pistol(thePistol->getNumOfBullets());
    }

    const Pistol& getPistol() const {return *pistol;}
};

#endif //GUARD_H