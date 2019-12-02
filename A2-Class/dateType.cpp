#include <cstring>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <iomanip>

//#include "dateType.h"
using namespace std;
///CONSTRUCTOR///
//Constructor with parameters
//Defaults to 4/20/1969 if no parameters are specified
dateType::dateType(int month, int day, int year)
{
	
	dateMonth = month;
	dateDay = day;
	dateYear = year;

}

///SETTERS///
void dateType::setDate(int month, int day, int year)
{
	
	dateMonth = month;
	dateDay = day;
	dateYear = year;

}




///GETTERS///
int dateType::getDay() const
{
	
	return dateDay;

}

int dateType::getMonth() const
{
	
	return dateMonth;
	
}

int dateType::getYear() const
{
	
	return dateYear;
	
}




	///METHODS///
void dateType::printDate(dateType date) const
{
	
cout << date.getMonth() << "-" << date.getDay() << "-" << date.getYear();

}
