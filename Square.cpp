#include "Square.h"


Square::Square(double side) : Rectangle(side, side)
{
	Log("Square constructor!");
}

Square :: ~Square() {}