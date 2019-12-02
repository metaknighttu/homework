

#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <iostream>
#include <sstream>
#include <iomanip>

#include "CS1CstudentType.h"
//#include "dateType.h"
using namespace std;


int CS1CstudentType::getScore() const
{
	
	return assignmentScore;
	
}

string CS1CstudentType::getPython() const
{
	
	return knowsPython;
	
}

string CS1CstudentType::getGraduation() const
{
	
	return graduationDate;
	
}

void CS1CstudentType::print()const //Calls each getter and prints them.
{
		
	cout << "---------------------------------------" << endl;
	cout << "-  CS1CStudent Info                   -" << endl;
	cout << "---------------------------------------" << endl;
	cout << "- Name: " << setw(30) << getName() << "-" << endl;
	cout << "- Age: " << setw(31) << getAge() << "-" << endl;
	cout << "- Gender: " << setw(28) << getGender() << "-" << endl;
	cout << "- Contact Number: " << setw(20) << getPhoneNumber()  << "-" << endl;
	cout << "- ID Number: " << setw(25) << getID()  << "-" << endl;
	cout << "- Class Standing: " << setw(20) << getClassStanding() << "-" << endl;
	cout << "- GPA: " << setw(31) << getGPA() << "-" << endl;
	cout << "---------------------------------------" << endl;
	cout << "- Assignment Score: " << setw(18) << getScore() << "-" << endl;
	cout << "- Knows Python? " << setw(22) << getPython() << "-" << endl;
	cout << "- Graduation Date: " << setw(19) << getGraduation() << "-" << endl;
	cout << "---------------------------------------" << endl;

}

bool CS1CstudentType::equals(CS1CstudentType otherStudent) const
{
	
	bool equals = true;
	
	if 
	( getName() != otherStudent.getName() 
	|| getID() != otherStudent.getID()
	|| getPhoneNumber() != otherStudent.getPhoneNumber()
	|| getAge() != otherStudent.getAge()
	|| getGender() != otherStudent.getGender()
	|| getClassStanding() != otherStudent.getClassStanding()
	|| getGPA() != otherStudent.getGPA() 
	|| getScore() != otherStudent.getScore()
	|| getPython() != otherStudent.getPython() ) 
	{

		equals = false;

	}
	
	return equals;
	
}

CS1CstudentType::CS1CstudentType()
			: studentType()
{
	
	setScore(-1);
	setPython("Unknown");
	setGraduation("1/1/1111");
	
}

CS1CstudentType::CS1CstudentType(string name,int ID,string phone,
			int age,string gender,string classStanding,double GPA,
			int score,string python,string grad)
		: studentType(name, ID, phone, age, gender, classStanding, GPA)
{
	
	setScore(score);
	setPython(python);
	setGraduation(grad);
	
}

void CS1CstudentType::setScore(int score)
{
	
	assignmentScore = score;
	
}

void CS1CstudentType::setPython(string YesorNo)
{
	
	knowsPython = YesorNo;
	
}

void CS1CstudentType::setGraduation(string date)
{
	
	graduationDate = date;
	
}
