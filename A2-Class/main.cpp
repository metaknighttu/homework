#include <cstring>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include "studentType.h"
#include "CS1CstudentType.h"
//#include "dateType.h"

using namespace std;

int main() 
{
	cout << "-------------------------------" << endl;
	cout << "    Assignment 2 - Students   -" << endl;
	cout << "-------------------------------" << endl;
	cout << "- George Good - CS1C 2:30 M/W -" << endl;
	cout << "-------------------------------" << endl;
	cout << "This program will create 2 arrays of students" << endl;
	cout << "One set normal, one CS1C set derived from base" << endl;
	cout << "The program creates the arrays with the default constructor" << endl;
	cout << "Then sets them all one function at a time, printing an" << endl;
	cout << "example for each function called. Once complete, program " << endl;
	cout << "will repeat the process for CS1C students and then call" << endl;
	cout << "their CS1C exclusive setters, and finally print the results" << endl;
	
	
	cout << endl << "Program Start" << endl;
	cout << "Creating object arrays...  ";
	
	studentType student[4];
	CS1CstudentType CS1Cstudent[3];
	
	cout << "Done!" << endl;
/*	
	cout << "Printing Students before Data...  " << endl << endl;
	
	for (int i=0;i<4;i++)
	{
		student[i].print();
	}
*/	
//	cout << "Done!" << endl;
	cout << "Testing Student Member Functions...  " << endl;
	cout << "Setting Names... ";
	
	student[0].setName("Celine Dion");
	student[1].setName("Madonna");
	student[2].setName("Jennifer Lopez");
	student[3].setName("Lady Gaga");
	
	cout << "Done!" << endl; 
	cout << "Printing Person..." << endl;
	
	student[0].print();
	
	cout << "Done!" << endl;
	cout << "Setting IDs... " ;
	
	student[0].setID(444444);
	student[1].setID(123456);
	student[2].setID(876542);
	student[3].setID(777744);
	
	cout << "Done!" << endl; 
	cout << "Printing Person..." << endl;
	
	student[0].print();
	
	cout << "Done!" << endl;
	cout << "Setting Phone Numbers... " ;
	
	student[0].setPhoneNumber("949-555-1234");
	student[1].setPhoneNumber("714-555-5555");
	student[2].setPhoneNumber("760-703-1234");
	student[3].setPhoneNumber("213-555-6789");
	
	cout << "Done!" << endl; 
	cout << "Printing Person..." << endl;
	
	student[0].print();
	
	cout << "Done!" << endl;
	cout << "Setting Age... " ;
	
	student[0].setAge(51);
	student[1].setAge(61);
	student[2].setAge(50);
	student[3].setAge(33);
	
	cout << "Done!" << endl; 
	cout << "Printing Person..." << endl;
	
	student[0].print();
	
	cout << "Done!" << endl;
	cout << "Setting Gender... " ;
	
	student[0].setGender("Female");
	student[1].setGender("Female");
	student[2].setGender("Female");
	student[3].setGender("Female");
	
	cout << "Done!" << endl; 
	cout << "Printing Person..." << endl;
	
	student[0].print();
	
	cout << "Done!" << endl;
	cout << "Setting Class Standing... " ;
	
	student[0].setClassStanding("Freshman");
	student[1].setClassStanding("Sophomore");
	student[2].setClassStanding("Sophomore");
	student[3].setClassStanding("Freshman");	
	
	cout << "Done!" << endl; 
	cout << "Printing Person..." << endl;
	
	student[0].print();
	
	cout << "Done!" << endl;
	cout << "Setting Age... " ;
	
	student[0].setGPA(4.0);
	student[1].setGPA(3.23);
	student[2].setGPA(3.79);
	student[3].setGPA(2.10);
	
	cout << "Done!" << endl; 

	cout << "Printing Students after Data...  " << endl << endl;
	
	for (int i=0;i<4;i++)
	{
		student[i].print();
	}

	int dummy;
//	cin >> dummy;
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

	cout << "Testing CS1C Student Member Functions...  " << endl;
	cout << "Setting Derived Variables via Derived Member Functions... ";
	
	CS1Cstudent[0].setName("Adele");
	CS1Cstudent[1].setName("Taylor Swift");
	CS1Cstudent[2].setName("Bruno Mars");

	CS1Cstudent[0].setID(667788);
	CS1Cstudent[1].setID(156789);
	CS1Cstudent[2].setID(876543);
	
	CS1Cstudent[0].setPhoneNumber("949-665-1234");
	CS1Cstudent[1].setPhoneNumber("248-555-6543");
	CS1Cstudent[2].setPhoneNumber("703-703-7654");
		
	CS1Cstudent[0].setAge(31);
	CS1Cstudent[1].setAge(29);
	CS1Cstudent[2].setAge(33);
	
	CS1Cstudent[0].setGender("Female");
	CS1Cstudent[1].setGender("Male");
	CS1Cstudent[2].setGender("Female");
		
	CS1Cstudent[0].setClassStanding("Freshman");
	CS1Cstudent[1].setClassStanding("Sophomore");
	CS1Cstudent[2].setClassStanding("Sophomore");
		
	CS1Cstudent[0].setGPA(3.3);
	CS1Cstudent[1].setGPA(3.9);
	CS1Cstudent[2].setGPA(3.2);
	
	cout << "Done!" << endl; 

	cout << "Printing Students after Derived Data...  " << endl << endl;
	
	for (int i=0;i<3;i++)
	{
		CS1Cstudent[i].print();
	}

	cout << "Done!" << endl;
	cout << "Setting CS1C Variables via CS1C Member Functions... " << endl;
	cout << "Setting Assignment Score..." << endl;
	CS1Cstudent[0].setScore(500);
	CS1Cstudent[1].setScore(700);
	CS1Cstudent[2].setScore(800);

	cout << "Printing Person..." << endl;
	
	CS1Cstudent[0].print();
	
	cout << "Done!" << endl;

	cout << "Setting Python Knowledge..." << endl;
	CS1Cstudent[0].setPython("No");
	CS1Cstudent[1].setPython("No");
	CS1Cstudent[2].setPython("Yes");
	
	cout << "Printing Person..." << endl;
	
	CS1Cstudent[0].print();
	
	cout << "Done!" << endl;
	
	cout << "Setting Graduation Date..." << endl;
	CS1Cstudent[0].setGraduation("5/12/2020");
	CS1Cstudent[1].setGraduation("5/11/2021");
	CS1Cstudent[2].setGraduation("5/11/2020");

	cout << "Done!" << endl;
	cout << "Printing the completed CS1C Student profiles..." << endl;

	for (int i=0;i<3;i++)

	{

		CS1Cstudent[i].print();

	}

	cout << "Done!" << endl;
//	int dummy;
	cin >> dummy;


	return 0;
}