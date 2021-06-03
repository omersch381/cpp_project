#include <iostream>
using namespace std;

#ifndef ENGINEERING_TEAM_LEAD_H
#define ENGINEERING_TEAM_LEAD_H

#include "Manager.h"
#include "Engineer.h"

class EngineeringTeamLead: public Manager, public Engineer 
{
    
protected:
    Engineer* team;

public:
    virtual char* showEmployee();
};

#endif //ENGINEERING_TEAM_LEAD_H