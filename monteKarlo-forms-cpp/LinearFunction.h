#pragma once
#include "AbstractFigure.h"

using namespace System::Drawing;

ref class LinearFunction : AbstractFigure
{
public:
	LinearFunction (PointF^ firstPointF, PointF^ secondPointF);	//конструктор, внутри вычисл€ютс€ кэффициенты k и b
	LinearFunction (LinearFunction% newOne);	//конструктор копировани€, чтобы можно было передавать класс в другие функции

	bool isInside (double x, double y) override;	//проверка того, находитс€ ли точка внутри (на самом деле под/над функцией)
	double square() override;
	
private:
	double k_;	//коэффициент k из линейного уравнени€ y = kx + b, которое задает часть нашей фигуры
	double b_;	// ну и b
};

