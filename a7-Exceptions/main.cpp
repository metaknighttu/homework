#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <assert.h>
#include "shapes.h"

using namespace std;
	void testSquares(double);
int main()
{
	cout << "--------------------------------------------------------" << endl;
	cout << "-               Assignment 7 - Exceptions              -" << endl;
	cout << "--------------------------------------------------------" << endl;
	cout << "-              George Good - CS1C 2:30 M/W             -" << endl;
	cout << "--------------------------------------------------------" << endl;
	cout << "This program will test assert macros and Exception handling." << endl;
	cout << "The first execution will fail to meet the assert macro's parameters" << endl;
	cout << "And terminate. The second will get past the assert, and show the" << endl;
	cout << "throws done by the square class objects and the catches that get them" << endl;
	cout << "by printing the values that triggered them. The throws will also set" << endl;
	cout << "the variables to an accepted value." << endl;

	
	cout << "Program Start!" << endl;

	cout << "Testing Assert...";
	int test;
	cin >> test;
	assert (test > 1);
	
	cout << "Assert Passed! Moving on..." << endl;
	cout << "Creating object...";
	//square squareObj;
	cout << "Done!" << endl << "Setting Square side length to -5..." << endl;

	
	testSquares(-5.0);
	
	
	return 0;
}

	void testSquares(double test)
	{
		try {
			square newSquare;
			newSquare.setSide(test);
		
			cout << "Printing Square side length..." << newSquare.getSide() << endl;
		
	}

	catch (square::below &)
	{
		cout << "Value is below 0! Entered value: " << test << endl;
		cout << "Enter a valid value please." << endl;
		cout << "Setting side to 7000" << endl;
		testSquares(7000.0);
	}

	catch (square::above &)
	{
		cout << "Value is above 100! Entered value: " << test << endl;
		cout << "Enter a valid value please" << endl;
		cout << "Setting side to 4" << endl;
		testSquares(4.0);
	}
	}