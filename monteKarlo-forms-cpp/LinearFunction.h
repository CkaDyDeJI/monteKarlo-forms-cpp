#pragma once

using namespace System::Drawing;

ref class LinearFunction
{
public:
	LinearFunction (PointF^ firstPointF, PointF^ secondPointF);
	LinearFunction (LinearFunction% newOne);

	bool isInside (double x, double y);
	
private:
	double k_;
	double b_;
};

