#pragma once
//using System::Collections::Generic;

ref class ReturnedData
{
public:
	ReturnedData ();
	
	void addSquare (double newSquare);
	void addAcc (double newAcc);
	void addPoints (double number);
	void addPointsInside (double number);
	void addTime ( System::TimeSpan time);

	System::Collections::Generic::List<double>^ getSquares ();
	System::Collections::Generic::List<double>^ getAccs ();
	System::Collections::Generic::List<double>^ getNumber ();
	System::Collections::Generic::List<double>^ getInside ();
	System::Collections::Generic::List<System::TimeSpan>^ getTimes ();

	System::TimeSpan^ getTime ();
	double getAcSquare ();
	void setAcSquare (double newSquare);
	
private:
	System::Collections::Generic::List<double>^ calculatedSquares;
	System::Collections::Generic::List<double>^ accuracies;
	System::Collections::Generic::List<double>^ numberOfPoints;
	System::Collections::Generic::List<double>^ numberOfPointsInside;
	System::Collections::Generic::List<System::TimeSpan>^ times;

	System::TimeSpan^ time;
	double actualSquare;
};

