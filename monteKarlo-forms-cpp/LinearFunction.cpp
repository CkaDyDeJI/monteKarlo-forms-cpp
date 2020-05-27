#include "LinearFunction.h"


LinearFunction::LinearFunction (Point^ firstPoint, Point^ secondPoint)
{
	k_ = Convert::ToDouble(secondPoint->Y - firstPoint->Y) / Convert::ToDouble (secondPoint->X - firstPoint->X);
	b_ = Convert::ToDouble(firstPoint->Y) - k_ * Convert::ToDouble(firstPoint->X);
}


LinearFunction::LinearFunction ( LinearFunction% newOne )
{
	k_ = newOne.k_;
	b_ = newOne.b_;
}


bool LinearFunction::isInside (double x, double y)
{
	return (Convert::ToDouble(y) <= (Convert::ToDouble(k_)* Convert::ToDouble(x) + Convert::ToDouble(b_))) ? true : false;
}
