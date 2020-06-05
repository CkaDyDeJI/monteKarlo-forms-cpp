#include "ReturnedData.h"


ReturnedData::ReturnedData ()
{
    calculatedSquares = gcnew System::Collections::Generic::List <double> ();
    accuracies = gcnew System::Collections::Generic::List <double> ();
    numberOfPoints = gcnew System::Collections::Generic::List <double> ();
    numberOfPointsInside = gcnew System::Collections::Generic::List <double> ();
    times = gcnew System::Collections::Generic::List <System::TimeSpan> ();
}


void ReturnedData::addSquare ( double newSquare )   //в каждой функции с add просто доавбление в конец списка
{
    calculatedSquares->Add (newSquare);
}


void ReturnedData::addAcc ( double newAcc )
{
    accuracies->Add (newAcc);
}


void ReturnedData::addPoints ( double number )
{
    numberOfPoints->Add (number);
}


void ReturnedData::addPointsInside ( double number )
{
    numberOfPointsInside->Add (number);
}


void ReturnedData::addTime ( System::TimeSpan time )
{
    times->Add (time);
}


System::Collections::Generic::List<double>^ ReturnedData::getSquares ()
{
    return calculatedSquares;
}


System::Collections::Generic::List<double>^ ReturnedData::getAccs ()
{
    return accuracies;
}


System::Collections::Generic::List<double>^ ReturnedData::getNumber ()
{
    return numberOfPoints;
}


System::Collections::Generic::List<double>^ ReturnedData::getInside ()
{
    return numberOfPointsInside;
}


System::Collections::Generic::List<System::TimeSpan>^ ReturnedData::getTimes ()
{
    return times;
}


// System::TimeSpan^ ReturnedData::getTime ()
// {
//     return time;
// }


double ReturnedData::getAcSquare ()
{
    return actualSquare;
}


void ReturnedData::setAcSquare ( double newSquare )
{
    actualSquare = newSquare;
}
