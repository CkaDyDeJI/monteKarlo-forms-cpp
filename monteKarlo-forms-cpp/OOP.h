#pragma once
#include "MainFigure.h"


ref class OOP : MainFigure
{
public:
	explicit OOP ( System::Collections::Generic::List <PointF>^ PointFsArray);	//�����������

	void calculate (System::Windows::Forms::DataGridView^ table);	//���������� ���������� ����� ������
};

