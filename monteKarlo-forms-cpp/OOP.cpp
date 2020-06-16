#include "OOP.h"


OOP::OOP ( System::Collections::Generic::List <PointF>^ PointsArray) : MainFigure (PointsArray[0], PointsArray[1]) {}


void OOP::calculate ( System::Windows::Forms::DataGridView^ table)
{
    System::Diagnostics::Stopwatch^ watch = gcnew System::Diagnostics::Stopwatch ();    //������� ������

    auto actualSquare = calculateActualSquare ();  //���������� ��������� ������� ��������� ������

    System::Random^ number = gcnew System::Random ();
    double insideCounter;
    double randomX;
    double randomY;
    for (int i = 0; i < 5; i++) {   //���� �� ���� ����� �� 10^3  �� 10^7
        watch->Start ();    //�������� ������ ��� ��������
        double n = System::Math::Pow (10, i + 3);   //���������� �������� � ������ ������

        insideCounter = 0;  //������� ����� ������
        for (int j = 0; j < n; j++) {
            randomX = getMinX() + System::Convert::ToDouble (number->Next (0, 132767)) / 132767 * (getMaxX() - getMinX());   //��������� ���������� �������������� ��������� �����
            randomY = getMinY() + System::Convert::ToDouble (number->Next (0, 132767)) / 132767 * (getMaxY() - getMinY());
            if (isInside (randomX, randomY) == true)    // ��������, ������ �� ���
                insideCounter++;
        }

        auto square = getSquare() * insideCounter / n; //���������� ������� ��� ������ ������� s * points / pointsInside
        watch->Stop (); //��������� �������

        table->Rows->Add (n, insideCounter, actualSquare, square, System::Math::Round (System::Math::Abs (square - actualSquare) / actualSquare * 100, 3), watch->ElapsedMilliseconds);
    }
}
