#pragma once
#include "Point.h"

using namespace System::Drawing;

ref class LinearFunction
{
public:
	LinearFunction (Point^ firstPoint, Point^ secondPoint);
	LinearFunction (LinearFunction% newOne);

	bool isInside (double x, double y);
	
private:
	double k_;
	double b_;
};

