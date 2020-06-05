#include "MainFigure.h"


MainFigure::MainFigure (PointF^ leftPointF, PointF^ upPointF, PointF^ rightPointF )
{
    leftPointF_ = gcnew PointF(leftPointF->X, leftPointF->Y);   //������������� ����� ������ ������ �� ������� �����
    upPointF_ = gcnew PointF (upPointF->X, upPointF->Y);
    rightPointF_ = gcnew PointF (rightPointF->X, rightPointF->Y);

    setMinsAndMaxs ();  //����� ������� ���������� ��� � ���� ��������

    calculateSquare (); //�������

    first_ = gcnew LinearFunction (leftPointF_, upPointF_); //������������� �������� ������� (��������)
    second_ = gcnew LinearFunction (upPointF_, rightPointF_);
    third_ = gcnew LinearFunction (leftPointF_, rightPointF_);
}


void MainFigure::setMinsAndMaxs ()
{
    minX_ = leftPointF_->X; //��� ��� ����
    maxX_ = rightPointF_->X;
    minY_ = 0;
    maxY_ = upPointF_->Y;
}


void MainFigure::calculateSquare ()
{
    square_ = (maxX_ - minX_) * (maxY_ - minY_);    //������ ������� ��������������
}


bool MainFigure::isInside ( PointF^ newPointF )
{
    if ((first_->isInside (newPointF->X, newPointF->Y) == true) &&  //���� ��� �������� b and c
        (second_->isInside (newPointF->X, newPointF->Y) == true) && //� ��� �������� c and d
        (third_->isInside (newPointF->X, newPointF->Y) == false))   //� ��� �������� d and b ������������, �� ����� ������ ������� ������
        return true;
    else
        return false;
}


double MainFigure::calculateActualSquare ()
{   //�� ����� ������� �������������� �������� ������� 3 �������������, ������� ���������� �� �������� ������ ��������� ��������� ����
    return (square_ - ((maxY_ - leftPointF_->Y) * (upPointF_->X - minX_) * 0.5) - ((maxX_ - upPointF_->X) * (maxY_ - rightPointF_->Y) * 0.5) - (0.5 * ((leftPointF_->Y - minY_) + (rightPointF_->Y - minY_)) * (maxX_ - minX_)));
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
