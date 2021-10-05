#pragma once
#include "Shape.h"
#include "Log.h"

class Rectangle : public Shape
{
	// 1) member variable
private:
	double m_length, m_width;

	// 2) properties
public:
	double GetLength(); // getter

	double SetLength(double value); //setter


	// 3) constructors
	Rectangle(double l, double w);


	Rectangle(string name, double l, double w);


	// default constructor
	// copy constructor

	// 4) methods

	double CalculateArea();

	// 5) destructors
	~Rectangle();
};