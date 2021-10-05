using namespace std;
#include <iostream>
#include <string.h>
#include <math.h>

#include "Shape.h"
#include "Rectangle.h"
#include "Log.h"

class Square : public Rectangle
{
public:
	Square(double side) : Rectangle(side, side)
	{
		Log("Square constructor!");
	}

	~Square() {}
};

class Circle : public Shape
{
private:
	double m_radius;

public:
	Circle(double r) : Shape("Circle")
	{
		m_radius = r;
		Log("Circle constructor!");
	}

	double CalculateArea()
	{
		return 3.14 * pow(m_radius, 2);
	}

	~Circle() {}
};

int main()
{
	Square sqr = Square(5.0);
	cout << sqr.CalculateArea() << endl;
	Log("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
	Circle c1 = Circle(1.0);
	cout << c1.CalculateArea() << endl;
}