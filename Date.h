#include <iostream>
using namespace std;

#ifndef DATE_H
#define DATE_H

class Date 
{ 
protected: 
    int day;
    int month;
    int year;
public:
    Date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    
    Date(const Date& otherDate)
    {
        *this = otherDate;
    }
    
    // In date we don't have a dynamic allocation so we don't need a move constructor
    // TODO

    int getDay() const{ return day;}
    int getMonth() const{ return month;}
    int getYear() const{ return year;}

    const Date& operator=(const Date& otherDate)
    {
        if (this != &otherDate)
        {
            day = otherDate.day;
            month = otherDate.month;
            year = otherDate.year;
        }

        return *this;
    }
};

#endif //DATE_H
