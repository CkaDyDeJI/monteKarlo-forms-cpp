#pragma once
ref class AbstractFigure
{
public:
	//virtual ~AbstractFigure();

	virtual bool isInside (double x, double y) = 0;
	virtual double square () = 0;
};

