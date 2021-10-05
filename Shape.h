#pragma once
using namespace std;
#include <iostream>
#include <string.h>
#include "Log.h"

class Shape
{
public:
	string Name;

	Shape(string name);

	virtual double CalculateArea() = 0;

	~Shape();
};