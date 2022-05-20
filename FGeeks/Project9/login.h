#pragma once
#include"userForm.h"
#include "login.h"
#include "MyForm.h"
//#include<bits/stdc++.h>
#include "signup.h"
#include<fstream>
#include <msclr\marshal_cppstd.h>
#include<string>

namespace Project9 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class login : public System::Windows::Forms::Form
	{
	public:
		login(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			/*userForm^ A = gcnew userForm();
			A->Show();*/
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ user;
	private: System::Windows::Forms::TextBox^ pass;
	private: System::Windows::Forms::CheckBox^ ch1;



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private:bool userrr(String^ uT, String^ pT) {

		string u, p;
		fstream signup;
		signup.open("signup.txt");



		bool check = false;


		while (signup.good())
		{
			signup >> u >> p;
			if (uT == gcnew String(u.data()) && pT == gcnew String(p.data()))
			{
				check = true;

				break;
			}
		}
		signup.close();

		return check;
	}
























	protected:

	private






		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(login::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->user = (gcnew System::Windows::Forms::TextBox());
			this->pass = (gcnew System::Windows::Forms::TextBox());
			this->ch1 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(798, 34);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(119, 93);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 28.17391F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(352, 150);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(136, 51);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Sign in";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.77391F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->Location = System::Drawing::Point(372, 256);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(95, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"username";
			this->label2->Click += gcnew System::EventHandler(this, &login::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.77391F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->Location = System::Drawing::Point(375, 400);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 25);
			this->label3->TabIndex = 3;
			this->label3->Text = L"password";
			this->label3->Click += gcnew System::EventHandler(this, &login::label3_Click);
			// 
			// user
			// 
			this->user->Location = System::Drawing::Point(377, 312);
			this->user->Name = L"user";
			this->user->Size = System::Drawing::Size(281, 36);
			this->user->TabIndex = 4;
			this->user->TextChanged += gcnew System::EventHandler(this, &login::textBox1_TextChanged);
			// 
			// pass
			// 
			this->pass->Location = System::Drawing::Point(377, 467);
			this->pass->Name = L"pass";
			this->pass->PasswordChar = '*';
			this->pass->Size = System::Drawing::Size(281, 36);
			this->pass->TabIndex = 5;
			// 
			// ch1
			// 
			this->ch1->AutoSize = true;
			this->ch1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ch1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->ch1->Location = System::Drawing::Point(377, 567);
			this->ch1->Name = L"ch1";
			this->ch1->Size = System::Drawing::Size(224, 34);
			this->ch1->TabIndex = 6;
			this->ch1->Text = L"I agree to the terms";
			this->ch1->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.03478F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(363, 646);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(171, 57);
			this->button1->TabIndex = 7;
			this->button1->Text = L"sign in";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &login::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.03478F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(554, 646);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(191, 57);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Sign up";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &login::button2_Click);
			// 
			// login
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(986, 741);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->ch1);
			this->Controls->Add(this->pass);
			this->Controls->Add(this->user);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.27826F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::White;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(6);
			this->MaximizeBox = false;
			this->Name = L"login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"football geeks";
			this->Load += gcnew System::EventHandler(this, &login::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		MyForm^ f2 = gcnew MyForm();
		signup^ f4 = gcnew signup();
	//	
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		bool check = userrr(user->Text, pass->Text);
		




		if (user->Text == "admin" && pass->Text == "admin" ) {
			//&& ch1->Checked == true
			this->Hide();
			f2->Show();
		}
		else if (ch1->Checked == false) MessageBox::Show("plz agree terms to continue!");
		else if(check){
		//	userForm^ uForm = gcnew userForm();
			
			userForm^ A = gcnew userForm(user->Text);
			A->Show();
			
		this->Hide();
			
		}
		else MessageBox::Show("The username or password you entered isn't connected to an account.");
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		f4->Show();
		
		//this->Hide();
	}
	};
}
