#include "topTeam.h"

TopTeam::TopTeam(const char* name, const char* country) : Team(name), country(nullptr)
{
	cout << "Creating TopTeam " << this->name << endl;
	setCountry(country);
}

TopTeam::TopTeam(const Team& theTeam, const char* country) : Team(theTeam)
{
	setCountry(country);
}

TopTeam::TopTeam(const TopTeam& other) : Team(other), country(nullptr)
{
	//setCountry(other.country);
	*this = other;
}

TopTeam::TopTeam(TopTeam&& other) : Team(std::move(other)), country(nullptr)
{
	std::swap(country, other.country);
}

TopTeam::~TopTeam()
{
	delete[]country;
}

const TopTeam& TopTeam::operator=(const TopTeam& other)
{
	if (this != &other)
	{
		Team::operator=(other);
		//(Team&)*this = other;
		setCountry(other.country);
	}
	return *this;
}

const TopTeam& TopTeam::operator=(TopTeam&& other)
{
	if (this != &other)
	{
		Team::operator=(std::move(other));
		std::swap(country, other.country);
	}

	return *this;
}

void TopTeam::setCountry(const char* country)
{
	delete[]this->country;
	this->country = new char[strlen(country)+1];
	strcpy(this->country, country);
}

ostream& operator<<(ostream& os, const TopTeam& t)
{
	os << "From " << t.country << " the team " << (Team&)t << endl;
	return os;
}