#include "MainFigure.h"


MainFigure::MainFigure (PointF^ bPointF, PointF^ fPointF)
{
    this->bPointF = bPointF;   //������������� ����� ������ ������ �� ������� �����
    this->fPointF = fPointF;

    beCircle = gcnew Circle (bPointF, fPointF);
    efLine = gcnew LinearFunction (gcnew PointF (bPointF->X + beCircle->getRadius (), (bPointF->Y + fPointF->Y) / 2), fPointF);
	
    setMinsAndMaxs ();  //����� ������� ���������� ��� � ���� ��������

    square(); //�������
}


void MainFigure::setMinsAndMaxs ()
{
    minX = bPointF->X; //��� ��� ����
    maxX = bPointF->X + beCircle->getRadius();
    minY = fPointF->Y;
    maxY = bPointF->Y;
}


double MainFigure::square ()
{
    rectSquare = (maxX - minX) * (maxY - minY);    //������ ������� ��������������
    return rectSquare;
}


bool MainFigure::isInside (double x, double y)
{
	if (y <= beCircle->getY())
	{
        if (efLine->isInside (x, y) == false)   //���� ��� �������� e and f, �� ����� ������ ������� ������
            return true;
	} else
	{
        if (beCircle->isInside (x, y) == true)  //���� ������ �����
            return true;
	}

    return false;
}


double MainFigure::calculateActualSquare ()
{   //�� ����� ������� �������������� �������� ������� 3 �������������, ������� ���������� �� �������� ������ ��������� ��������� ����
    return beCircle->square() / 4  + (rectSquare / 2 - (beCircle->getY() - minY) * (maxX - minX) * 0.5);
}


double MainFigure::getMinY ()
{
    return minY;
}


double MainFigure::getMinX ()
{
    return minX;
}


double MainFigure::getMaxY ()
{
    return maxY;
}


double MainFigure::getMaxX ()
{
    return maxX;
}


double MainFigure::getSquare ()
{
    return rectSquare;
}
