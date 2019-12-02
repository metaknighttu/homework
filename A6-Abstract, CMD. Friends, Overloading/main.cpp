#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <iostream>
#include <sstream>
#include <iomanip>

#include "shapes.h"

using namespace std;

int main( int argc, char **argv )
{
	cout << "--------------------------------------------------------" << endl;
	cout << "-Assignment 6 - CMD, Abstract, Friends, and Overloading-" << endl;
	cout << "--------------------------------------------------------" << endl;
	cout << "-              George Good - CS1C 2:30 M/W             -" << endl;
	cout << "--------------------------------------------------------" << endl;
	cout << "This program will execute in 3 parts. Part 1 will initiate" << endl;
	cout << "a Square object and a Triangle object, both of which are derived" << endl;
	cout << "from an abstract Shape object. The program will then test thier" << endl;
	cout << "member functions for calcualting perimeter and area and then print" << endl;
	cout << "them. Part 2 will test the command line parameters included in the" << endl;
	cout << "main function. Part 3 will test the square's associated" << endl;
	cout << "friend functions and overloaded operators." << endl;
	
	cout << "Program Start!" << endl;
	cout << "Part 1: " << endl;
	
	cout << "Creating objects...";
	square squareObj;
	triangle triangleObj;
	cout << "Done!" << endl << "Setting Square side lengths...";
	squareObj.setSide(8.88); 
	cout << "Done!" << endl << "Calling Perimeter...";
	squareObj.calcPerimeter();
	squareObj.printPerimeter();
	cout << "Done!" << endl << "Calling Area...";
	squareObj.calcArea();
	squareObj.printArea();
	cout << "Done!" << endl << "Setting Triangle side lengths...";
	triangleObj.setSides(5.0,12.0,13.0);
	cout << "Done!" << endl << "Calling Perimeter...";
	triangleObj.calcPerimeter();
	triangleObj.printPerimeter();
	cout << "Done!" << endl << "Calling Area...";
	triangleObj.calcArea();
	triangleObj.printArea();	
	cout << "Done!" << endl << endl;
	
	
	
	cout << "Part 2:" << endl;
	
	cout << "There are " << argc << " arguments on the command line. ";
	cout << "They are :" << endl;
	for ( int index = 0; index < argc; index++ )
	{
		cout << argv[index] << ", ";
	}
	
	cout << endl;
	
	
	
	cout << endl << endl;
	
//*
	
	cout << "Part 3:" << endl;
	cout << "Testing Equal Friend Function with equal perimeters...";
	square equalS; equalS.setSide(3.0);
	triangle equalT; equalT.setSides(4.0,4.0,4.0);
	perimeterIsEqual(equalS,equalT);
	cout << endl << "Done!" << endl;
	cout << "Testing Equal Friend Function with unequal perimeters...";
	perimeterIsEqual(equalS,triangleObj);
	cout << endl << "Done!" << endl;
//*	
	cout << "Testing Square Equality Operator with equal input...";
	equalS == equalS;
	cout << endl << "Done!" << endl;
	cout << "Testing Square Equality Operator with unequal input...";
	equalS == squareObj;
	cout << endl << "Done!" << endl;
	cout << "Testing addition friend...";// << "Before add: ";
//	equalS.printPerimeter();
	cout << endl; equalS + 8;
	cout << "Printing side after addition... " << equalS.getSide();
	cout << endl << "Testing IOstream operators..." << endl;
	square testSquare;
	cin >> testSquare;
	cout << testSquare;
	cout << endl << "Done!";
	
//	int dummy;
//	cin >> dummy;
	
	return 0;
}