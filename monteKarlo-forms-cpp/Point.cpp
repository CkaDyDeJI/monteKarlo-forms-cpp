#include "Point.h"


MyPoint::MyPoint (double newX, double newY)
{
	x_ = newX;
	y_ = newY;
}


MyPoint::MyPoint (MyPoint% forCopy )
{
	x_ = forCopy.x_;
	y_ = forCopy.y_;
}


void MyPoint::myCopy (double newX, double newY)
{
	x_ = newX;
	y_ = newY;
}


double MyPoint::getX ()
{
	return x_;
}


double MyPoint::getY ()
{
	return y_;
}