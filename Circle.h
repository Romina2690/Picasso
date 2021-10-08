#pragma once
#include "shape.h"
#include "log.h"

class Circle : public Shape
{
private:
	double m_radius;

public:
	Circle(double r);
	// default constructor
	//Circle();

	double CalculateArea();


	~Circle();
};