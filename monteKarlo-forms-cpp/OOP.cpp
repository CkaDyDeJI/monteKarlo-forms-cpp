#include "OOP.h"


OOP::OOP ( System::Collections::Generic::List <PointF>^ PointsArray)
{
	mainFigure_ = gcnew MainFigure (PointsArray[0], PointsArray[1], PointsArray[2], PointsArray[3]);    //инициализуем исходный прямоугольник и вписанную фигуру
}


ReturnedData^ OOP::calculate ()
{
    ReturnedData^ data = gcnew ReturnedData (); 
    System::Diagnostics::Stopwatch^ watch = gcnew System::Diagnostics::Stopwatch ();    //создаем таймер

    auto actualSquare = mainFigure_->calculateActualSquare ();  //вычисление настоящей площади вписанное фигуры
    data->setAcSquare (actualSquare);   //доавбление в данным

    System::Random^ number = gcnew System::Random ();
    double insideCounter;
    double randomX;
    double randomY;
    for (int i = 0; i < 5; i++) {   //цикл из пяти шагов от 10^3  до 10^7
        watch->Start ();    //стартуем таймер для итерации
        double n = System::Math::Pow (10, i + 3);   //количетсво итераций в данный момент

        insideCounter = 0;  //счетчик точек внутри
        for (int j = 0; j < n; j++) {
            randomX = mainFigure_->getMinX() + System::Convert::ToDouble (number->Next (0, 132767)) / 132767 * (mainFigure_->getMaxX() - mainFigure_->getMinX());   //генерация равномерно распределенных случайных точек
            randomY = mainFigure_->getMinY() + System::Convert::ToDouble (number->Next (0, 132767)) / 132767 * (mainFigure_->getMaxY() - mainFigure_->getMinY());
            if (mainFigure_->isInside (randomX, randomY) == true)    // проверка, внутри ли она
                insideCounter++;
        }

        auto square = mainFigure_->getSquare() * insideCounter / n; //вычисление площади при помощи формулы s * points / pointsInside
        watch->Stop (); //остановка таймера

        data->addSquare (square);   //добавление вещей в массив
        data->addAcc ( System::Math::Abs (square - actualSquare) / actualSquare);
        data->addPoints (n);
        data->addPointsInside (insideCounter);
        data->addTime (watch->Elapsed);

        watch->Reset ();    //рестарт таймера
    }

    return data;
}
