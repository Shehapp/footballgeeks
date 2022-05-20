#pragma once
#include"login.h"
#include"login.h"
#include <string>
#include<fstream>
#include<sstream>
#include<iomanip>
#include <msclr\marshal_cppstd.h>
//#include<bits/stdc++.h>

namespace Project9 {
	
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	string uname ;

	
	
	
	//int TeamNumber;
	/// <summary>
	struct users {

		string name;
		bool followedTeams[3];
		bool followedPlayers[33];
	}user;

	struct Players
	{

		string name;
		string goals,
			Assists,
			Yel,
			Red;
	};
	Players AllPlayers[33];

	struct Match {

		string t2;
		string Date,
			Time;

	};

	struct Teams
	{
		string name;
		Match  matches[4];
		Players player[11];

	}; Teams team3[3];

	/// Summary for userForm
	/// </summary>
	public ref class userForm : public System::Windows::Forms::Form
	{
	public:


		userForm(String^ e)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			uname = msclr::interop::marshal_as<std::string>(e);
			
			GetData();
			panel3->Hide();
			userData();
			All();
			SetFontAndColors();
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~userForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::DataGridView^  dataGridView3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Button^  fTb;
	private: System::Windows::Forms::DataGridView^  dataGridView1;




	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column9;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::DataGridView^  dataGridView4;





	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn9;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridView^  dataGridView5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn15;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  FTbtn;

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  STbtn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::Button^  TTbtn;

			


			 //Set Font For dataGridView
	private: void SetFontAndColors()
	{
		this->dataGridView1->Font = (gcnew System::Drawing::Font(L"Tekton Pro Ext", 12.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->dataGridView2->Font = (gcnew System::Drawing::Font(L"Tekton Pro Ext", 12.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->dataGridView3->Font = (gcnew System::Drawing::Font(L"Tekton Pro Ext", 12.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->dataGridView4->Font = (gcnew System::Drawing::Font(L"Tekton Pro Ext", 12.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->dataGridView5->Font = (gcnew System::Drawing::Font(L"Tekton Pro Ext", 12.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));

	}

	private:void followTeam(int n) {
		if (user.followedTeams[n - 1] == 1) {
			fTb->Text = "Follow";
			user.followedTeams[n - 1] = 0;
		}
		else {
			fTb->Text = "UnFollow";
			user.followedTeams[n - 1] = 1;
		}
	}
	private: void userData() {
		string s;
		fstream file;
		file.open("users.txt", ios::in | ios::out);
		for (; ;)
		{
			file >> s;
			if (s == uname) {
				user.name = s;

				for (int i = 0; i < 3; i++) {
					file >> user.followedTeams[i];

				}
				for (int i = 0; i < 33; i++) {
					file >> user.followedPlayers[i];
				}
				break;
			}
		}
		file.close();
	}




			 //import data from files
			 String^ F;
	
	
	private: void All() {
		int q = 0;

		for (int e = 0; e < 3; e++) {


			for (int z = 0; z < 11; z++) {

				AllPlayers[q].name = team3[e].player[z].name;
				AllPlayers[q].goals = team3[e].player[z].goals;
				AllPlayers[q].Assists = team3[e].player[z].Assists;
				AllPlayers[q].Yel = team3[e].player[z].Yel;
				AllPlayers[q].Red = team3[e].player[z].Red;
				q++;
			}

		}
	};


	private: void Add(int n) {

		switch (n)
		{
		case 1:

			dataGridView1->Rows->Clear();
			dataGridView2->Rows->Clear();

			for (int i = 0; i < 4; i++) {
				String^ a = gcnew String(team3[0].matches[i]->t2.data());
				String^ b = gcnew String(team3[0].matches[i]->Date.data());
				String^ c = gcnew String(team3[0].matches[i]->Time.data());
				String^ d = gcnew String(team3[0].name.data());
				dataGridView1->Rows->Add(d, a, b, c);
			}
			for (int i = 0; i < 11; i++) {
				String^ a = gcnew String(team3[0].player[i].name.data());
				String^ b = gcnew String(team3[0].player[i].goals.data());
				String^ c = gcnew String(team3[0].player[i].Assists.data());
				String^ d = gcnew String(team3[0].player[i].Yel.data());
				String^ e = gcnew String(team3[0].player[i].Red.data());

				dataGridView2->Rows->Add(a, b, c, d, e);
			}

			break;
		case 2:
			dataGridView1->Rows->Clear();
			dataGridView2->Rows->Clear();

			for (int i = 0; i < 4; i++) {
				String^ a = gcnew String(team3[1].matches[i].t2.data());
				String^ b = gcnew String(team3[1].matches[i].Date.data());
				String^ c = gcnew String(team3[1].matches[i].Time.data());
				String^ d = gcnew String(team3[1].name.data());
				dataGridView1->Rows->Add(d, a, b, c);
			}
			for (int i = 0; i < 11; i++) {
				String^ a = gcnew String(team3[1].player[i].name.data());
				String^ b = gcnew String(team3[1].player[i].goals.data());
				String^ c = gcnew String(team3[1].player[i].Assists.data());
				String^ d = gcnew String(team3[1].player[i].Yel.data());
				String^ e = gcnew String(team3[1].player[i].Red.data());

				dataGridView2->Rows->Add(a, b, c, d, e);
			}
			break;
		case 3:
			dataGridView1->Rows->Clear();
			dataGridView2->Rows->Clear();

			for (int i = 0; i < 4; i++) {
				String^ a = gcnew String(team3[2].matches[i].t2.data());
				String^ b = gcnew String(team3[2].matches[i].Date.data());
				String^ c = gcnew String(team3[2].matches[i].Time.data());
				String^ d = gcnew String(team3[2].name.data());
				dataGridView1->Rows->Add(d, a, b, c);
			}
			for (int i = 0; i < 11; i++) {
				String^ a = gcnew String(team3[2].player[i].name.data());
				String^ b = gcnew String(team3[2].player[i].goals.data());
				String^ c = gcnew String(team3[2].player[i].Assists.data());
				String^ d = gcnew String(team3[2].player[i].Yel.data());
				String^ e = gcnew String(team3[2].player[i].Red.data());

				dataGridView2->Rows->Add(a, b, c, d, e);
			}
			break;
		}


	}
	private: void FollowCkeck(int a) {

		if (user.followedTeams[a - 1] != 0) {
			fTb->Text = "UnFollow";

		}
		else
		{
			fTb->Text = "Follow";

		}

	}
















	protected:
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;

	protected:

	protected:



	protected:
	private: void GetData() {






		fstream file;
		file.open("teams.txt", ios::in | ios::out);
		for (int i = 0; i < 3; i++) {
			file >> team3[i].name;
			for (int j = 0; j < 11; j++) {
				file >> team3[i].player[j].name;
				file >> team3[i].player[j].goals;
				file >> team3[i].player[j].Assists;
				file >> team3[i].player[j].Yel;
				file >> team3[i].player[j].Red;
			}


			for (int k = 0; k < 4; k++) {
				file >> team3[i].matches[k].t2;
				file >> team3[i].matches[k].Date;
				file >> team3[i].matches[k].Time;
			}
		}

		file.close();
		String^F = gcnew String(team3[0].name.data());
		String^ S = gcnew String(team3[1].name.data());
		String^ T = gcnew String(team3[2].name.data());
		FTbtn->Text = F;
        STbtn->Text = S;
		TTbtn->Text = T;
	}

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
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->STbtn = (gcnew System::Windows::Forms::Button());
			this->TTbtn = (gcnew System::Windows::Forms::Button());
			this->FTbtn = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->fTb = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->flowLayoutPanel1->Controls->Add(this->button1);
			this->flowLayoutPanel1->Controls->Add(this->button3);
			this->flowLayoutPanel1->Controls->Add(this->button4);
			this->flowLayoutPanel1->Controls->Add(this->button5);
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(0);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(229, 901);
			this->flowLayoutPanel1->TabIndex = 3;
			this->flowLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &userForm::flowLayoutPanel1_Paint);
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(4, 4);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button1->Size = System::Drawing::Size(225, 81);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Home";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &userForm::button1_Click_3);
			// 
			// button3
			// 
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(4, 93);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(225, 85);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Follow       Unfollow";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &userForm::button3_Click);
			// 
			// button4
			// 
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(4, 186);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(225, 85);
			this->button4->TabIndex = 7;
			this->button4->Text = L"My   Matches";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &userForm::button4_Click);
			// 
			// button5
			// 
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(4, 279);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(225, 85);
			this->button5->TabIndex = 8;
			this->button5->Text = L"My       Players";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &userForm::button5_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->Controls->Add(this->dataGridView3);
			this->panel2->Location = System::Drawing::Point(265, 885);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(15, 12);
			this->panel2->TabIndex = 4;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4
			});
			this->dataGridView3->Location = System::Drawing::Point(75, 160);
			this->dataGridView3->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 49;
			this->dataGridView3->Size = System::Drawing::Size(1088, 415);
			this->dataGridView3->TabIndex = 6;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"First Team";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 150;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Second Team";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->Width = 150;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Date";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			this->dataGridViewTextBoxColumn3->Width = 150;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Time";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			this->dataGridViewTextBoxColumn4->Width = 150;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->STbtn);
			this->panel1->Controls->Add(this->TTbtn);
			this->panel1->Controls->Add(this->FTbtn);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Location = System::Drawing::Point(233, 4);
			this->panel1->Margin = System::Windows::Forms::Padding(0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1317, 759);
			this->panel1->TabIndex = 4;
			// 
			// STbtn
			// 
			this->STbtn->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->STbtn->FlatAppearance->BorderSize = 0;
			this->STbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->STbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->STbtn->ForeColor = System::Drawing::Color::White;
			this->STbtn->Location = System::Drawing::Point(517, 14);
			this->STbtn->Margin = System::Windows::Forms::Padding(4);
			this->STbtn->Name = L"STbtn";
			this->STbtn->Size = System::Drawing::Size(221, 68);
			this->STbtn->TabIndex = 7;
			this->STbtn->UseVisualStyleBackColor = false;
			this->STbtn->Click += gcnew System::EventHandler(this, &userForm::STbtn_Click);
			// 
			// TTbtn
			// 
			this->TTbtn->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->TTbtn->FlatAppearance->BorderSize = 0;
			this->TTbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->TTbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TTbtn->ForeColor = System::Drawing::Color::White;
			this->TTbtn->Location = System::Drawing::Point(787, 14);
			this->TTbtn->Margin = System::Windows::Forms::Padding(4);
			this->TTbtn->Name = L"TTbtn";
			this->TTbtn->Size = System::Drawing::Size(221, 68);
			this->TTbtn->TabIndex = 6;
			this->TTbtn->UseVisualStyleBackColor = false;
			this->TTbtn->Click += gcnew System::EventHandler(this, &userForm::TTbtn_Click);
			// 
			// FTbtn
			// 
			this->FTbtn->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->FTbtn->FlatAppearance->BorderSize = 0;
			this->FTbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FTbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FTbtn->ForeColor = System::Drawing::Color::White;
			this->FTbtn->Location = System::Drawing::Point(248, 14);
			this->FTbtn->Margin = System::Windows::Forms::Padding(4);
			this->FTbtn->Name = L"FTbtn";
			this->FTbtn->Size = System::Drawing::Size(221, 68);
			this->FTbtn->TabIndex = 5;
			this->FTbtn->UseVisualStyleBackColor = false;
			this->FTbtn->Click += gcnew System::EventHandler(this, &userForm::FTbtn_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->fTb);
			this->panel3->Controls->Add(this->dataGridView1);
			this->panel3->Controls->Add(this->dataGridView2);
			this->panel3->Location = System::Drawing::Point(4, 89);
			this->panel3->Margin = System::Windows::Forms::Padding(4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1267, 773);
			this->panel3->TabIndex = 8;
			// 
			// fTb
			// 
			this->fTb->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->fTb->FlatAppearance->BorderSize = 0;
			this->fTb->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->fTb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fTb->ForeColor = System::Drawing::Color::White;
			this->fTb->Location = System::Drawing::Point(117, 40);
			this->fTb->Margin = System::Windows::Forms::Padding(4);
			this->fTb->Name = L"fTb";
			this->fTb->Size = System::Drawing::Size(221, 68);
			this->fTb->TabIndex = 13;
			this->fTb->Text = L"Follow";
			this->fTb->UseVisualStyleBackColor = false;
			this->fTb->Click += gcnew System::EventHandler(this, &userForm::fTb_Click_1);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column4, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(117, 406);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 49;
			this->dataGridView1->Size = System::Drawing::Size(10, 10);
			this->dataGridView1->TabIndex = 11;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"First Team";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 150;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Second Team";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 150;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Time";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 150;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Date";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 150;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column5,
					this->Column6, this->Column7, this->Column8, this->Column9
			});
			this->dataGridView2->Location = System::Drawing::Point(117, 450);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 49;
			this->dataGridView2->Size = System::Drawing::Size(0, 0);
			this->dataGridView2->TabIndex = 12;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &userForm::dataGridView2_CellContentClick);
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Player";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 120;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Golas";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Width = 120;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Assists";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			this->Column7->Width = 120;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"YCards";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			this->Column8->Width = 120;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"RCards";
			this->Column9->MinimumWidth = 6;
			this->Column9->Name = L"Column9";
			this->Column9->ReadOnly = true;
			this->Column9->Width = 120;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Transparent;
			this->panel4->Controls->Add(this->label1);
			this->panel4->Controls->Add(this->textBox1);
			this->panel4->Controls->Add(this->dataGridView4);
			this->panel4->Controls->Add(this->button6);
			this->panel4->Controls->Add(this->button2);
			this->panel4->Location = System::Drawing::Point(635, 871);
			this->panel4->Margin = System::Windows::Forms::Padding(4);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(13, 15);
			this->panel4->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::MediumSpringGreen;
			this->label1->Location = System::Drawing::Point(364, 650);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(167, 31);
			this->label1->TabIndex = 15;
			this->label1->Text = L"ID of player :";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(551, 649);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(176, 38);
			this->textBox1->TabIndex = 14;
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column10,
					this->dataGridViewTextBoxColumn5, this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn8,
					this->dataGridViewTextBoxColumn9
			});
			this->dataGridView4->Location = System::Drawing::Point(128, 65);
			this->dataGridView4->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->RowHeadersWidth = 49;
			this->dataGridView4->Size = System::Drawing::Size(1088, 430);
			this->dataGridView4->TabIndex = 13;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"ID";
			this->Column10->MinimumWidth = 6;
			this->Column10->Name = L"Column10";
			this->Column10->ReadOnly = true;
			this->Column10->Width = 120;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Player";
			this->dataGridViewTextBoxColumn5->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			this->dataGridViewTextBoxColumn5->Width = 120;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"Golas";
			this->dataGridViewTextBoxColumn6->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->ReadOnly = true;
			this->dataGridViewTextBoxColumn6->Width = 120;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"Assists";
			this->dataGridViewTextBoxColumn7->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->ReadOnly = true;
			this->dataGridViewTextBoxColumn7->Width = 120;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"YCards";
			this->dataGridViewTextBoxColumn8->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->ReadOnly = true;
			this->dataGridViewTextBoxColumn8->Width = 120;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"RCards";
			this->dataGridViewTextBoxColumn9->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->ReadOnly = true;
			this->dataGridViewTextBoxColumn9->Width = 120;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(337, 697);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button6->Size = System::Drawing::Size(225, 81);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Follow";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &userForm::button6_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(720, 697);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button2->Size = System::Drawing::Size(225, 81);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Unfollow";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &userForm::button2_Click);
			// 
			// dataGridView5
			// 
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn11,
					this->dataGridViewTextBoxColumn12, this->dataGridViewTextBoxColumn13, this->dataGridViewTextBoxColumn14, this->dataGridViewTextBoxColumn15
			});
			this->dataGridView5->Location = System::Drawing::Point(128, 65);
			this->dataGridView5->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->RowHeadersWidth = 49;
			this->dataGridView5->Size = System::Drawing::Size(1088, 430);
			this->dataGridView5->TabIndex = 13;
			// 
			// dataGridViewTextBoxColumn11
			// 
			this->dataGridViewTextBoxColumn11->HeaderText = L"Player";
			this->dataGridViewTextBoxColumn11->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
			this->dataGridViewTextBoxColumn11->ReadOnly = true;
			this->dataGridViewTextBoxColumn11->Width = 120;
			// 
			// dataGridViewTextBoxColumn12
			// 
			this->dataGridViewTextBoxColumn12->HeaderText = L"Golas";
			this->dataGridViewTextBoxColumn12->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
			this->dataGridViewTextBoxColumn12->ReadOnly = true;
			this->dataGridViewTextBoxColumn12->Width = 120;
			// 
			// dataGridViewTextBoxColumn13
			// 
			this->dataGridViewTextBoxColumn13->HeaderText = L"Assists";
			this->dataGridViewTextBoxColumn13->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn13->Name = L"dataGridViewTextBoxColumn13";
			this->dataGridViewTextBoxColumn13->ReadOnly = true;
			this->dataGridViewTextBoxColumn13->Width = 120;
			// 
			// dataGridViewTextBoxColumn14
			// 
			this->dataGridViewTextBoxColumn14->HeaderText = L"YCards";
			this->dataGridViewTextBoxColumn14->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn14->Name = L"dataGridViewTextBoxColumn14";
			this->dataGridViewTextBoxColumn14->ReadOnly = true;
			this->dataGridViewTextBoxColumn14->Width = 120;
			// 
			// dataGridViewTextBoxColumn15
			// 
			this->dataGridViewTextBoxColumn15->HeaderText = L"RCards";
			this->dataGridViewTextBoxColumn15->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn15->Name = L"dataGridViewTextBoxColumn15";
			this->dataGridViewTextBoxColumn15->ReadOnly = true;
			this->dataGridViewTextBoxColumn15->Width = 120;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Transparent;
			this->panel5->Controls->Add(this->dataGridView5);
			this->panel5->Location = System::Drawing::Point(672, 842);
			this->panel5->Margin = System::Windows::Forms::Padding(4);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(47, 59);
			this->panel5->TabIndex = 6;
			// 
			// userForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1633, 716);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"userForm";
			this->Text = L"Football Geeks";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &userForm::userForm_FormClosing);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			this->panel5->ResumeLayout(false);
			this->ResumeLayout(false);

		}

