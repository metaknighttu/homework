#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <iostream>
#include <sstream>
#include <iomanip>

#include "studentType.h"
using namespace std;


	///CONSTRUCTORS///
studentType::studentType()	
//Basic Constructor
{
	
	setName("Unknown Name");
	setID(-1);
	setPhoneNumber("Unknown Number");
	setAge(-1);
	setGender("Unknown Gender");
	setClassStanding("Unknown Class");
	setGPA(-1.1);
	
}

studentType::studentType(string name,string phone,
						int age,string gender) 
//Partial Constructor - Sets perosnal info only
{

	setName(name);
	setID(-1);
	setPhoneNumber(phone);
	setAge(age);
	setGender(gender);
	setClassStanding("Unknown Class");
	setGPA(-1.1);
	
}

studentType::studentType(string name,int ID,string phone,
		int age,string gender,string classStanding,double GPA)
//Full Constructor
{
	
	setName(name);
	setID(ID);
	setPhoneNumber(phone);
	setAge(age);
	setGender(gender);
	setClassStanding(classStanding);
	setGPA(GPA);
	
}

/*
studentType::studentType(const studentType &student2)
//Copy Constructor
{
	
	setName(student2.getName());
	setID(student2.getID());
	setPhoneNumber(student2.getPhoneNumber());
	setAge(student2.getAge());
	setGender(student2.getGender());
	setClassStanding(student2.getClassStanding());
	setGPA(student2.getGPA());

}
*/
	///SETTERS/// - Each sets its respective variable
void studentType::setName(string name)
{
		
	studentName = name;
		
}	

void studentType::setID(int ID)
{
	
	studentID = ID;
	
}

void studentType::setPhoneNumber(string number)
{
	
	phoneNumber = number;
	
}

void studentType::setAge(int age)
{
	
	studentAge = age;
	
}

void studentType::setGender(string gender)
{
	
	studentGender = gender;
	
}

void studentType::setClassStanding(string standing)
{
	
	classStanding = standing;
	
}

void studentType::setGPA(double gpa)
{
	
	studentGPA = gpa;
	
}
	
	
	
	///GETTERS/// - Each returns its respective variable
string studentType::getName() const
{
	
	return studentName;
	
}

int studentType::getID() const
{
	
	return studentID;
	
}

string studentType::getPhoneNumber() const
{
	
	return phoneNumber;
	
}

int studentType::getAge() const
{
	
	return studentAge;
	
}

string studentType::getGender() const
{
	
	return studentGender;
	
}

string studentType::getClassStanding() const
{
	
	return classStanding;
	
}

double studentType::getGPA() const
{

	return studentGPA;

}


 	
	///METHODS///
void studentType::print() const	//Calls each getter and prints them.
{
	
	cout << "---------------------------------------" << endl;
	cout << "-  Student Info                       -" << endl;
	cout << "---------------------------------------" << endl;
	cout << "- Name: " << setw(30) << getName() << "-" << endl;
	cout << "- Age: " << setw(31) << getAge() << "-" << endl;
	cout << "- Gender: " << setw(28) << getGender() << "-" << endl;
	cout << "- Contact Number: " << setw(20) << getPhoneNumber()  << "-" << endl;
	cout << "- ID Number: " << setw(25) << getID()  << "-" << endl;
	cout << "- Class Standing: " << setw(20) << getClassStanding() << "-" << endl;
	cout << "- GPA: " << setw(31) << getGPA() << "-" << endl;
	cout << "---------------------------------------" << endl;
	
}	


bool studentType::equals(studentType otherStudent) const
{
	bool equals = true;
	
	if 
	( getName() != otherStudent.getName() 
	|| getID() != otherStudent.getID()
	|| getPhoneNumber() != otherStudent.getPhoneNumber()
	|| getAge() != otherStudent.getAge()
	|| getGender() != otherStudent.getGender()
	|| getClassStanding() != otherStudent.getClassStanding()
	|| getGPA() != otherStudent.getGPA() ) 
	{

		equals = false;

	}
	
	return equals;
	
}

////////////////////////////////////////////////////////
////////////////////////////////////////////////////////
////////////////////////////////////////////////////////
