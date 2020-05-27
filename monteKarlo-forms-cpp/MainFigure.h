#pragma once
#include "LinearFunction.h"

ref class MainFigure
{
public:
	MainFigure (PointF^ leftPointF, PointF^ upPointF, PointF^ rightPointF);

	void setMinsAndMaxs ();
	void calculateSquare ();

	bool isInside (PointF^ newPointF);

	double calculateActualSquare();

	double getMinY ();
	double getMinX ();
	double getMaxY ();
	double getMaxX ();

	double getSquare ();
	
private:
	PointF^ leftPointF_;
	PointF^ upPointF_;
	PointF^ rightPointF_;

	double minY_;
	double minX_;
	double maxY_;
	double maxX_;

	double square_;

	LinearFunction^ first_;
	LinearFunction^ second_;
	LinearFunction^ third_;
};

