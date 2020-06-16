#pragma once
#include "MainFigure.h"


ref class OOP : MainFigure
{
public:
	explicit OOP ( System::Collections::Generic::List <PointF>^ PointFsArray);	//конструктор

	void calculate (System::Windows::Forms::DataGridView^ table);	//вычисление количества точек внутри
};

