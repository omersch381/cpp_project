#include <iostream>
using namespace std;

#ifndef ENGINEERING_TEAM_LEAD_H
#define ENGINEERING_TEAM_LEAD_H

#include "Manager.h"
#include "Engineer.h"

class EngineeringTeamLead: virtual public Manager, virtual public Engineer 
{
    
protected:
    Engineer* team;

};

#endif //ENGINEERING_TEAM_LEAD_H