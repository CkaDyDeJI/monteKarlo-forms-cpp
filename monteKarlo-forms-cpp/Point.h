#pragma once
using namespace System;

ref class MyPoint
{
public:
	MyPoint (double newX, double newY);
	explicit MyPoint (MyPoint% forCopy);
	
	void myCopy (double newX, double newY);
	
	double getX ();
	double getY ();
	
private:
	double x_;
	double y_;
};

