#pragma once
#include "MainFigure.h"
#include "ReturnedData.h"


ref class OOP
{
public:
	explicit OOP ( System::Collections::Generic::List <PointF>^ PointFsArray);	//конструктор

	ReturnedData^ calculate ();	//вычисление количества точек внутри
	
private:
	MainFigure^ mainFigure_;
};

