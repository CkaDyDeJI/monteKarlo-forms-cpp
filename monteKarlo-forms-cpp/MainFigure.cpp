#include "MainFigure.h"


MainFigure::MainFigure (PointF^ leftPointF, PointF^ upPointF, PointF^ rightPointF )
{
    leftPointF_ = gcnew PointF(leftPointF->X, leftPointF->Y);
    upPointF_ = gcnew PointF (upPointF->X, upPointF->Y);
    rightPointF_ = gcnew PointF (rightPointF->X, rightPointF->Y);
    // leftPointF_.myCopy(leftPointF.X(), leftPointF.Y());
    // upPointF_.myCopy (upPointF.X (), upPointF.Y ());
    // rightPointF_.myCopy (rightPointF.X (), rightPointF.Y ());

    setMinsAndMaxs ();

    calculateSquare ();

    first_ = gcnew LinearFunction (leftPointF_, upPointF_);
    second_ = gcnew LinearFunction (upPointF_, rightPointF_);
    third_ = gcnew LinearFunction (leftPointF_, rightPointF_);
}


void MainFigure::setMinsAndMaxs ()
{
    minX_ = leftPointF_->X;
    maxX_ = rightPointF_->X;
    minY_ = 0;
    maxY_ = upPointF_->Y;
}


void MainFigure::calculateSquare ()
{
    square_ = (maxX_ - minX_) * (maxY_ - minY_);
}


bool MainFigure::isInside ( PointF^ newPointF )
{
    if ((first_->isInside (newPointF->X, newPointF->Y) == true) &&
        (second_->isInside (newPointF->X, newPointF->Y) == true) &&
        (third_->isInside (newPointF->X, newPointF->Y) == false))
        return true;
    else
        return false;
}


double MainFigure::calculateActualSquare ()
{
    // auto first = Convert::ToDouble (maxY_ - leftPointF_->Y) * Convert::ToDouble (upPointF_->X - minX_) * 0.5;
    // auto second = Convert::ToDouble (maxX_ - upPointF_->X) * Convert::ToDouble (maxY_ - rightPointF_->Y) * 0.5;
    // auto third = 0.5 * (Convert::ToDouble (leftPointF_->Y - minY_) + Convert::ToDouble (rightPointF_->Y - minY_)) * Convert::ToDouble (maxX_ - minX_);

	
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
