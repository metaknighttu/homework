#ifndef STUDENTTYPE_H
#define STUDENTTYPE_H

#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

class studentType
{
public:
	///CONSTRUCTORS///
	studentType(); 
	//Basic COnstructor
	
	
	studentType(string,string,int,string);
	//Partial Constructor - personal info only
	// Sets Varables: Name, Phone, Age, Gender
	
	
	studentType(string,int,string,int,string,
					string,double); 
	//Full Constructor
	//	Sets : Name, ID, Phone, Age, Gender,
	//				Standing, GPA
	
/*	
	studentType(const studentType); 
	// Copy Constructor
	//Copies the info from another student
*/	
	///SETTERS///
	void setName(string);
	void setID(int);
	void setPhoneNumber(string);
	void setAge(int);
	void setGender(string);
	void setClassStanding(string);
	void setGPA(double);
	
	///GETTERS///
	string getName() const;
	int getID() const;
	string getPhoneNumber() const;
	int getAge() const;
	string getGender() const;
	string getClassStanding() const;
	double getGPA() const;
	
	///METHODS///
	void print()  const; //Calls each getter and prints them.
	bool equals(studentType) const;
	
	///MISCELLANEOUS///
	
	///DESTRUCTOR///
//	~studentType(); 
	
private:
	///VARIABLES///
	string studentName;
	int studentID;
	string phoneNumber;
	int studentAge;
	string studentGender;
	string classStanding;
	double studentGPA;
	
};

#endif

