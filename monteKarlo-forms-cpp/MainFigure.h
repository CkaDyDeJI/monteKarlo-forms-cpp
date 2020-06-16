#pragma once
#include "LinearFunction.h"
#include "Circle.h"

ref class MainFigure : AbstractFigure
{
public:
	MainFigure (PointF^ bPointF, PointF^ fPointF);	//�����������

	void setMinsAndMaxs ();	//����������� minx � �������
	double calculateActualSquare ();	//���������� ������� ��������������, � ������� �� ����� ������ �����

	bool isInside (double x, double y) override;	//��������, ������ �� ���� ������

	double square () override;	//���������� ������� ��������� ������ (bef)

	double getMinY ();	//���� ��������
	double getMinX ();
	double getMaxY ();
	double getMaxX ();

	double getSquare ();
	
private:
	PointF^ bPointF;	//����� b
	PointF^ fPointF;	//����� f

	double minY;	//��� ��� ����
	double minX;
	double maxY;
	double maxX;

	double rectSquare;	//������� �������� ��������������

	Circle^ beCircle;

	LinearFunction^ efLine;	//�������� ������� ����������� ����� e � f
};

