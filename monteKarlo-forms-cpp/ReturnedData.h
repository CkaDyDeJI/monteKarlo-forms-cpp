#pragma once
//using System::Collections::Generic;

ref class ReturnedData	//класс в котором хранятся вычисленные значения, чтобы передавать его из одного класса в форму
{
public:
	ReturnedData ();	//просто констуктор
	
	//доавбления в список последним элементом
	void addSquare (double newSquare);	//с площадями методами монте карло
	void addAcc (double newAcc);	//точности вычисления
	void addPoints (double number);	//изначальное количество точек
	void addPointsInside (double number);	//сколько из них внутри
	void addTime ( System::TimeSpan time);	//время на вычисление каждой итерации

	System::Collections::Generic::List<double>^ getSquares ();	//геты
	System::Collections::Generic::List<double>^ getAccs ();
	System::Collections::Generic::List<double>^ getNumber ();
	System::Collections::Generic::List<double>^ getInside ();
	System::Collections::Generic::List<System::TimeSpan>^ getTimes ();

	System::TimeSpan^ getTime ();
	double getAcSquare ();
	void setAcSquare (double newSquare);
		//установление настоящей площади
private:
	System::Collections::Generic::List<double>^ calculatedSquares;
	System::Collections::Generic::List<double>^ accuracies;
	System::Collections::Generic::List<double>^ numberOfPoints;
	System::Collections::Generic::List<double>^ numberOfPointsInside;
	System::Collections::Generic::List<System::TimeSpan>^ times;

	System::TimeSpan^ time;
	double actualSquare;
};

