#pragma once
#include "LinearFunction.h"

ref class MainFigure
{
public:
	MainFigure (PointF^ leftPointF, PointF^ upPointF, PointF^ rightPointF);	//конструктор

	void setMinsAndMaxs ();	//выставление minx и прочего
	void calculateSquare ();	//вычисление площади прямоугольника, в который мы потом впишем фигру

	bool isInside (PointF^ newPointF);	//проверка, внутри ли всей фигуры

	double calculateActualSquare();	//вычисление площади вписанной фигуры (bcd)

	double getMinY ();	//геты значений
	double getMinX ();
	double getMaxY ();
	double getMaxX ();

	double getSquare ();
	
private:
	PointF^ leftPointF_;	//точка b
	PointF^ upPointF_;	//точка c
	PointF^ rightPointF_;	//точка d

	double minY_;	//тут все ясно
	double minX_;
	double maxY_;
	double maxX_;

	double square_;	//площадь большого прямоугольника

	LinearFunction^ first_;	//линейная функция соединяющая точки b и c
	LinearFunction^ second_;	//точки c and d
	LinearFunction^ third_;	//точки d and b
};

