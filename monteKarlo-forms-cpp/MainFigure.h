#pragma once
#include "LinearFunction.h"

ref class MainFigure
{
public:
	MainFigure (PointF^ aPointF, PointF^ bPointF, PointF^ cPointF, PointF^ dPointF);	//конструктор

	void setMinsAndMaxs ();	//выставление minx и прочего
	void calculateSquare ();	//вычисление площади прямоугольника, в который мы потом впишем фигру

	bool isInside (double x, double y);	//проверка, внутри ли всей фигуры

	double calculateActualSquare();	//вычисление площади вписанной фигуры (abcd)

	double getMinY ();	//геты значений
	double getMinX ();
	double getMaxY ();
	double getMaxX ();

	double getSquare ();
	
private:
	PointF^ aPointF_;	//точка b
	PointF^ bPointF_;	//точка c
	PointF^ cPointF_;	//точка d
	PointF^ dPointF_;

	double minY_;	//тут все ясно
	double minX_;
	double maxY_;
	double maxX_;

	double square_;	//площадь большого прямоугольника

	LinearFunction^ first_;	//линейная функция соединяющая точки b и c
	LinearFunction^ second_;	//точки c and d
	LinearFunction^ third_;	//точки d and a
};

