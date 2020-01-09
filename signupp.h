#pragma once
#include "signupp.h"
#include "HomePage.h"
#include<fstream>
#include<string>
#include<iostream>
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
	/// Summary for signupp
	/// </summary>
	public ref class signupp : public System::Windows::Forms::Form
	{
	public:
		signupp(void)
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
		~signupp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox4;
	protected:
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  signupButton;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Label^  password;
	private: System::Windows::Forms::Label^  phn;
	private: System::Windows::Forms::Label^  lName;
	private: System::Windows::Forms::Label^  fName;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(signupp::typeid));
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->signupButton = (gcnew System::Windows::Forms::Button());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->password = (gcnew System::Windows::Forms::Label());
			this->phn = (gcnew System::Windows::Forms::Label());
			this->lName = (gcnew System::Windows::Forms::Label());
			this->fName = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(126, 117);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(129, 20);
			this->textBox4->TabIndex = 21;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(126, 81);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(129, 20);
			this->textBox3->TabIndex = 20;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(126, 44);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(129, 20);
			this->textBox2->TabIndex = 19;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(126, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(129, 20);
			this->textBox1->TabIndex = 18;
			// 
			// signupButton
			// 
			this->signupButton->Location = System::Drawing::Point(32, 218);
			this->signupButton->Name = L"signupButton";
			this->signupButton->Size = System::Drawing::Size(106, 31);
			this->signupButton->TabIndex = 17;
			this->signupButton->Text = L"sign up";
			this->signupButton->UseVisualStyleBackColor = true;
			this->signupButton->Click += gcnew System::EventHandler(this, &signupp::signupButton_Click);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(110, 162);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(60, 17);
			this->checkBox2->TabIndex = 16;
			this->checkBox2->Text = L"Female";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(32, 162);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(49, 17);
			this->checkBox1->TabIndex = 15;
			this->checkBox1->Text = L"Male";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// password
			// 
			this->password->AutoSize = true;
			this->password->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->password->Location = System::Drawing::Point(29, 124);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(75, 13);
			this->password->TabIndex = 14;
			this->password->Text = L"new password";
			// 
			// phn
			// 
			this->phn->AutoSize = true;
			this->phn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->phn->Location = System::Drawing::Point(29, 88);
			this->phn->Name = L"phn";
			this->phn->Size = System::Drawing::Size(75, 13);
			this->phn->TabIndex = 13;
			this->phn->Text = L"mobile number";
			// 
			// lName
			// 
			this->lName->AutoSize = true;
			this->lName->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lName->Location = System::Drawing::Point(29, 51);
			this->lName->Name = L"lName";
			this->lName->Size = System::Drawing::Size(56, 13);
			this->lName->TabIndex = 12;
			this->lName->Text = L"Last name";
			// 
			// fName
			// 
			this->fName->AutoSize = true;
			this->fName->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->fName->Location = System::Drawing::Point(29, 15);
			this->fName->Name = L"fName";
			this->fName->Size = System::Drawing::Size(55, 13);
			this->fName->TabIndex = 11;
			this->fName->Text = L"First name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(289, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 22;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(289, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 23;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(289, 88);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 13);
			this->label3->TabIndex = 24;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(289, 124);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 13);
			this->label4->TabIndex = 25;
			// 
			// signupp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(558, 362);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->signupButton);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->password);
			this->Controls->Add(this->phn);
			this->Controls->Add(this->lName);
			this->Controls->Add(this->fName);
			this->Name = L"signupp";
			this->Text = L"signupp";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void signupButton_Click(System::Object^  sender, System::EventArgs^  e) 
	{
				
				 string fn, ln, phn, pass;
				 ofstream out;
				 out.open("Records.txt",ios::app);
				 
				 int flag;
				 
				 do{
					 fn = msclr::interop::marshal_as<string>(textBox1->Text);
					 if (fn == "\0")
					 {
						 flag = 1;
					 }
					 ln = msclr::interop::marshal_as<string>(textBox2->Text);
					 if (ln == "\0")
					 {
						 flag = 2;
					 }
					 phn = msclr::interop::marshal_as<string>(textBox3->Text);
					 if (phn == "\0")
					 {
						 flag = 3;
					 }
					 pass = msclr::interop::marshal_as<string>(textBox4->Text);
					 if (pass == "\0")
					 {
						 flag = 4;
					 }

					 switch (flag)
					 {

					 case	1:
					 {
								 label1->Text = "First NAme Can't be Empty";
					 }

					 case	2:
					 {
								 label2->Text = "Last NAme Can't be Empty";
					 }
					 case	3:
					 {
								 label3->Text = "phnone Can't be Empty";
					 }
					 case	4:
					 {
								 label4->Text = "Password Can't be Empty";
					 }


					 };

				 } while (fn == "\0" || ln == "\0" || phn == "\0" || pass == "\0");
					 
			
				 cout << "asdfasd";
				 out << fn << "\t" << pass << "\t" << ln << "\t" << phn << endl;
				 this->Visible = false;
	}
};
}
