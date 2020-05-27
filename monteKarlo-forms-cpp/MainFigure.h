#pragma once
#include "LinearFunction.h"

ref class MainFigure
{
public:
	MainFigure (Point^ leftPoint, Point^ upPoint, Point^ rightPoint);

	void setMinsAndMaxs ();
	void calculateSquare ();

	bool isInside (Point^ newPoint);

	double calculateActualSquare();

	double getMinY ();
	double getMinX ();
	double getMaxY ();
	double getMaxX ();

	double getSquare ();
	
private:
	Point^ leftPoint_;
	Point^ upPoint_;
	Point^ rightPoint_;

	double minY_;
	double minX_;
	double maxY_;
	double maxX_;

	double square_;

	LinearFunction^ first_;
	LinearFunction^ second_;
	LinearFunction^ third_;
};

