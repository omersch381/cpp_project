#include <iostream>
using namespace std;

#ifndef PISTOL_H
#define PISTOL_H

#define MAX_NUM_OF_BULLETS 6

class Pistol
{ 
protected: 
    int numOfBullets;

public:
    Pistol(int numOfBullets)
    {
        this->numOfBullets = numOfBullets;
    }

    Pistol(const Pistol& otherPistol)
    {
        *this = otherPistol;
    }
    virtual ~Pistol(){};

    // In Pistol we don't have a dynamic allocation so we don't need a move constructor

    const Pistol& operator=(const Pistol& otherPistol)
    {
        if (this != &otherPistol)
            this->numOfBullets = otherPistol.numOfBullets;

        return *this;
    }

    void setNumOfBullets(int numOfBullets)
    {
        if (numOfBullets >= 0 && numOfBullets <= MAX_NUM_OF_BULLETS)
            this->numOfBullets = numOfBullets;
    }

    void fire(){setNumOfBullets(this->getNumOfBullets() - 1);}

    int getNumOfBullets() const {return numOfBullets;}
};

#endif //PISTOL_H
