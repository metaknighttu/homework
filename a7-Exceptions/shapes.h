#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

class shape
{
public:
	virtual void calcPerimeter() = 0;
	virtual void calcArea() = 0;
};

class triangle : public shape
{
private:	
	double sideA;
	double sideB;
	double sideC;
	double perimeter;
	double area;
	
public:
	void setSides(double,double,double);
	double getSideA();
	double getSideB();
	double getSideC();
	double getPerimeter();

	void calcPerimeter();
	void calcArea();
	
	void printPerimeter();
	void printArea();
	
};

class square : public shape
{
private:	
	double sideLength;
	double perimeter;
	double area;
	
public:
	void setSide(double);
	double getSide();
	double getPerimeter();
	double getArea();

	void calcPerimeter();
	void calcArea();
	
	void printPerimeter();
	void printArea();
	
	class above {};
	class below {};
	
	friend void perimeterIsEqual(square test, triangle check);
	friend void perimeterNotEqual(square test, triangle check);

//*	
	square operator +( int add )
	{
		square result;
		cout <<"Adding to side... ";
		result.sideLength = ( this->sideLength + add );
		this->sideLength = this->sideLength + add;
		cout << "Done!" << endl;
		cout << "Added " << add << " to Square's side length!" << endl;
		return result;
	}

	square operator ==( square comp )
	{
		square result;
	
		if ( this->area == comp.getArea() )
		{
			cout << "Areas are equal" << endl;
		} else {
			cout << "Areas are unequal" << endl;
		}
	
		return result;
	}

	friend ostream& operator << ( ostream& os, square &s );
	friend istream& operator >> ( istream& is, square &s );

};
