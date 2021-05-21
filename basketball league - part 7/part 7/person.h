#ifndef __PERSON_H
#define __PERSON_H

#include <iostream>
using namespace std;

class Person
{
protected:
	static int snGenerator;
	int serialNumber;
	char* name;
	int birthYear;

protected:
	Person(const Person& other) :name(nullptr)
	{
		cout << "person 0" << endl;
		serialNumber = other.serialNumber;
		setName(other.name);
		birthYear = other.birthYear;
	}
	const Person& operator=(const Person& other);
public:
	Person(const char* name, int birthYear);

	~Person();
	void setName(const char* name);
	bool setBirthYear(int birthYear);

	inline const char* getName() const;//  { return name; }
	int getBirthYear() const { return birthYear; }

	static int getNumOfPersons() { return snGenerator; }

	friend ostream& operator<<(ostream& os, const Person& p);
};

const char* Person::getName() const
{
	return name;
}

#endif // __PERSON_H