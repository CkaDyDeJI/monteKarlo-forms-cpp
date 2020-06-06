#include "MainFigure.h"


MainFigure::MainFigure (PointF^ aPointF, PointF^ bPointF, PointF^ cPointF, PointF^ dPointF )
{
    aPointF_ = gcnew PointF(aPointF->X, aPointF->Y);   //инициализация точек внутри класса из внешних точек
    bPointF_ = gcnew PointF (bPointF->X, bPointF->Y);
    cPointF_ = gcnew PointF (cPointF->X, cPointF->Y);
    dPointF_ = gcnew PointF (dPointF->X, dPointF->Y);
	
    setMinsAndMaxs ();  //вызов функции вычисления мин и макс значений

    calculateSquare (); //площади

    first_ = gcnew LinearFunction (bPointF_, cPointF_); //инициализация линейных функций (отрезков)
    second_ = gcnew LinearFunction (cPointF_, dPointF_);
    third_ = gcnew LinearFunction (dPointF_, aPointF_);
}


void MainFigure::setMinsAndMaxs ()
{
    minX_ = aPointF_->X; //тут все ясно
    maxX_ = dPointF_->X;
    minY_ = aPointF_->Y;
    maxY_ = cPointF_->Y;
}


void MainFigure::calculateSquare ()
{
    square_ = (maxX_ - minX_) * (maxY_ - minY_);    //просто площадь прямоугольника
}


bool MainFigure::isInside (double x, double y)
{
    if ((first_->isInside (x, y) == true) &&  //если под отрезком b and c
        (second_->isInside (x, y) == true) && //и под отрезком c and d
        (third_->isInside (x, y) == false))   //и над отрезком d and b одновременно, то тогда внутри искомой фигуры
        return true;
    else
        return false;
}


double MainFigure::calculateActualSquare ()
{   //из общей площади прямоугольника вычитаем площади 3 треугольников, которые отсекаются от основной фигуры отрезками заданными выше
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
