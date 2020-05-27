#include "OOP.h"


OOP::OOP (Collections::Generic::List <Point>^ pointsArray)
{
	mainFigure_ = gcnew MainFigure (pointsArray[0], pointsArray[1], pointsArray[2]);
}


ReturnedData^ OOP::calculate ()
{
    ReturnedData^ data = gcnew ReturnedData ();
    Diagnostics::Stopwatch^ watch = gcnew Diagnostics::Stopwatch ();
    watch->Start ();

    auto actualSquare = mainFigure_->calculateActualSquare ();
    data->setAcSquare (actualSquare);

    Random^ number = gcnew Random ();
    double insideCounter;
    double randomX;
    double randomY;
    for (int i = 0; i < 5; i++) {
        watch->Start ();
        double n = Math::Pow (10, i + 3);

        insideCounter = 0;
        for (int j = 0; j < n; j++) {
            randomX = mainFigure_->getMinX() + System::Convert::ToDouble (number->Next (0, 132767)) / 132767 * (mainFigure_->getMaxX() - mainFigure_->getMinX()); //minX_ * number.Next (ToInt32 ( minX_ ), ToInt32(maxX_));
            randomY = mainFigure_->getMinY() + System::Convert::ToDouble (number->Next (0, 132767)) / 132767 * (mainFigure_->getMaxY() - mainFigure_->getMinY()); //number.Next (ToInt32 ( minY_ ), ToInt32(maxY_));
            if (mainFigure_->isInside (gcnew Point (randomX, randomY)) == true)
                insideCounter++;
        }

        auto square = Convert::ToDouble(mainFigure_->getSquare()) * Convert::ToDouble(insideCounter) / Convert::ToDouble(n);
        watch->Stop ();

        data->addSquare (square);
        data->addAcc (Math::Abs (square - actualSquare) / actualSquare);
        data->addPoints (n);
        data->addPointsInside (insideCounter);
        data->addTime (watch->Elapsed);

        watch->Reset ();
    }

    return data;
}
