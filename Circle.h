#pragma once
#include "shape.h"
#include "log.h"

class Circle : public Shape
{
private:
	double m_radius;

public:
	Circle(double r);

	double CalculateArea();


	~Circle();
};