#ifndef CS1C1STUDENTTYPE_H
#define CS1C1STUDENTTYPE_H


#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <iostream>
#include <sstream>
#include <iomanip>

#include "studentType.h"
//#include "dateType.h"

using namespace std;

class CS1CstudentType: public studentType
{
public:
	///CONSTRUCTORS///
	CS1CstudentType(); //Basic - sets values to unknown
	
	CS1CstudentType(string,int,string,int,string, //Full - Sets every value
			string,double,int,string,string);
	
	///SETTERS///
	void setScore(int);
	void setPython(string);
	void setGraduation(string);
	
	///GETTERS///
	int getScore() const;
	string getPython() const;
	string getGraduation() const;
	
	///METHODS///
	void print() const;
	bool equals(CS1CstudentType) const;
	
private:
	int assignmentScore;
	string knowsPython;
	//dateType graduationDate;
	string graduationDate;

};

#endif