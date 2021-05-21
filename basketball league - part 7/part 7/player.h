#ifndef __PLAYER_H
#define __PLAYER_H

#pragma warning(disable: 4996)

#include <iostream>
using namespace std;

#include "tshirt.h"
#include "Person.h"

class Team;

class Player : virtual public Person
{
private:
	TShirt theTShirt;
	const Team* theTeam;
	int numOfPoints;

protected:
	Player(const Player& other) :Person(other), theTShirt(other.theTShirt)
	{
		theTeam = other.theTeam;
		numOfPoints = other.numOfPoints;
	}
public:
	Player(const Person& thePerson, const TShirt& shirt);
	Player(const char* name, int birthYear, const TShirt& shirt);
	Player(const char* name, int birthYear, /*const*/ TShirt&& shirt);
	
	bool setBirthYear(int birthYear);
	void setTeam(Team* theTeam) { this->theTeam = theTeam; }

	void addPoints(int more) { numOfPoints += more; }
	const Player& operator+=(int more) { numOfPoints += more; return *this; }

	// prefix
	const Player& operator++() { numOfPoints++; return *this; }
	// postfix
	Player operator++(int) 
	{
		Player temp(*this);
		numOfPoints++;
		return temp;
	}

	bool operator<(const Player& other) const;
	bool operator>(const Player& other) const;
	bool operator==(const Player& other) const;
	void shoot() const { cout << "Player " << name << " is shooting the ball!!!\n"; }

	friend ostream& operator<<(ostream& os, const Player& p);
};

#endif  // __PLAYER_H

