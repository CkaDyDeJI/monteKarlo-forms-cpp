#pragma once

using namespace System::Drawing;

ref class LinearFunction
{
public:
	LinearFunction (PointF^ firstPointF, PointF^ secondPointF);	//�����������, ������ ����������� ����������� k � b
	LinearFunction (LinearFunction% newOne);	//����������� �����������, ����� ����� ���� ���������� ����� � ������ �������

	bool isInside (double x, double y);	//�������� ����, ��������� �� ����� ������ (�� ����� ���� ���/��� ��������)
	
private:
	double k_;	//����������� k �� ��������� ��������� y = kx + b, ������� ������ ����� ����� ������
	double b_;	// �� � b
};

