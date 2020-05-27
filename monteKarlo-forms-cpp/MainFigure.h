#pragma once
#include "LinearFunction.h"

ref class MainFigure
{
public:
	MainFigure (PointF^ leftPointF, PointF^ upPointF, PointF^ rightPointF);	//�����������

	void setMinsAndMaxs ();	//����������� minx � �������
	void calculateSquare ();	//���������� ������� ��������������, � ������� �� ����� ������ �����

	bool isInside (PointF^ newPointF);	//��������, ������ �� ���� ������

	double calculateActualSquare();	//���������� ������� ��������� ������ (bcd)

	double getMinY ();	//���� ��������
	double getMinX ();
	double getMaxY ();
	double getMaxX ();

	double getSquare ();
	
private:
	PointF^ leftPointF_;	//����� b
	PointF^ upPointF_;	//����� c
	PointF^ rightPointF_;	//����� d

	double minY_;	//��� ��� ����
	double minX_;
	double maxY_;
	double maxX_;

	double square_;	//������� �������� ��������������

	LinearFunction^ first_;	//�������� ������� ����������� ����� b � c
	LinearFunction^ second_;	//����� c and d
	LinearFunction^ third_;	//����� d and b
};

