#include "coach.h"
#include "team.h"

Coach::Coach(const Person& p, const Team* theTeam) : Person(p), theTeam(theTeam)
{
	cout << "Coach 1" << endl;
}

Coach::Coach(Person&& p, const Team* theTeam) : Person(std::move(p)), theTeam(theTeam)
{
	cout << "Coach 2" << endl;
}

void Coach::giveInstructions() const 
{
	cout << "The coach " << name << " says raise your hand!\n";
}

void Coach::setTeam(const Team* theTeam)
{
	this->theTeam = theTeam;
}

ostream& operator<<(ostream& os, const Coach& theCoach)
{
	os << (Person&)theCoach << ", coaches " << (theCoach.theTeam == nullptr ? "-" : theCoach.theTeam->getName());
	return os;
}