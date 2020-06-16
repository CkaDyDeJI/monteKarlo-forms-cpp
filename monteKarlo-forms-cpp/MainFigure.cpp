#include "MainFigure.h"


MainFigure::MainFigure (PointF^ bPointF, PointF^ fPointF)
{
    this->bPointF = bPointF;   //инициализация точек внутри класса из внешних точек
    this->fPointF = fPointF;

    beCircle = gcnew Circle (bPointF, fPointF);
    efLine = gcnew LinearFunction (gcnew PointF (bPointF->X + beCircle->getRadius (), (bPointF->Y + fPointF->Y) / 2), fPointF);
	
    setMinsAndMaxs ();  //вызов функции вычисления мин и макс значений

    square(); //площади
}


void MainFigure::setMinsAndMaxs ()
{
    minX = bPointF->X; //тут все ясно
    maxX = bPointF->X + beCircle->getRadius();
    minY = fPointF->Y;
    maxY = bPointF->Y;
}


double MainFigure::square ()
{
    rectSquare = (maxX - minX) * (maxY - minY);    //просто площадь прямоугольника
    return rectSquare;
}


bool MainFigure::isInside (double x, double y)
{
	if (y <= beCircle->getY())
	{
        if (efLine->isInside (x, y) == false)   //если над отрезком e and f, то тогда внутри искомой фигуры
            return true;
	} else
	{
        if (beCircle->isInside (x, y) == true)  //если внутри круга
            return true;
	}

    return false;
}


double MainFigure::calculateActualSquare ()
{   //из общей площади прямоугольника вычитаем площади 3 треугольников, которые отсекаются от основной фигуры отрезками заданными выше
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
