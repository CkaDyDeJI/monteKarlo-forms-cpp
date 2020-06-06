#include "MainFigure.h"


MainFigure::MainFigure (PointF^ aPointF, PointF^ bPointF, PointF^ cPointF, PointF^ dPointF )
{
    aPointF_ = gcnew PointF(aPointF->X, aPointF->Y);   //������������� ����� ������ ������ �� ������� �����
    bPointF_ = gcnew PointF (bPointF->X, bPointF->Y);
    cPointF_ = gcnew PointF (cPointF->X, cPointF->Y);
    dPointF_ = gcnew PointF (dPointF->X, dPointF->Y);
	
    setMinsAndMaxs ();  //����� ������� ���������� ��� � ���� ��������

    calculateSquare (); //�������

    first_ = gcnew LinearFunction (bPointF_, cPointF_); //������������� �������� ������� (��������)
    second_ = gcnew LinearFunction (cPointF_, dPointF_);
    third_ = gcnew LinearFunction (dPointF_, aPointF_);
}


void MainFigure::setMinsAndMaxs ()
{
    minX_ = aPointF_->X; //��� ��� ����
    maxX_ = dPointF_->X;
    minY_ = aPointF_->Y;
    maxY_ = cPointF_->Y;
}


void MainFigure::calculateSquare ()
{
    square_ = (maxX_ - minX_) * (maxY_ - minY_);    //������ ������� ��������������
}


bool MainFigure::isInside (double x, double y)
{
    if ((first_->isInside (x, y) == true) &&  //���� ��� �������� b and c
        (second_->isInside (x, y) == true) && //� ��� �������� c and d
        (third_->isInside (x, y) == false))   //� ��� �������� d and b ������������, �� ����� ������ ������� ������
        return true;
    else
        return false;
}


double MainFigure::calculateActualSquare ()
{   //�� ����� ������� �������������� �������� ������� 3 �������������, ������� ���������� �� �������� ������ ��������� ��������� ����
    return (square_ - ((maxY_ - bPointF_->Y) * (cPointF_->X - minX_) * 0.5) - ((maxX_ - cPointF_->X) * (maxY_ - dPointF_->Y) * 0.5) - ((dPointF_->Y - minY_) * (maxX_ - aPointF_->X) * 0.5));
}


double MainFigure::getMinY ()
{
    return minY_;
}


double MainFigure::getMinX ()
{
    return minX_;
}


double MainFigure::getMaxY ()
{
    return maxY_;
}


double MainFigure::getMaxX ()
{
    return maxX_;
}


double MainFigure::getSquare ()
{
    return square_;
}
