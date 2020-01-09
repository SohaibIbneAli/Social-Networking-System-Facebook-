#pragma once
#include "MyForm.h"
#include "signupp.h"
#include "HomePage.h"
#include<iostream>
#include<fstream>
#include<string>
#include <msclr\marshal_cppstd.h>
using namespace std;

namespace BhayaBook {

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
	private: System::Windows::Forms::Button^  signup;
	protected:
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  login;

	private: System::Windows::Forms::FontDialog^  fontDialog1;
	private: System::Windows::Forms::Label^  label4;














	private:
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->signup = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->login = (gcnew System::Windows::Forms::Button());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// signup
			// 
			this->signup->BackColor = System::Drawing::SystemColors::ControlLight;
			this->signup->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signup->Location = System::Drawing::Point(149, 196);
			this->signup->Name = L"signup";
			this->signup->Size = System::Drawing::Size(103, 28);
			this->signup->TabIndex = 16;
			this->signup->Text = L"Sign Up";
			this->signup->UseVisualStyleBackColor = false;
			this->signup->Click += gcnew System::EventHandler(this, &MyForm::signup_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::LightGray;
			this->label3->Font = (gcnew System::Drawing::Font(L"Mistral", 16));
			this->label3->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->label3->Location = System::Drawing::Point(95, 37);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(169, 27);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Welcome To Bhayabook";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(100, 142);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(94, 17);
			this->checkBox1->TabIndex = 14;
			this->checkBox1->Text = L"Remember me";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(20, 116);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 15);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Password";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(20, 74);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 15);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Username";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(100, 116);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(154, 20);
			this->textBox2->TabIndex = 11;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(100, 74);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(154, 20);
			this->textBox1->TabIndex = 10;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// login
			// 
			this->login->BackColor = System::Drawing::SystemColors::ControlLight;
			this->login->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->login->Location = System::Drawing::Point(23, 196);
			this->login->Name = L"login";
			this->login->Size = System::Drawing::Size(103, 28);
			this->login->TabIndex = 9;
			this->login->Text = L"Log In";
			this->login->UseVisualStyleBackColor = false;
			this->login->Click += gcnew System::EventHandler(this, &MyForm::login_Click);
			// 
			// fontDialog1
			// 
			this->fontDialog1->Apply += gcnew System::EventHandler(this, &MyForm::fontDialog1_Apply);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(288, 116);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 13);
			this->label4->TabIndex = 17;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(600, 343);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->signup);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->login);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void signup_Click(System::Object^  sender, System::EventArgs^  e) 
	{
				 signupp^ sign = gcnew signupp;
				 this->Hide() ;
				 sign->Visible = true;
		
	}
private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
}
	private: System::Void fontDialog1_Apply(System::Object^  sender, System::EventArgs^  e){}
private: System::Void login_Click(System::Object^  sender, System::EventArgs^  e)
{
			 string fileId, filePas, inputId, inputPas;
			 ifstream in;
			 in.open("Records.txt");

			 inputId = msclr::interop::marshal_as<string>(textBox1->Text);
			 
			 inputPas = msclr::interop::marshal_as<string>(textBox2->Text);
			 bool flag = false;

			 while (!in.eof())
			 {
				 in >> fileId >> filePas;
				 if (inputId == fileId && inputPas == filePas)
				 {
					 flag = true;
					 cout << "DAta Matched\n";
					 break;
				 }
				 getline(in, fileId);
			 }
			 if (!flag)
			 {
				 label4->Text = "Please re-enter your password\nThe password you�ve entered is incorrect";
			 }
			 else
			 {
				 HomePage ^hmePage = gcnew HomePage;
				 this->Hide();
				 hmePage->Show();
			 }
			
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) 
{
}
};
}
