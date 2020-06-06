#pragma once
#include "LinearFunction.h"

ref class MainFigure
{
public:
	MainFigure (PointF^ aPointF, PointF^ bPointF, PointF^ cPointF, PointF^ dPointF);	//�����������

	void setMinsAndMaxs ();	//����������� minx � �������
	void calculateSquare ();	//���������� ������� ��������������, � ������� �� ����� ������ �����

	bool isInside (double x, double y);	//��������, ������ �� ���� ������

	double calculateActualSquare();	//���������� ������� ��������� ������ (abcd)

	double getMinY ();	//���� ��������
	double getMinX ();
	double getMaxY ();
	double getMaxX ();

	double getSquare ();
	
private:
	PointF^ aPointF_;	//����� b
	PointF^ bPointF_;	//����� c
	PointF^ cPointF_;	//����� d
	PointF^ dPointF_;

	double minY_;	//��� ��� ����
	double minX_;
	double maxY_;
	double maxX_;

	double square_;	//������� �������� ��������������

	LinearFunction^ first_;	//�������� ������� ����������� ����� b � c
	LinearFunction^ second_;	//����� c and d
	LinearFunction^ third_;	//����� d and a
};

