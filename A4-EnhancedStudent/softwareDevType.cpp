#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <iostream>
#include <sstream>
#include <iomanip>

#include "softwareDevType.h"

using namespace std;

softwareDevType::softwareDevType()
			: studentType()
{
	
	address = new (char[40]);
//	strcpy(address, "Unknown");

	city = new (char[30]);
	state = new (char[20]);
	zipCode = -1;
}

softwareDevType::softwareDevType(string name,int ID,string phone,
			int age,string gender,string classStanding,double GPA,
			int zip)
		: studentType(name, ID, phone, age, gender, classStanding, GPA)
{
	zipCode = zip;
	address = new (char[40]);
	city = new (char[30]);
	state = new (char[20]);
}

softwareDevType::softwareDevType(const softwareDevType &other);
{
	cout << "Calling Copy Constructor... ";
	
	setName(other.getName());
	
	setID(other.getID());
	
	setPhoneNumber(other.getPhoneNumber());
	
	setAge(other.getAge());
	
	setGender(other.getGender());
	
	setClassStanding(other.getClassStanding());
	
	setGPA(other.getGPA());
	
	zipCode = other.zipCode;
	
	address = new char;
	*address = other->address;
	
	city = new char;
	*city = other->city;
	
	state = new char;
	*state = other->state;
	
	cout << "Done!" << endl;
}

softwareDevType softwareDevType::deep(const softwareDevType &other);
{
	softwareDevType dev;
	
	cout << "Calling Deep Copy Function... ";
	
	dev.setName(other.getName());
	
	dev.setID(other.getID());
	
	dev.setPhoneNumber(other.getPhoneNumber());
	
	dev.setAge(other.getAge());
	
	dev.setGender(other.getGender());
	
	dev.setClassStanding(other.getClassStanding());
	
	dev.setGPA(other.getGPA());
	
	dev.zipCode = other.zipCode;
	
	dev.address = other->address;
	
	dev.city = other->city;
	
	dev.state = other->state;
	
	cout << "Done!" << endl;
	
	return dev;
}

softwareDevType::~softwareDevType()
{
	cout << "Destructor called, Deleting pointers... ";
	delete[] address;
	delete[] city;
	delete[] state;
	cout << "Done!" << endl;
}

void softwareDevType::print()const //Calls each getter and prints them.
{
		
	cout << "---------------------------------------" << endl;
	cout << "-  Software Developer Info            -" << endl;
	cout << "---------------------------------------" << endl;
	cout << "- Name: " << setw(30) << getName() << "-" << endl;
	cout << "- Age: " << setw(31) << getAge() << "-" << endl;
	cout << "- Gender: " << setw(28) << getGender() << "-" << endl;
	cout << "- Contact Number: " << setw(20) << getPhoneNumber()  << "-" << endl;
	cout << "- ID Number: " << setw(25) << getID()  << "-" << endl;
	cout << "- Class Standing: " << setw(20) << getClassStanding() << "-" << endl;
	cout << "- GPA: " << setw(31) << getGPA() << "-" << endl;
	cout << "---------------------------------------" << endl;
	cout << "- Address: " << address << endl;
	cout << "- City: " << city << endl;
	cout << "- State: " << state << endl;
	cout << "- Zip Code: " << getZip() << endl;
	cout << "---------------------------------------" << endl;

}
//*
void softwareDevType::setZip(int zip)
{
	zipCode = zip;
}

int softwareDevType::getZip()
{
	return zipCode;
}
/*/