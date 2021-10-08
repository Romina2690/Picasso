#pragma once
#include "Shape.h"
#include "Rectangle.h"

class Square : public Rectangle
{
public:
	Square(double side);

	~Square();
};