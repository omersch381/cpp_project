#include <iostream>
using namespace std;

#include "player.h"
#include "team.h"

Player::Player(const Person& thePerson, const TShirt& shirt) : Person(thePerson), theTShirt(shirt)
{
	theTeam = nullptr;
	numOfPoints = 0;
}
Player::Player(const char* name, int birthYear, const TShirt& shirt) 
	: Person(name, birthYear), theTShirt(shirt),  numOfPoints(0)
{	
	cout << "player 1" << endl;
	setBirthYear(birthYear);
}

Player::Player(const char* name, int birthYear, /*const*/ TShirt&& shirt) 
	: Person(name, birthYear), theTShirt(std::move(shirt)), numOfPoints(0)
{
	cout << "player 2" << endl;
	//setTShirt(shirt);
	setBirthYear(birthYear);
	numOfPoints = 0;
}

bool Player::setBirthYear(int birthYear)
{
	if (birthYear >= 2002 || birthYear <= 1980)
	{
		return false;
	}
	else
	{
		this->birthYear = birthYear;
		return true;
	}
}

/*void Player::setTShirt(const TShirt& shirt)
{
	theTShirt = shirt;
}*/

bool Player::operator<(const Player& other) const
{
	return (numOfPoints < other.numOfPoints);
}

bool Player::operator>(const Player& other) const
{
	return (numOfPoints > other.numOfPoints);
}

bool Player::operator==(const Player& other) const
{
	return (numOfPoints == other.numOfPoints);
}

ostream& operator<<(ostream& os, const Player& p)
{
	os << (Person&)p << ", numOfPoints: " << p.numOfPoints << ", tshirt: " << p.theTShirt;
	return os;
}