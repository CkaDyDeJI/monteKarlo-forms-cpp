#pragma once
#include "MainFigure.h"
#include "ReturnedData.h"


ref class OOP
{
public:
	explicit OOP ( Collections::Generic::List <Point>^ pointsArray);

	ReturnedData^ calculate ();
	
private:
	MainFigure^ mainFigure_;
};

