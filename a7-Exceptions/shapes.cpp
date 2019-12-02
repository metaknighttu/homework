#include <math.h>

#include "shapes.h"

///SQUARE MEMBER FUNCTIONS///
void square::setSide(double side)
{
		if (side < 0)
			throw below();
	
		if (side > 100)
			throw above();
	
	
	sideLength = side;
	
	
}

double square::getSide()
{
	return sideLength;
}

double square::getPerimeter()
{
	return perimeter;
}

void square::calcPerimeter()
{
	perimeter = ( 4 * sideLength );
}

void square::calcArea()
{
	area = ( sideLength * sideLength );
}

void square::printPerimeter()
{
	cout << "Perimeter of Square is : " << perimeter << endl;
}

void square::printArea()
{
	cout << "Area of Square is : " << area << endl;
}

double square::getArea()
{
	return area;
}

///SQUARE FRIEND FUNCTIONS///
void perimeterIsEqual(square test, triangle check)
	{
		bool equal = false;
	
		if ( test.perimeter == check.getPerimeter() )
		{
			equal = true;
		}
	
		if ( equal == true )
		{
			cout << "Perimeters are equal.";
		} else {
			cout << "Perimeters are unequal.";

		}
	};
	
void perimeterNotEqual(square test, triangle check)
	{
		bool equal = false;
	
		if ( test.perimeter != check.getPerimeter() )
		{
			equal = true;
		}
	
		if ( equal == true )
		{
			cout << "Perimeters are unequal.";
		} else {
			cout << "Perimeters are equal.";

		}
	};



//*
///SQUARE IOSTREAM OPERATORS///
ostream& operator << ( ostream& os, square &s )
{
	cout << "Square's side length is " << s.getSide() << endl;
	s.calcPerimeter();
	cout << "Square's perimeter is " << s.getPerimeter() << endl;
	s.calcArea();
	cout << "Square's area is " << s.getArea() << endl;
	return os;
}
//*
istream& operator >> ( istream& is, square &s )
{
	cout << "Enter Side Length: ";
	cin >> s.sideLength;
	return is;
}


//*/

///TRIANGLE MEMBER FUNCTIONS///
void triangle::setSides(double a,double b,double c)
{
	sideA = a;
	sideB = b;
	sideC = c;
}

double triangle::getSideA()
{
	return sideA;
}

double triangle::getSideB()
{
	return sideB;
}

double triangle::getSideC()
{
	return sideC;
}

double triangle::getPerimeter()
{
	return perimeter;
}

void triangle::calcPerimeter()
{
	perimeter = ( sideA + sideB + sideC );
}

void triangle::calcArea()
{
	double S = ( perimeter / 2 );
	
	double calc = ( S * (S - sideA) * (S - sideB) * (S - sideC) );
	
	area = sqrt(calc);
}
	
void triangle::printPerimeter()
{
	cout << "Perimeter of Triangle is : " << perimeter << endl;
}

void triangle::printArea()
{
	cout << "Area of Triangle is : " << area << endl;
}