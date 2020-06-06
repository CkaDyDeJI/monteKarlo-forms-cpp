#pragma once
#include "OOP.h"


namespace monteKarloformscpp
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private:
		Generic::List <PointF>^ mainList_ = gcnew Generic::List<PointF> ();	//список точек
		
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

		/////////////////////////////////////////////////////////////////////////
		/////////////далее всякий внутренний код ВС, который генериться автоматически

	private:
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::Label^ label2;
		System::Windows::Forms::Label^ label3;
		System::Windows::Forms::TextBox^ textBox1;
		System::Windows::Forms::TextBox^ textBox2;
		System::Windows::Forms::TextBox^ textBox3;
		System::Windows::Forms::Button^ button1;
		System::Windows::Forms::DataGridView^ dataGridView1;
		System::Windows::Forms::DataGridViewTextBoxColumn^ nPoints;
		System::Windows::Forms::DataGridViewTextBoxColumn^ nPointsInside;
		System::Windows::Forms::DataGridViewTextBoxColumn^ square;
		System::Windows::Forms::DataGridViewTextBoxColumn^ mkSquare;
		System::Windows::Forms::DataGridViewTextBoxColumn^ accuracy;
		System::Windows::Forms::DataGridViewTextBoxColumn^ time;
		System::Windows::Forms::PictureBox^ pictureBox1;
		System::Windows::Forms::TextBox^ textBox4;
		System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::GroupBox^ groupBox1;






		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager (MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label ());
			this->label2 = (gcnew System::Windows::Forms::Label ());
			this->label3 = (gcnew System::Windows::Forms::Label ());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox ());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox ());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox ());
			this->button1 = (gcnew System::Windows::Forms::Button ());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView ());
			this->nPoints = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn ());
			this->nPointsInside = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn ());
			this->square = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn ());
			this->mkSquare = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn ());
			this->accuracy = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn ());
			this->time = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn ());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox ());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox ());
			this->label4 = (gcnew System::Windows::Forms::Label ());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox ());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit ();
			this->groupBox1->SuspendLayout ();
			this->SuspendLayout ();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point (6, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size (45, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"точка A";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point (6, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size (45, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"точка B";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point (6, 103);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size (45, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"точка C";
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Location = System::Drawing::Point (122, 27);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size (100, 20);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Location = System::Drawing::Point (122, 62);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size (100, 20);
			this->textBox2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Location = System::Drawing::Point (122, 100);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size (100, 20);
			this->textBox3->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Control;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point (281, 77);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size (75, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"вычислить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler (this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange (gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  > (6)
			{
				this->nPoints,
					this->nPointsInside, this->square, this->mkSquare, this->accuracy, this->time
			});
			this->dataGridView1->Location = System::Drawing::Point (0, 194);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size (687, 201);
			this->dataGridView1->TabIndex = 7;
			// 
			// nPoints
			// 
			this->nPoints->HeaderText = L"точки";
			this->nPoints->Name = L"nPoints";
			// 
			// nPointsInside
			// 
			this->nPointsInside->HeaderText = L"внутри точке";
			this->nPointsInside->Name = L"nPointsInside";
			// 
			// square
			// 
			this->square->HeaderText = L"площадь";
			this->square->Name = L"square";
			// 
			// mkSquare
			// 
			this->mkSquare->HeaderText = L"площадь монте-карло";
			this->mkSquare->Name = L"mkSquare";
			// 
			// accuracy
			// 
			this->accuracy->HeaderText = L"погрешность";
			this->accuracy->Name = L"accuracy";
			// 
			// time
			// 
			this->time->HeaderText = L"время";
			this->time->Name = L"time";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject (L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox1->Location = System::Drawing::Point (375, 19);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size (312, 169);
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// textBox4
			// 
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox4->Location = System::Drawing::Point (122, 139);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size (100, 20);
			this->textBox4->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point (6, 142);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size (46, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"точка D";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add (this->label4);
			this->groupBox1->Controls->Add (this->label1);
			this->groupBox1->Controls->Add (this->textBox4);
			this->groupBox1->Controls->Add (this->label2);
			this->groupBox1->Controls->Add (this->label3);
			this->groupBox1->Controls->Add (this->textBox1);
			this->groupBox1->Controls->Add (this->textBox2);
			this->groupBox1->Controls->Add (this->textBox3);
			this->groupBox1->Location = System::Drawing::Point (0, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size (257, 176);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"точки";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF (6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size (686, 395);
			this->Controls->Add (this->button1);
			this->Controls->Add (this->groupBox1);
			this->Controls->Add (this->pictureBox1);
			this->Controls->Add (this->dataGridView1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit ();
			this->groupBox1->ResumeLayout (false);
			this->groupBox1->PerformLayout ();
			this->ResumeLayout (false);

		}

		///////////////////////////////////////////////////////////////////////////////////////
		/////////////////////////////конец автоматически сгенерированной ебалы

		
#pragma endregion


		
		Void button1_Click (System::Object^ sender, System::EventArgs^ e)
		{	//при нажатии на кнопку начало вычисления площади
			if (setPoints () == false) {	//проверка того, ввелись ли пользователем точки
				return;
			}

			OOP^ main1 = gcnew OOP (mainList_);	//создание класса, в котором все будет вычисляться
			outputResult (main1->calculate ());	//вызов функиии вычисления, которая вернет данные

			mainList_->Clear ();
		}


		void outputResult (ReturnedData^ dataForOutput)
		{	//распихивание данных по колонкам
			auto squares = dataForOutput->getSquares();
			auto accs = dataForOutput->getAccs();
			auto numbOfPoints = dataForOutput->getNumber();
			auto numbOfPointsInside = dataForOutput->getInside();
			auto times = dataForOutput->getTimes();

			int currentRow = dataGridView1->RowCount - 1;
			for (int i = 0; i < squares->Count; i++) {
				dataGridView1->Rows->Add ();
				dataGridView1->Rows[currentRow]->Cells[0]->Value = numbOfPoints[i];
				dataGridView1->Rows[currentRow]->Cells[1]->Value = numbOfPointsInside[i];
				dataGridView1->Rows[currentRow]->Cells[2]->Value = dataForOutput->getAcSquare();
				dataGridView1->Rows[currentRow]->Cells[3]->Value = squares[i];
				dataGridView1->Rows[currentRow]->Cells[4]->Value = accs[i];
				dataGridView1->Rows[currentRow]->Cells[5]->Value = times[i];

				currentRow++;
			}

			dataGridView1->Rows->Add ();
		}

		
		bool setPoints ()
		{
			array<String^>^ temp;

			try {	//попытки конвертации текста из текстбоксов в double значения и поинты
				temp = textBox1->Text->Replace ('.', ',')->Split (gcnew array<Char> {' '});

				mainList_->Add (PointF (Convert::ToDouble (temp[0]), Convert::ToDouble (temp[1])));
			} catch (...) {
				MessageBox::Show ("левая точка задана неверна");

				return false;
			}

			try {
				temp = textBox2->Text->Replace ('.', ',')->Split (gcnew array<Char> {' '});

				mainList_->Add (PointF (Convert::ToDouble (temp[0]), Convert::ToDouble (temp[1])));
			} catch (...) {
				MessageBox::Show ("верхняя точка задана неверна");

				return false;
			}

			try {
				temp = textBox3->Text->Replace ('.', ',')->Split (gcnew array<Char> {' '});

				mainList_->Add (PointF (Convert::ToDouble (temp[0]), Convert::ToDouble (temp[1])));
			} catch(...) {
				MessageBox::Show ("правая точка задана неверна");

				return false;
			}

			try {	//попытки конвертации текста из текстбоксов в double значения и поинты
				temp = textBox4->Text->Replace ('.', ',')->Split (gcnew array<Char> {' '});

				mainList_->Add (PointF (Convert::ToDouble (temp[0]), Convert::ToDouble (temp[1])));
			} catch (...) {
				MessageBox::Show ("левая точка задана неверна");

				return false;
			}

			return true;
		}
	};
}
