#pragma once
#include "AbstractFigure.h"

using namespace System::Drawing;

ref class LinearFunction : AbstractFigure
{
public:
	LinearFunction (PointF^ firstPointF, PointF^ secondPointF);	//�����������, ������ ����������� ����������� k � b
	LinearFunction (LinearFunction% newOne);	//����������� �����������, ����� ����� ���� ���������� ����� � ������ �������

	bool isInside (double x, double y) override;	//�������� ����, ��������� �� ����� ������ (�� ����� ���� ���/��� ��������)
	double square() override;
	
private:
	double k_;	//����������� k �� ��������� ��������� y = kx + b, ������� ������ ����� ����� ������
	double b_;	// �� � b
};

