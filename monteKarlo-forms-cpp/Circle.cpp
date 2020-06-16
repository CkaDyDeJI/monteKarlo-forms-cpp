#include "Circle.h"


Circle::Circle (System::Drawing::PointF^ upper, System::Drawing::PointF^ bottom)
{
	centerPoint = gcnew System::Drawing::PointF (upper->X, (upper->Y + bottom->Y) / 2);
	radius = (upper->Y - bottom->Y) / 2;
}


bool Circle::isInside (double x, double y)
{
	return ((x - centerPoint->X) * (x - centerPoint->X) + (y - centerPoint->Y) * (y - centerPoint->Y)) <= (radius * radius);
}


double Circle::square ()
{
	return M_PI * radius * radius;
}


double Circle::getRadius ()
{
	return radius;
}


double Circle::getX ()
{
	return centerPoint->X;
}


double Circle::getY ()
{
	return centerPoint->Y;
}
