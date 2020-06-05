#include "MainFigure.h"


MainFigure::MainFigure (PointF^ leftPointF, PointF^ upPointF, PointF^ rightPointF )
{
    leftPointF_ = gcnew PointF(leftPointF->X, leftPointF->Y);   //инициализация точек внутри класса из внешних точек
    upPointF_ = gcnew PointF (upPointF->X, upPointF->Y);
    rightPointF_ = gcnew PointF (rightPointF->X, rightPointF->Y);

    setMinsAndMaxs ();  //вызов функции вычисления мин и макс значений

    calculateSquare (); //площади

    first_ = gcnew LinearFunction (leftPointF_, upPointF_); //инициализация линейных функций (отрезков)
    second_ = gcnew LinearFunction (upPointF_, rightPointF_);
    third_ = gcnew LinearFunction (leftPointF_, rightPointF_);
}


void MainFigure::setMinsAndMaxs ()
{
    minX_ = leftPointF_->X; //тут все ясно
    maxX_ = rightPointF_->X;
    minY_ = 0;
    maxY_ = upPointF_->Y;
}


void MainFigure::calculateSquare ()
{
    square_ = (maxX_ - minX_) * (maxY_ - minY_);    //просто площадь прямоугольника
}


bool MainFigure::isInside ( PointF^ newPointF )
{
    if ((first_->isInside (newPointF->X, newPointF->Y) == true) &&  //если под отрезком b and c
        (second_->isInside (newPointF->X, newPointF->Y) == true) && //и под отрезком c and d
        (third_->isInside (newPointF->X, newPointF->Y) == false))   //и над отрезком d and b одновременно, то тогда внутри искомой фигуры
        return true;
    else
        return false;
}


double MainFigure::calculateActualSquare ()
{   //из общей площади прямоугольника вычитаем площади 3 треугольников, которые отсекаются от основной фигуры отрезками заданными выше
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
