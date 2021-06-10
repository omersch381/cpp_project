#include <iostream>
using namespace std;

#ifndef ENGINEERING_TEAM_LEAD_H
#define ENGINEERING_TEAM_LEAD_H

#include "Manager.h"
#include "Engineer.h"

class EngineeringTeamLead: public Manager, public Engineer 
{
    //This class doesnt allow having a copy c'tor, so we made it private.
private:
    EngineeringTeamLead(const EngineeringTeamLead& otherEngineeringTeamLead);
    const EngineeringTeamLead& operator=(const EngineeringTeamLead& otherEngineeringTeamLead);
protected:
    Engineer* team;

public:
    virtual char* showEmployee();
    virtual ~EngineeringTeamLead(){};
};

#endif //ENGINEERING_TEAM_LEAD_H