#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
#include "AbstractFigure.h"

ref class Circle : AbstractFigure
{
public:
	Circle ( System::Drawing::PointF^ upper, System::Drawing::PointF^ bottom);
	bool isInside (double x, double y) override;
	double square () override;

	double getRadius ();
	double getX ();
	double getY ();
	
private:
	System::Drawing::PointF^ centerPoint;
	double radius;
};

