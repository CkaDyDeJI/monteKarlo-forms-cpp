#include "OOP.h"


OOP::OOP ( System::Collections::Generic::List <PointF>^ PointsArray) : MainFigure (PointsArray[0], PointsArray[1]) {}


void OOP::calculate ( System::Windows::Forms::DataGridView^ table)
{
    System::Diagnostics::Stopwatch^ watch = gcnew System::Diagnostics::Stopwatch ();    //создаем таймер

    auto actualSquare = calculateActualSquare ();  //вычисление настоящей площади вписанное фигуры

    System::Random^ number = gcnew System::Random ();
    double insideCounter;
    double randomX;
    double randomY;
    for (int i = 0; i < 5; i++) {   //цикл из пяти шагов от 10^3  до 10^7
        watch->Start ();    //стартуем таймер для итерации
        double n = System::Math::Pow (10, i + 3);   //количетсво итераций в данный момент

        insideCounter = 0;  //счетчик точек внутри
        for (int j = 0; j < n; j++) {
            randomX = getMinX() + System::Convert::ToDouble (number->Next (0, 132767)) / 132767 * (getMaxX() - getMinX());   //генерация равномерно распределенных случайных точек
            randomY = getMinY() + System::Convert::ToDouble (number->Next (0, 132767)) / 132767 * (getMaxY() - getMinY());
            if (isInside (randomX, randomY) == true)    // проверка, внутри ли она
                insideCounter++;
        }

        auto square = getSquare() * insideCounter / n; //вычисление площади при помощи формулы s * points / pointsInside
        watch->Stop (); //остановка таймера

        table->Rows->Add (n, insideCounter, actualSquare, square, System::Math::Round (System::Math::Abs (square - actualSquare) / actualSquare * 100, 3), watch->ElapsedMilliseconds);
    }
}
