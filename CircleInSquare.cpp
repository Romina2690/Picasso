#include "CircleInSquare.h"

Circle insideCircle = NULL;
//double m_value = 0.0;

CircleInSquare::CircleInSquare(double side) : Square(side)
{
	insideCircle = Circle(side / 2.0);
	Log("CircleInSquare constructed!");
}

double CircleInSquare::CalculateArea()
{
	double parent_square_area = Square::CalculateArea(); // is a square

	double inside_circle_area = insideCircle.CalculateArea(); // own a circle

	return parent_square_area - inside_circle_area;
}

CircleInSquare::~CircleInSquare()
{
}