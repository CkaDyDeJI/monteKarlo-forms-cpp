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
		Generic::List <PointF>^ mainList_ = gcnew Generic::List<PointF> ();
		
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

	private:
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::Label^ label2;
		System::Windows::Forms::Label^ label3;
		System::Windows::Forms::TextBox^ textBox1;
		System::Windows::Forms::TextBox^ textBox2;
		System::Windows::Forms::TextBox^ textBox3;
		System::Windows::Forms::Button^ button1;
		System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nPoints;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nPointsInside;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ square;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ mkSquare;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ accuracy;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ time;
	private: System::Windows::Forms::PictureBox^ pictureBox1;






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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit ();
			this->SuspendLayout ();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point (39, 291);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size (83, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"левая точка (b)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point (39, 338);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size (94, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"верхняя точка (c)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point (39, 385);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size (89, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"правая точка (d)";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point (134, 288);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size (100, 20);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point (134, 335);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size (100, 20);
			this->textBox2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point (134, 382);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size (100, 20);
			this->textBox3->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point (263, 307);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size (75, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler (this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange (gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  > (6)
			{
				this->nPoints,
					this->nPointsInside, this->square, this->mkSquare, this->accuracy, this->time
			});
			this->dataGridView1->Location = System::Drawing::Point (0, 1);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size (1085, 264);
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
			this->pictureBox1->Location = System::Drawing::Point (761, 271);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size (312, 169);
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF (6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size (1085, 649);
			this->Controls->Add (this->pictureBox1);
			this->Controls->Add (this->dataGridView1);
			this->Controls->Add (this->button1);
			this->Controls->Add (this->textBox3);
			this->Controls->Add (this->textBox2);
			this->Controls->Add (this->textBox1);
			this->Controls->Add (this->label3);
			this->Controls->Add (this->label2);
			this->Controls->Add (this->label1);
			this->Name = L"MyForm";;
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit ();
			this->ResumeLayout (false);
			this->PerformLayout ();

		}

		
#pragma endregion
		System::Void button1_Click (System::Object^ sender, System::EventArgs^ e)
		{
			if (setPoints () == false) {
				return;
			}

			OOP^ main1 = gcnew OOP (mainList_);
			outputResult (main1->calculate ());

			mainList_->Clear ();
		}


		void outputResult (ReturnedData^ dataForOutput)
		{
			//var dataGridView1 = dataGrids[textBoxNumber];

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

			//dataGridView1.Rows.Add();
			// RichTextBox[] textBoxes = new RichTextBox[] {forOOP, forNonOOP};
			//
			// textBoxes[textBoxNumber].Text += "\n\r\n\r";
			//
			// var squares = dataForOutput.CalculatedSquares;
			// var accs = dataForOutput.Accuracies;
			// for (int i = 0; i < squares.Count; i++) {
			//     textBoxes[textBoxNumber].Text += $"Площадь = {squares[i]}   Погрешность = {accs[i]}\n\r";
			// }
			//
			// textBoxes[textBoxNumber].Text += $"Настоящая Площадь = {dataForOutput.actualSquare}\n\rВремя Затрачено: {dataForOutput.time}";
		}

		
		bool setPoints ()
		{
			array<String^>^ temp;
			//Generic::List<String^>^ temp = gcnew Generic::List<String^>();

			try {
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

			return true;
		}
	};
}
