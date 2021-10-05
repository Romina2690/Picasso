#include "Rectangle.h"


double Rectangle::GetLength() // getter
{
	return m_length;
}

double Rectangle::SetLength(double value) //setter
{
	if (value <= 0.0)
	{
		throw new exception("length  should be greater than zero!");
	}
	m_length = value;
}

// 3) constructors
Rectangle::Rectangle(double l, double w) : Shape("Rectangle")
{
	m_length = l;
	m_width = w;
	Log("Rectangle constructor!");
}

Rectangle::Rectangle(string name, double l, double w) : Shape(name)
{
	m_length = l;
	m_width = w;
	Log("Rectangle constructor!");
}

// default constructor
// copy constructor

// 4) methods

double Rectangle::CalculateArea()
{
	return m_length * m_width;
}

// 5) destructors
Rectangle::~Rectangle() {}