#include "MainFigure.h"


MainFigure::MainFigure (Point^ leftPoint, Point^ upPoint, Point^ rightPoint )
{
    leftPoint_ = gcnew Point(leftPoint->X, leftPoint->Y);
    upPoint_ = gcnew Point (upPoint->X, upPoint->Y);
    rightPoint_ = gcnew Point (rightPoint->X, rightPoint->Y);
    // leftPoint_.myCopy(leftPoint.X(), leftPoint.Y());
    // upPoint_.myCopy (upPoint.X (), upPoint.Y ());
    // rightPoint_.myCopy (rightPoint.X (), rightPoint.Y ());

    setMinsAndMaxs ();

    calculateSquare ();

    first_ = gcnew LinearFunction (leftPoint_, upPoint_);
    second_ = gcnew LinearFunction (upPoint_, rightPoint_);
    third_ = gcnew LinearFunction (leftPoint_, rightPoint_);
}


void MainFigure::setMinsAndMaxs ()
{
    minX_ = leftPoint_->X;
    maxX_ = rightPoint_->X;
    minY_ = 0;
    maxY_ = upPoint_->Y;
}


void MainFigure::calculateSquare ()
{
    square_ = (maxX_ - minX_) * (maxY_ - minY_);
}


bool MainFigure::isInside ( Point^ newPoint )
{
    if ((first_->isInside (newPoint->X, newPoint->Y) == true) &&
        (second_->isInside (newPoint->X, newPoint->Y) == true) &&
        (third_->isInside (newPoint->X, newPoint->Y) == false))
        return true;
    else
        return false;
}


double MainFigure::calculateActualSquare ()
{
    auto first = Convert::ToDouble (maxY_ - leftPoint_->Y) * Convert::ToDouble (upPoint_->X - minX_) * 0.5;
    auto second = Convert::ToDouble (maxX_ - upPoint_->X) * Convert::ToDouble (maxY_ - rightPoint_->Y) * 0.5;
    auto third = 0.5 * (Convert::ToDouble (leftPoint_->Y - minY_) + Convert::ToDouble (rightPoint_->Y - minY_)) * Convert::ToDouble (maxX_ - minX_);

	
    return (square_ - ((maxY_ - leftPoint_->Y) * (upPoint_->X - minX_) * 0.5) - ((maxX_ - upPoint_->X) * (maxY_ - rightPoint_->Y) * 0.5) - (0.5 * ((leftPoint_->Y - minY_) + (rightPoint_->Y - minY_)) * (maxX_ - minX_)));
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