#pragma endregion
		
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {



	}
	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void flowLayoutPanel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
	private: System::Void button1_Click_2(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void button1_Click_3(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("ehjrhf");
	

		panel1->Location = System::Drawing::Point(172, 0);
		panel1->Width = 1200;
		panel1->Height = 728;
		panel5->Width = 0;
		panel5->Height = 0;
		panel2->Width = 0;
		panel2->Height = 0;
		panel4->Width = 0;
		panel4->Height = 0;
		flowLayoutPanel1->Height = 728;


	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {

	}
			 int TeamNumber;
	private: System::Void FTbtn_Click(System::Object^  sender, System::EventArgs^  e) {
	
		TeamNumber = 1;
		Add(1);
		FollowCkeck(1);
		panel3->Show();
	}
	private: System::Void STbtn_Click(System::Object^  sender, System::EventArgs^  e) {
		Add(2);
		FollowCkeck(2);
		TeamNumber = 2;
		panel3->Show();
	}
	private: System::Void TTbtn_Click(System::Object^  sender, System::EventArgs^  e) {
		Add(3);
		FollowCkeck(3);
		TeamNumber = 3;
		panel3->Show();
	}
	private: System::Void fTb_Click(System::Object^  sender, System::EventArgs^  e) {
		followTeam(TeamNumber);


	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

		panel2->Location = System::Drawing::Point(172, 0);
		panel2->Width = 895;
		panel2->Height = 728;
		panel1->Width = 0;
		panel1->Height = 0;
		panel5->Width = 0;
		panel5->Height = 0;
		panel4->Width = 0;
		panel4->Height = 0;
		dataGridView3->Rows->Clear();
		for (int j = 0; j < 3; j++) {
			if (user.followedTeams[j] == 1) {



				for (int i = 0; i < 4; i++) {
					String^ a = gcnew String(team3[j].matches[i].t2.data());
					String^ b = gcnew String(team3[j].matches[i].Date.data());
					String^ c = gcnew String(team3[j].matches[i].Time.data());
					String^ d = gcnew String(team3[j].name.data());
					dataGridView3->Rows->Add(d, a, b, c);
				}
			}
		}
	}

	private: System::Void fTb_Click_1(System::Object^  sender, System::EventArgs^  e) {
		followTeam(TeamNumber);



	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

		panel4->Location = System::Drawing::Point(172, 0);
		panel4->Width = 895;
		panel4->Height = 1000;
		panel1->Width = 0;
		panel1->Height = 0;
		panel2->Width = 0;
		panel2->Height = 0;
		panel5->Width = 0;
		panel5->Height = 0;
		dataGridView4->Rows->Clear();

		for (int i = 0; i < 33; i++) {
			String^ a = gcnew String(AllPlayers[i].name.data());
			String^ b = gcnew String(AllPlayers[i].goals.data());
			String^ c = gcnew String(AllPlayers[i].Assists.data());
			String^ d = gcnew String(AllPlayers[i].Yel.data());
			String^ e = gcnew String(AllPlayers[i].Red.data());

			dataGridView4->Rows->Add((i + 1), a, b, c, d, e);
		}

	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		int ID = Convert::ToInt16(textBox1->Text);

		user.followedPlayers[ID - 1] = 1;
		textBox1->Clear();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		int ID = Convert::ToInt16(textBox1->Text);
		user.followedPlayers[ID - 1] = 0;
		textBox1->Clear();
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

		panel5->Location = System::Drawing::Point(172, 0);
		panel5->Width = 895;
		panel5->Height = 728;
		panel1->Width = 0;
		panel1->Height = 0;
		panel2->Width = 0;
		panel2->Height = 0;
		panel4->Width = 0;
		panel4->Height = 0;




		dataGridView5->Rows->Clear();
		for (int i = 0; i < 33; i++) {
			if (user.followedPlayers[i]) {
				String^ a = gcnew String(AllPlayers[i].name.data());
				String^ b = gcnew String(AllPlayers[i].goals.data());
				String^ c = gcnew String(AllPlayers[i].Assists.data());
				String^ d = gcnew String(AllPlayers[i].Yel.data());
				String^ e = gcnew String(AllPlayers[i].Red.data());

				dataGridView5->Rows->Add(a, b, c, d, e);

			}
		}
	}

	/*private: System::Void User_FormClosing_1(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
		
	}*/
			 
	private: System::Void userForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {

		//Save data Before Closing
		fstream file1;
		file1.open("temp.txt",ios::app);
		fstream file;
		file.open("users.txt", ios::in | ios::out);
		string u;
		while (file >> u) {
			if(u==uname){
				file1 <<endl<< uname<<" "<<user.followedTeams[0] <<" " << user.followedTeams[1] << " " << user.followedTeams[2] << " ";
				
				for (int i = 0; i < 33; i++) {
					file1 << user.followedPlayers[i]<<" ";
				}
				file1 << endl;
				for (int j = 0; j < 36; j++) {
					file >> u;
				}
			}
			else {
				if (u != "0" &&u != "1") {
					file1 << endl << u<<" ";
				}
				else if(u == "0" ||u == "1") {
file1 << u << " ";
				}
				
			}

		}
		file.close();
		file1.close();
		remove("users.txt");
		rename("temp.txt", "users.txt");


		Application::Exit();
	}
private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
