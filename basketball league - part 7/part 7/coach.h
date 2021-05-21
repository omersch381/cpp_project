#ifndef __COACH_H
#define __COACH_H

#include "person.h"
#include <iostream>
using namespace std;

class Team;

class Coach : virtual public Person
{
	const Team* theTeam;

public:
	Coach(const Person& p, const Team* theTeam = nullptr);
	Coach(Person&& p, const Team* theTeam = nullptr);

	void giveInstructions() const;

	void setTeam(const Team* theTeam);

	friend ostream& operator<<(ostream& os, const Coach& theCoach);
};
#endif // __COACH_H