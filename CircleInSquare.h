#pragma once
#include "Square.h"
#include "Circle.h"

class CircleInSquare : public Square
{
public:
	CircleInSquare(double side);

	double CalculateArea();

	~CircleInSquare();
};

