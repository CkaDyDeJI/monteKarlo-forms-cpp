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
		

	private:
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::Label^ label2;

		System::Windows::Forms::TextBox^ textBox1;
		System::Windows::Forms::TextBox^ textBox2;

		System::Windows::Forms::Button^ button1;
		System::Windows::Forms::DataGridView^ dataGridView1;
		System::Windows::Forms::DataGridViewTextBoxColumn^ nPoints;
		System::Windows::Forms::DataGridViewTextBoxColumn^ nPointsInside;
		System::Windows::Forms::DataGridViewTextBoxColumn^ square;
		System::Windows::Forms::DataGridViewTextBoxColumn^ mkSquare;
		System::Windows::Forms::DataGridViewTextBoxColumn^ accuracy;
		System::Windows::Forms::DataGridViewTextBoxColumn^ time;
		System::Windows::Forms::PictureBox^ pictureBox1;


		System::Windows::Forms::GroupBox^ groupBox1;
		System::Windows::Forms::RadioButton^ radioButton3;
		System::Windows::Forms::RadioButton^ radioButton2;
		System::Windows::Forms::RadioButton^ radioButton1;
		System::Windows::Forms::Button^ button2;






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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox ());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox ());
			this->button1 = (gcnew System::Windows::Forms::Button ());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView ());
			this->nPoints = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn ());
			this->nPointsInside = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn ());
			this->square = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn ());
			this->mkSquare = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn ());
			this->accuracy = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn ());
			this->time = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn ());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox ());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox ());
			this->button2 = (gcnew System::Windows::Forms::Button ());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton ());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton ());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton ());
			(safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit ();
			(safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit ();
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
			this->label1->Text = L"точка B";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point (6, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size (44, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"точка F";
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Location = System::Drawing::Point (122, 27);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size (119, 20);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Location = System::Drawing::Point (122, 62);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size (119, 20);
			this->textBox2->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Control;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point (166, 93);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size (75, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Вычислить";
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
			this->dataGridView1->Location = System::Drawing::Point (0, 256);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size (787, 201);
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
			this->pictureBox1->BackgroundImage = (safe_cast<System::Drawing::Image^>(resources->GetObject (L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox1->Location = System::Drawing::Point (375, 19);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size (312, 169);
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add (this->button2);
			this->groupBox1->Controls->Add (this->button1);
			this->groupBox1->Controls->Add (this->radioButton3);
			this->groupBox1->Controls->Add (this->radioButton2);
			this->groupBox1->Controls->Add (this->radioButton1);
			this->groupBox1->Controls->Add (this->label1);
			this->groupBox1->Controls->Add (this->label2);
			this->groupBox1->Controls->Add (this->textBox1);
			this->groupBox1->Controls->Add (this->textBox2);
			this->groupBox1->Location = System::Drawing::Point (0, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size (257, 176);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"точки";
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point (166, 132);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size (75, 23);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Очистить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler (this, &MyForm::button2_Click);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point (9, 142);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size (134, 17);
			this->radioButton3->TabIndex = 7;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Рандомные значения";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler (this, &MyForm::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point (9, 119);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size (134, 17);
			this->radioButton2->TabIndex = 6;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Контрольный пример";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler (this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point (9, 96);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size (87, 17);
			this->radioButton1->TabIndex = 5;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Ручной ввод";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler (this, &MyForm::radioButton1_CheckedChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF (6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size (786, 457);
			this->Controls->Add (this->groupBox1);
			this->Controls->Add (this->pictureBox1);
			this->Controls->Add (this->dataGridView1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit ();
			(safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit ();
			this->groupBox1->ResumeLayout (false);
			this->groupBox1->PerformLayout ();
			this->ResumeLayout (false);

		}


		
#pragma endregion


		
		Void button1_Click (System::Object^ sender, System::EventArgs^ e)
		{
			if (radioButton1->Checked == true)
				if (setPoints () == false)
					return;

			OOP^ main1 = gcnew OOP (mainList_);
			main1->calculate (dataGridView1);

			mainList_->Clear();
		}

		
		bool setPoints()
		{
			array<String^>^ temp;

			try {
				temp = textBox1->Text->Replace ('.', ',')->Split (gcnew array<Char> {' '});

				mainList_->Add (PointF (Convert::ToDouble (temp[0]), Convert::ToDouble (temp[1])));
			} catch (...) {
				MessageBox::Show ("Верхняя точка B задана неверно");

				return false;
			}

			try {
				temp = textBox2->Text->Replace ('.', ',')->Split (gcnew array<Char> {' '});

				mainList_->Add (PointF (Convert::ToDouble (temp[0]), Convert::ToDouble (temp[1])));
			} catch (...) {
				MessageBox::Show ("Нижняя точка F задана неверно");

				return false;
			}

			if (mainList_[0].X != mainList_[1].X)
			{
				MessageBox::Show ("Точка B и F по оси x должны совпадать");

				return false;
			}

			if (mainList_[1].Y >= mainList_[0].Y)
			{
				MessageBox::Show ("Точка F должна быть ниже точки B");

				return false;
			}

			return true;
		}

		
		Void button2_Click (System::Object^ sender, System::EventArgs^ e)
		{
			dataGridView1->Rows->Clear ();
		}

		
		Void radioButton1_CheckedChanged (System::Object^ sender, System::EventArgs^ e)
		{
			textBox1->Clear ();
			textBox2->Clear ();
		}

		
		Void radioButton2_CheckedChanged (System::Object^ sender, System::EventArgs^ e)
		{
			textBox1->Text = "3 20";
			textBox2->Text = "3 10";
			mainList_->Add (PointF (3, 20));
			mainList_->Add (PointF (3, 10));
		}

		
		Void radioButton3_CheckedChanged (System::Object^ sender, System::EventArgs^ e)
		{
			Random^ random = gcnew Random ();
			auto x = random->Next (0, 100);
			auto y1 = random->Next (0, 50);
			auto y2 = random->Next (51, 100);
			textBox1->Text = x.ToString () + " " + y2.ToString ();
			textBox2->Text = x.ToString () + " " + y1.ToString ();
			mainList_->Add (PointF (x, y2));
			mainList_->Add (PointF (x, y1));
		}
	};
}
