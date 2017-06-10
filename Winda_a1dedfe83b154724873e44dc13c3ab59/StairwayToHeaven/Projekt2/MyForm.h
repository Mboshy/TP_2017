#pragma once

#include "Resource.h"

namespace Projekt2 {
	//Globals
	std::vector <int> floor;
	int i = 0;

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{

		String^ lvl1 = "1";
		String^ lvl2 = "2";
		String^ lvl3 = "3";
		String^ lvl4 = "4";
		String^ lvl5 = "5";
		String^ queue1;
		String^ queue2;
		String^ queue3;
		String^ queue4;
		String^ queue5;

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyść wszystkie używane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  level1;
	private: System::ComponentModel::IContainer^  components;


	protected:

	protected:

	protected:


	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda obsługi projektanta — nie należy modyfikować 
		/// zawartość tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->level1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(307, 460);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(206, 110);
			this->pictureBox2->TabIndex = 27;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(851, 568);
			this->pictureBox1->TabIndex = 28;
			this->pictureBox1->TabStop = false;
			// 
			// timer1
			// 
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(14, 483);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(21, 28);
			this->button1->TabIndex = 29;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(44, 488);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(28, 22);
			this->button2->TabIndex = 30;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(83, 484);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(30, 26);
			this->button3->TabIndex = 31;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(124, 484);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(21, 25);
			this->button4->TabIndex = 32;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(157, 489);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(20, 21);
			this->button5->TabIndex = 33;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			//
			// level1
			//
			this->level1->AutoSize = true;
			this->level1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->level1->Location = System::Drawing::Point(154, 430);
			this->level1->Name = L"level1";
			this->level1->Size = System::Drawing::Size(13, 13);
			this->level1->TabIndex = 34;
			this->level1->Text = L"0";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(849, 570);
			this->Controls->Add(this->level1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}



		//Elevator controll

void Elevator(int x)
{
	if (i != 75)
	{
		i++;
		return;
	}
	if (this->pictureBox2->Top < x)
		this->pictureBox2->Top += 1;
	else if (this->pictureBox2->Top > x)
		this->pictureBox2->Top -= 1;
	else
	{
		i = 0;
		floor.erase(floor.begin());
	}
	if(floor.empty())
		this->timer1->Stop();
}


	#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		Elevator(floor[0]);
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		floor.push_back(FIRST_FLOOR);
			this->timer1->Start();
			queue1 = queue1 + "," + lvl1;
			level1->Text = queue1;
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		floor.push_back(SECOND_FLOOR);
		this->timer1->Start();

		queue1 = queue1 + "," + lvl2;
		level1->Text = queue1;
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		floor.push_back(THIRD_FLOOR);
		this->timer1->Start();
		queue1 = queue1 + "," + lvl3;
		level1->Text = queue1;
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		floor.push_back(FOURTH_FLOOR);
		this->timer1->Start();
		queue1 = queue1 + "," + lvl4;
		level1->Text = queue1;
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		floor.push_back(FIFTH_FLOOR);
		this->timer1->Start();
		queue1 = queue1 + "," + lvl5;
		level1->Text = queue1;
	}
	};

}
