#ifndef DATETYPE_H
#define DATETYPE_H


#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

class dateType
{
public:
	void setDate(int month, int day, int year);
//Function to set the date.

//Postcondition: dateMonth = month; dateay = day;
// dateYear = year;

///GETTERS/// - Each returns its respective variable
	int getDay() const;

	int getMonth() const;

	int getYear() const;
	void printDate(dateType) const;

//Function to output the date in the form mm-dd-yyyy.


	dateType(int month = 1, int day = 1, int year = 1111);
//Full Constructor to set the date
//The member variables dateMonth, dateDay, and dateYear 
//are set according to the parameters.
//Postcondition: dMonth = month; dDay = day; dYear = year;
//If no values are specified, the default
//values are used to initialize the member
//variables.Composition (Aggregation) | 775

private:
	int dateMonth; //variable to store the month
	int dateDay; //variable to store the day
	int dateYear; //variable to store the year
};

#endif