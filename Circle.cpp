#include "Circle.h"

double m_radius;

Circle :: Circle(double r) : Shape("Circle")
{
		m_radius = r;
		Log("Circle constructor!");
}

// default constructor
//Circle::Circle() : Shape("circle")
//{
//	m_radius = 0.0;
//}

double Circle :: CalculateArea()
{
		return 3.14 * pow(m_radius, 2);
}

Circle :: ~Circle() {}
