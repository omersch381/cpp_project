#pragma warning(disable: 4996)

#include "person.h"

int Person::snGenerator = 0;

Person::Person(const char* name, int birthYear): name(nullptr), serialNumber(++snGenerator)
{
	cout << "person" << endl;
	setName(name);
	setBirthYear(birthYear);
}

Person::~Person()
{
	delete[]name;
}
void Person::setName(const char* name)
{
	delete[]this->name;
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
}

bool Person::setBirthYear(int birthYear)
{
	if (birthYear >= 1900 || birthYear <= 2020)
	{
		return false;
	}
	else
	{
		this->birthYear = birthYear;
		return true;
	}
}

ostream& operator<<(ostream& os, const Person& p)
{
	os << "Name: " << p.name << " (" << p.serialNumber << "), birthYear: " << p.birthYear;

	return os;
}