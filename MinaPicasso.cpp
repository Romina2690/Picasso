using namespace std;
#include <iostream>
#include <string.h>
#include <math.h>

#include "Shape.h"
#include "Rectangle.h"
#include "Log.h"
#include "Square.h"
#include "Circle.h"
#include "CircleInSquare.h"

int main()
{
	//Square sqr = Square(5.0);
	//cout << sqr.CalculateArea() << endl;
	//Log("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
	//Circle c1 = Circle(1.0);
	//cout << c1.CalculateArea() << endl;

	CircleInSquare cirInsq = CircleInSquare(2.0);
	double area = cirInsq.CalculateArea();
}