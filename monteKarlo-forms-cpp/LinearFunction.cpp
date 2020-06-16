#include "LinearFunction.h"


LinearFunction::LinearFunction (PointF^ firstPointF, PointF^ secondPointF)
{
	k_ = (secondPointF->Y - firstPointF->Y) / (secondPointF->X - firstPointF->X);	//������� ������� ���������� ����� k
	b_ = firstPointF->Y - k_ * firstPointF->X;	//����� b
}


LinearFunction::LinearFunction ( LinearFunction% newOne )
{
	k_ = newOne.k_;	// ������ �����������
	b_ = newOne.b_;	
}


bool LinearFunction::isInside (double x, double y)
{
	return (y < k_* x + b_) ? true : false;	//� ������� ������� �����������, ��������� �� ����� ��� �������� ��� ��� ��������. ���� � ������ ���������, �� ����� ��� ��������, ����� ���
}


double LinearFunction::square ()
{
	return 0;
}
