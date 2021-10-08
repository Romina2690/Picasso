#include "Circle.h"

double m_radius;

Circle :: Circle(double r) : Shape("Circle")
{
		m_radius = r;
		Log("Circle constructor!");
}

double Circle :: CalculateArea()
{
		return 3.14 * pow(m_radius, 2);
}

Circle :: ~Circle() {}
