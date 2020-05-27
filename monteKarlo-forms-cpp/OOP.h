#pragma once
#include "MainFigure.h"
#include "ReturnedData.h"


ref class OOP
{
public:
	explicit OOP ( System::Collections::Generic::List <PointF>^ PointFsArray);

	ReturnedData^ calculate ();
	
private:
	MainFigure^ mainFigure_;
};

