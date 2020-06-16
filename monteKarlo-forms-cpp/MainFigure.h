#pragma once
#include "LinearFunction.h"
#include "Circle.h"

ref class MainFigure : AbstractFigure
{
public:
	MainFigure (PointF^ bPointF, PointF^ fPointF);	//конструктор

	void setMinsAndMaxs ();	//выставление minx и прочего
	double calculateActualSquare ();	//вычисление площади прямоугольника, в который мы потом впишем фигру

	bool isInside (double x, double y) override;	//проверка, внутри ли всей фигуры

	double square () override;	//вычисление площади вписанной фигуры (bef)

	double getMinY ();	//геты значений
	double getMinX ();
	double getMaxY ();
	double getMaxX ();

	double getSquare ();
	
private:
	PointF^ bPointF;	//точка b
	PointF^ fPointF;	//точка f

	double minY;	//тут все ясно
	double minX;
	double maxY;
	double maxX;

	double rectSquare;	//площадь большого прямоугольника

	Circle^ beCircle;

	LinearFunction^ efLine;	//линейная функция соединяющая точки e и f
};

