#ifndef SOFTWAREDEVTYPE_H
#define SOFTWAREDEVTYPE_H

#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

class softwareDevType : public studentType
{
public:
	///CONSTRUCTORS///
	softwareDevType(); //Basic - sets values to unknown
	
					//Name, ID, Phone, Age, Gender, 
	softwareDevType(string,int,string,int,string, 
			string,double,int); 
		//Class standing, GPA, Zipcode)
			
	//Copy Constructor
	softwareDevType(const softwareDevType&);
	
	

	///DESTRUCTOR///
	~softwareDevType();
	
	///SETTERS///
	void setZip(int);



	///GETTERS///
	int getZip() const;
	
	///METHODS///
	void print() const;
	softwareDevType deep(const softwareDevType &);
	//bool equals(softwareDevType) const;
	


	char * address;
	char * city;
	char * state;
	int zipCode;
	
};

//https://stackoverflow.com/questions/29338528/saving-string-to-class-attribute-using-character-pointer-in-c
#endif