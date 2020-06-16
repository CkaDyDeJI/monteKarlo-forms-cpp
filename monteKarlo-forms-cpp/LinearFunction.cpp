#include "LinearFunction.h"


LinearFunction::LinearFunction (PointF^ firstPointF, PointF^ secondPointF)
{
	k_ = (secondPointF->Y - firstPointF->Y) / (secondPointF->X - firstPointF->X);	//обычная формула вычисления коэфф k
	b_ = firstPointF->Y - k_ * firstPointF->X;	//коэфф b
}


LinearFunction::LinearFunction ( LinearFunction% newOne )
{
	k_ = newOne.k_;	// просто копирование
	b_ = newOne.b_;	
}


bool LinearFunction::isInside (double x, double y)
{
	return (y < k_* x + b_) ? true : false;	//с помощью формулы проверяется, находится ли точка под графиком или над графиком. если у меньше выражения, то точка под графиком, иначе над
}


double LinearFunction::square ()
{
	return 0;
}
