#include <iostream>
using namespace std;

#ifndef PERSON_H
#define PERSON_H 

#include "Date.h"
#include "string.h"

class Person 
{

protected: 
    int id;
    char* name;
    Date* birthDate;
public:
    Person(int id, const char* name, const Date* date) : id(id), name(nullptr), birthDate(nullptr)
    {
        this->id = id;
        setName(name);
        setDate(date);
    }
    ~Person()
    {
        delete[]name;
        delete birthDate;
    }
    
    int getID() const { return id;}
    char* getName() const { return name;}
    const Date& getDate() const { return *birthDate;} 
    
    void setName(const char* name)
    {
        delete[]this->name;
	    this->name = new char[strlen(name) + 1];
	    strcpy(this->name, name);
    }
    
    void setDate(const Date* otherDate)
    {
        delete this->birthDate;
        this->birthDate = new Date(otherDate->getDay(), otherDate->getMonth(), otherDate->getYear());
    }
};

#endif //PERSON_H