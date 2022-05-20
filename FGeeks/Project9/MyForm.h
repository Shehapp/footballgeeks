#pragma once
#include<string>
#include<iostream>
#include<string>
#include "login.h"
#include<fstream>
#include <msclr\marshal_cppstd.h>




namespace Project4 {



	


	struct players
	{

		std::string name;//u

		std::string goals, Assists, Yel, Red;//u


	};

	struct match {

		std::string t2;
		//htime = as  08:00
		//mtime = tue,25 Abr
		std::string htime, mtime;

	};
	struct teams
	{
		std::string name;
		//upcomming
	   //kosom tarek
		match  matches[4];
		players player[11];//u




	};
	//past matches
	struct past {
		//r=result
		std::string m1, m2, r1, r2;

	};
	past team1[3];
	teams team[3];

	



	using namespace System;

	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	
	/*struct players {

		std::string name;
		float rate;
		int goals;
		int KG, Assists, Yel, Red;




	};
	struct teams {
		std::string name;
		std::string results[10];
		players player[13];
		int d;



	};
	*/

	//teams t;

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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox2;


	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Label^ label9;


	private: System::Windows::Forms::Button^ addm;
	private: System::Windows::Forms::Button^ addt;
	private: System::Windows::Forms::Button^ addp;



	private: System::Windows::Forms::Button^ editt;
	private: System::Windows::Forms::Button^ editp;


	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::Panel^ oo;

	private: System::Windows::Forms::Panel^ edit_players;
	private: System::Windows::Forms::Panel^ add_players;
	private: System::Windows::Forms::Panel^ edit_team;
	private: System::Windows::Forms::Panel^ add_team;
	private: System::Windows::Forms::Panel^ edit_re;
	private: System::Windows::Forms::Panel^ pan_match;
	private: System::Windows::Forms::Panel^ home;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox6;

	private: System::Windows::Forms::Label^ label13;

	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::PictureBox^ pictureBox13;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox25;
	private: System::Windows::Forms::TextBox^ textBox26;
	private: System::Windows::Forms::TextBox^ textBox27;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox28;
	private: System::Windows::Forms::TextBox^ textBox21;
	private: System::Windows::Forms::TextBox^ textBox22;
	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox24;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::PictureBox^ pictureBox14;
	private: System::Windows::Forms::TextBox^ textBox31;
	private: System::Windows::Forms::TextBox^ textBox30;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::TextBox^ textBox29;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::PictureBox^ pictureBox15;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::TextBox^ textBox32;
	private: System::Windows::Forms::TextBox^ textBox33;
	private: System::Windows::Forms::TextBox^ textBox34;
	private: System::Windows::Forms::TextBox^ textBox35;
	private: System::Windows::Forms::TextBox^ textBox36;
	private: System::Windows::Forms::TextBox^ textBox37;
	private: System::Windows::Forms::TextBox^ textBox38;
	private: System::Windows::Forms::TextBox^ textBox39;
	private: System::Windows::Forms::TextBox^ textBox40;
	private: System::Windows::Forms::TextBox^ textBox41;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::TextBox^ textBox42;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::PictureBox^ pictureBox16;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button24;


	private: System::Windows::Forms::Panel^ s1;


	private: System::Windows::Forms::Panel^ up1;




	private: System::Windows::Forms::TextBox^ textBox47;
	private: System::Windows::Forms::TextBox^ textBox44;
	private: System::Windows::Forms::TextBox^ textBox43;
	private: System::Windows::Forms::TextBox^ textBox59;
	private: System::Windows::Forms::TextBox^ textBox57;
	private: System::Windows::Forms::TextBox^ textBox58;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::TextBox^ textBox45;
	private: System::Windows::Forms::TextBox^ textBox46;
	private: System::Windows::Forms::TextBox^ textBox49;
	private: System::Windows::Forms::TextBox^ textBox50;
	private: System::Windows::Forms::TextBox^ textBox53;
	private: System::Windows::Forms::TextBox^ textBox54;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::PictureBox^ pictureBox17;

	private: void save()
	{
		ofstream outfile;
		outfile.open("teams.txt");

		for (int i = 0; i < 3; i++)
		{
			outfile << team[i].name << endl;
			for (int j = 0; j < 11; j++)
			{
				outfile << team[i].player[j].name << " ";
				outfile << team[i].player[j].goals << " ";
				outfile << team[i].player[j].Assists << " ";
				outfile << team[i].player[j].Yel << " ";
				outfile << team[i].player[j].Red << endl;


			}
			//here
			for (int k = 0; k < 4; k++)
			{
				outfile << team[i].matches[k].t2 << endl;
				outfile << team[i].matches[k].htime << endl;
				outfile << team[i].matches[k].mtime << endl;


			}




		}
		for (int i = 0; i < 3; i++)
		{
			outfile << team1[i].m1 << endl;
			outfile << team1[i].m2 << endl;
			outfile << team1[i].r1 << endl;
			outfile << team1[i].r2 << endl;
		}

		outfile.close();
	}






       //-------------------------------------
	  private: void editdata(){ 
	      
		  for (int i = 0; i < 3; i++)
		  {
			  //team[i].name = "-";
			  for (int j = 0; j < 11; j++)
			  {
				  team[i].player[j].name = "-";
				  team[i].player[j].goals = "-";
				  team[i].player[j].Assists = "-";
				  team[i].player[j].Yel = "-";
				  team[i].player[j].Red = "-";
			  }

			  for (int k = 0; k < 4; k++)
			  {
				  team[i].matches[k].t2 = "-";
				  team[i].matches[k].htime = "-";   
				  team[i].matches[k].mtime = "-";


			  }


		  }
		  for (int i = 0; i < 3; i++)
		  {
			  team1[i].m1 = "-";
			  team1[i].m2 = "-";
			  team1[i].r1 = "-";
			  team1[i].r2 = "-";
		  }



		  ifstream outfile;
		  outfile.open("teams.txt");


		  for (int i = 0; i < 3; i++)
		  {
			  outfile >> team[i].name;
			  for (int j = 0; j < 11; j++)
			  {
				  outfile >> team[i].player[j].name;
				  outfile >> team[i].player[j].goals;
				  outfile >> team[i].player[j].Assists;
				  outfile >> team[i].player[j].Yel;
				  outfile >> team[i].player[j].Red;


			  }
			  //here
			  for (int k = 0; k < 4; k++)
			  {
				  outfile >> team[i].matches[k].t2;
				  outfile >> team[i].matches[k].htime;
				  outfile >> team[i].matches[k].mtime;


			  }




		  }
		  for (int i = 0; i < 3; i++)
		  {
			  outfile >> team1[i].m1;
			  outfile >> team1[i].m2;
			  outfile >> team1[i].r1;
			  outfile >> team1[i].r2;
		  }


		  outfile.close();

	  }



     //----------------------------------------------
	  private : void newdata(){

		  for (int i = 0; i < 3; i++)
		  {
			  //team[i].name = "-";
			  for (int j = 0; j < 11; j++)
			  {
				  team[i].player[j].name = "-";
				  team[i].player[j].goals = "-";
				  team[i].player[j].Assists = "-";
				  team[i].player[j].Yel = "-";
				  team[i].player[j].Red = "-";
			  }

			  for (int k = 0; k < 4; k++)
			  {
				  team[i].matches[k].t2 = "-";
				  team[i].matches[k].htime = "-";      team[i].matches[k].mtime = "-";


			  }


		  }
		  for (int i = 0; i < 3; i++)
		  {
			  team1[i].m1 = "-";
			  team1[i].m2 = "-";
			  team1[i].r1 = "-";
			  team1[i].r2 = "-";
		  }



	  }
	







































	private: System::Windows::Forms::TextBox^ textBox87;
	private: System::Windows::Forms::TextBox^ textBox88;
	private: System::Windows::Forms::TextBox^ textBox89;
	private: System::Windows::Forms::TextBox^ textBox90;








	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::ComboBox^ comboBox3;







	private: System::Windows::Forms::TextBox^ textBox96;
	private: System::Windows::Forms::Button^ button38;
	private: System::Windows::Forms::PictureBox^ pictureBox20;



	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button41;
	private: System::Windows::Forms::Button^ button40;
	private: System::Windows::Forms::Button^ button39;
	private: System::Windows::Forms::Button^ button37;
	private: System::Windows::Forms::Button^ button36;
	private: System::Windows::Forms::Panel^ panel37;
	private: System::Windows::Forms::TextBox^ textBox254;
	private: System::Windows::Forms::TextBox^ textBox255;
	private: System::Windows::Forms::TextBox^ textBox256;
	private: System::Windows::Forms::TextBox^ textBox257;
	private: System::Windows::Forms::TextBox^ textBox258;
	private: System::Windows::Forms::Panel^ panel30;
	private: System::Windows::Forms::Panel^ panel31;
	private: System::Windows::Forms::Panel^ panel32;
	private: System::Windows::Forms::Panel^ panel33;
	private: System::Windows::Forms::Panel^ panel34;
	private: System::Windows::Forms::Panel^ panel35;
	private: System::Windows::Forms::TextBox^ textBox219;
	private: System::Windows::Forms::TextBox^ textBox220;
	private: System::Windows::Forms::TextBox^ textBox221;
	private: System::Windows::Forms::TextBox^ textBox222;
	private: System::Windows::Forms::TextBox^ textBox223;
	private: System::Windows::Forms::TextBox^ textBox224;
	private: System::Windows::Forms::TextBox^ textBox225;
	private: System::Windows::Forms::TextBox^ textBox226;
	private: System::Windows::Forms::TextBox^ textBox227;
	private: System::Windows::Forms::TextBox^ textBox228;
	private: System::Windows::Forms::Panel^ panel36;
	private: System::Windows::Forms::TextBox^ textBox229;
	private: System::Windows::Forms::TextBox^ textBox230;
	private: System::Windows::Forms::TextBox^ textBox231;
	private: System::Windows::Forms::TextBox^ textBox232;
	private: System::Windows::Forms::TextBox^ textBox233;
	private: System::Windows::Forms::TextBox^ textBox234;
	private: System::Windows::Forms::TextBox^ textBox235;
	private: System::Windows::Forms::TextBox^ textBox236;
	private: System::Windows::Forms::TextBox^ textBox237;
	private: System::Windows::Forms::TextBox^ textBox238;
	private: System::Windows::Forms::TextBox^ textBox239;
	private: System::Windows::Forms::TextBox^ textBox240;
	private: System::Windows::Forms::TextBox^ textBox241;
	private: System::Windows::Forms::TextBox^ textBox242;
	private: System::Windows::Forms::TextBox^ textBox243;
	private: System::Windows::Forms::TextBox^ textBox244;
	private: System::Windows::Forms::TextBox^ textBox245;
	private: System::Windows::Forms::TextBox^ textBox246;
	private: System::Windows::Forms::TextBox^ textBox247;
	private: System::Windows::Forms::TextBox^ textBox248;
	private: System::Windows::Forms::TextBox^ textBox249;
	private: System::Windows::Forms::TextBox^ textBox250;
	private: System::Windows::Forms::TextBox^ textBox251;
	private: System::Windows::Forms::TextBox^ textBox252;
	private: System::Windows::Forms::TextBox^ textBox253;
	private: System::Windows::Forms::Panel^ panel29;
	private: System::Windows::Forms::TextBox^ textBox214;
	private: System::Windows::Forms::TextBox^ textBox215;
	private: System::Windows::Forms::TextBox^ textBox216;
	private: System::Windows::Forms::TextBox^ textBox217;
	private: System::Windows::Forms::TextBox^ textBox218;
	private: System::Windows::Forms::Panel^ panel22;
	private: System::Windows::Forms::Panel^ panel23;
	private: System::Windows::Forms::Panel^ panel24;
	private: System::Windows::Forms::Panel^ panel25;
	private: System::Windows::Forms::Panel^ panel26;
	private: System::Windows::Forms::Panel^ panel27;
	private: System::Windows::Forms::TextBox^ textBox179;
	private: System::Windows::Forms::TextBox^ textBox180;
	private: System::Windows::Forms::TextBox^ textBox181;
	private: System::Windows::Forms::TextBox^ textBox182;
	private: System::Windows::Forms::TextBox^ textBox183;
	private: System::Windows::Forms::TextBox^ textBox184;
	private: System::Windows::Forms::TextBox^ textBox185;
	private: System::Windows::Forms::TextBox^ textBox186;
	private: System::Windows::Forms::TextBox^ textBox187;
	private: System::Windows::Forms::TextBox^ textBox188;
	private: System::Windows::Forms::Panel^ panel28;
	private: System::Windows::Forms::TextBox^ textBox189;
	private: System::Windows::Forms::TextBox^ textBox190;
	private: System::Windows::Forms::TextBox^ textBox191;
	private: System::Windows::Forms::TextBox^ textBox192;
	private: System::Windows::Forms::TextBox^ textBox193;
	private: System::Windows::Forms::TextBox^ textBox194;
	private: System::Windows::Forms::TextBox^ textBox195;
	private: System::Windows::Forms::TextBox^ textBox196;
	private: System::Windows::Forms::TextBox^ textBox197;
	private: System::Windows::Forms::TextBox^ textBox198;
	private: System::Windows::Forms::TextBox^ textBox199;
	private: System::Windows::Forms::TextBox^ textBox200;
	private: System::Windows::Forms::TextBox^ textBox201;
	private: System::Windows::Forms::TextBox^ textBox202;
	private: System::Windows::Forms::TextBox^ textBox203;
	private: System::Windows::Forms::TextBox^ textBox204;
	private: System::Windows::Forms::TextBox^ textBox205;
	private: System::Windows::Forms::TextBox^ textBox206;
	private: System::Windows::Forms::TextBox^ textBox207;
	private: System::Windows::Forms::TextBox^ textBox208;
	private: System::Windows::Forms::TextBox^ textBox209;
	private: System::Windows::Forms::TextBox^ textBox210;
	private: System::Windows::Forms::TextBox^ textBox211;
	private: System::Windows::Forms::TextBox^ textBox212;
	private: System::Windows::Forms::TextBox^ textBox213;
	private: System::Windows::Forms::Panel^ panel21;
	private: System::Windows::Forms::TextBox^ textBox174;
	private: System::Windows::Forms::TextBox^ textBox175;
	private: System::Windows::Forms::TextBox^ textBox176;
	private: System::Windows::Forms::TextBox^ textBox177;
	private: System::Windows::Forms::TextBox^ textBox178;
	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::Panel^ panel15;
	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::Panel^ panel17;
	private: System::Windows::Forms::Panel^ panel18;
	private: System::Windows::Forms::Panel^ panel19;
	private: System::Windows::Forms::TextBox^ textBox149;
	private: System::Windows::Forms::TextBox^ textBox150;
	private: System::Windows::Forms::TextBox^ textBox151;
	private: System::Windows::Forms::TextBox^ textBox152;
	private: System::Windows::Forms::TextBox^ textBox153;
	private: System::Windows::Forms::TextBox^ textBox154;
	private: System::Windows::Forms::TextBox^ textBox155;
	private: System::Windows::Forms::TextBox^ textBox156;
	private: System::Windows::Forms::TextBox^ textBox157;
	private: System::Windows::Forms::TextBox^ textBox158;
	private: System::Windows::Forms::Panel^ panel20;
	private: System::Windows::Forms::TextBox^ textBox159;
	private: System::Windows::Forms::TextBox^ textBox160;
	private: System::Windows::Forms::TextBox^ textBox161;
	private: System::Windows::Forms::TextBox^ textBox162;
	private: System::Windows::Forms::TextBox^ textBox163;
	private: System::Windows::Forms::TextBox^ textBox164;
	private: System::Windows::Forms::TextBox^ textBox165;
	private: System::Windows::Forms::TextBox^ textBox166;
	private: System::Windows::Forms::TextBox^ textBox167;
	private: System::Windows::Forms::TextBox^ textBox168;
	private: System::Windows::Forms::TextBox^ textBox169;
	private: System::Windows::Forms::TextBox^ textBox170;
	private: System::Windows::Forms::TextBox^ textBox171;
	private: System::Windows::Forms::TextBox^ textBox172;
	private: System::Windows::Forms::TextBox^ textBox173;
	private: System::Windows::Forms::TextBox^ textBox139;
	private: System::Windows::Forms::TextBox^ textBox140;
	private: System::Windows::Forms::TextBox^ textBox141;
	private: System::Windows::Forms::TextBox^ textBox142;
	private: System::Windows::Forms::TextBox^ textBox143;
	private: System::Windows::Forms::TextBox^ textBox144;
	private: System::Windows::Forms::TextBox^ textBox145;
	private: System::Windows::Forms::TextBox^ textBox146;
	private: System::Windows::Forms::TextBox^ textBox147;
	private: System::Windows::Forms::TextBox^ textBox148;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::TextBox^ textBox129;
	private: System::Windows::Forms::TextBox^ textBox130;
	private: System::Windows::Forms::TextBox^ textBox131;
	private: System::Windows::Forms::TextBox^ textBox132;
	private: System::Windows::Forms::TextBox^ textBox133;
	private: System::Windows::Forms::TextBox^ textBox134;
	private: System::Windows::Forms::TextBox^ textBox135;
	private: System::Windows::Forms::TextBox^ textBox136;
	private: System::Windows::Forms::TextBox^ textBox137;
	private: System::Windows::Forms::TextBox^ textBox138;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::TextBox^ textBox119;
	private: System::Windows::Forms::TextBox^ textBox120;
	private: System::Windows::Forms::TextBox^ textBox121;
	private: System::Windows::Forms::TextBox^ textBox122;
	private: System::Windows::Forms::TextBox^ textBox123;
	private: System::Windows::Forms::TextBox^ textBox124;
	private: System::Windows::Forms::TextBox^ textBox125;
	private: System::Windows::Forms::TextBox^ textBox126;
	private: System::Windows::Forms::TextBox^ textBox127;
	private: System::Windows::Forms::TextBox^ textBox128;
	private: System::Windows::Forms::TextBox^ textBox114;
	private: System::Windows::Forms::TextBox^ textBox115;
	private: System::Windows::Forms::TextBox^ textBox116;
	private: System::Windows::Forms::TextBox^ textBox117;
	private: System::Windows::Forms::TextBox^ textBox118;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::TextBox^ textBox109;
	private: System::Windows::Forms::TextBox^ textBox110;
	private: System::Windows::Forms::TextBox^ textBox111;
	private: System::Windows::Forms::TextBox^ textBox112;
	private: System::Windows::Forms::TextBox^ textBox113;
	private: System::Windows::Forms::TextBox^ textBox104;
	private: System::Windows::Forms::TextBox^ textBox105;
	private: System::Windows::Forms::TextBox^ textBox106;
	private: System::Windows::Forms::TextBox^ textBox107;
	private: System::Windows::Forms::TextBox^ textBox108;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::TextBox^ textBox99;
	private: System::Windows::Forms::TextBox^ textBox100;
	private: System::Windows::Forms::TextBox^ textBox101;
	private: System::Windows::Forms::TextBox^ textBox102;
	private: System::Windows::Forms::TextBox^ textBox103;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ textBox93;
	private: System::Windows::Forms::TextBox^ textBox94;
	private: System::Windows::Forms::TextBox^ textBox95;
	private: System::Windows::Forms::TextBox^ textBox97;
	private: System::Windows::Forms::TextBox^ textBox98;
	private: System::Windows::Forms::TextBox^ textBox92;
	private: System::Windows::Forms::TextBox^ textBox91;
	private: System::Windows::Forms::TextBox^ textBox8;









































































































































































































































































































































































































































	private: System::Windows::Forms::Button^ button54;




	private: System::Windows::Forms::Button^ button57;
	private: System::Windows::Forms::Panel^ panel38;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::PictureBox^ pictureBox18;
	private: System::Windows::Forms::Panel^ panel39;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button42;
	private: System::Windows::Forms::Button^ button43;
	private: System::Windows::Forms::Button^ button44;
































	private:
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->addm = (gcnew System::Windows::Forms::Button());
			this->addt = (gcnew System::Windows::Forms::Button());
			this->addp = (gcnew System::Windows::Forms::Button());
			this->editt = (gcnew System::Windows::Forms::Button());
			this->editp = (gcnew System::Windows::Forms::Button());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->oo = (gcnew System::Windows::Forms::Panel());
			this->panel39 = (gcnew System::Windows::Forms::Panel());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->panel38 = (gcnew System::Windows::Forms::Panel());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->s1 = (gcnew System::Windows::Forms::Panel());
			this->button54 = (gcnew System::Windows::Forms::Button());
			this->panel37 = (gcnew System::Windows::Forms::Panel());
			this->textBox254 = (gcnew System::Windows::Forms::TextBox());
			this->textBox255 = (gcnew System::Windows::Forms::TextBox());
			this->textBox256 = (gcnew System::Windows::Forms::TextBox());
			this->textBox257 = (gcnew System::Windows::Forms::TextBox());
			this->textBox258 = (gcnew System::Windows::Forms::TextBox());
			this->panel30 = (gcnew System::Windows::Forms::Panel());
			this->panel31 = (gcnew System::Windows::Forms::Panel());
			this->panel32 = (gcnew System::Windows::Forms::Panel());
			this->panel33 = (gcnew System::Windows::Forms::Panel());
			this->panel34 = (gcnew System::Windows::Forms::Panel());
			this->panel35 = (gcnew System::Windows::Forms::Panel());
			this->textBox219 = (gcnew System::Windows::Forms::TextBox());
			this->textBox220 = (gcnew System::Windows::Forms::TextBox());
			this->textBox221 = (gcnew System::Windows::Forms::TextBox());
			this->textBox222 = (gcnew System::Windows::Forms::TextBox());
			this->textBox223 = (gcnew System::Windows::Forms::TextBox());
			this->textBox224 = (gcnew System::Windows::Forms::TextBox());
			this->textBox225 = (gcnew System::Windows::Forms::TextBox());
			this->textBox226 = (gcnew System::Windows::Forms::TextBox());
			this->textBox227 = (gcnew System::Windows::Forms::TextBox());
			this->textBox228 = (gcnew System::Windows::Forms::TextBox());
			this->panel36 = (gcnew System::Windows::Forms::Panel());
			this->textBox229 = (gcnew System::Windows::Forms::TextBox());
			this->textBox230 = (gcnew System::Windows::Forms::TextBox());
			this->textBox231 = (gcnew System::Windows::Forms::TextBox());
			this->textBox232 = (gcnew System::Windows::Forms::TextBox());
			this->textBox233 = (gcnew System::Windows::Forms::TextBox());
			this->textBox234 = (gcnew System::Windows::Forms::TextBox());
			this->textBox235 = (gcnew System::Windows::Forms::TextBox());
			this->textBox236 = (gcnew System::Windows::Forms::TextBox());
			this->textBox237 = (gcnew System::Windows::Forms::TextBox());
			this->textBox238 = (gcnew System::Windows::Forms::TextBox());
			this->textBox239 = (gcnew System::Windows::Forms::TextBox());
			this->textBox240 = (gcnew System::Windows::Forms::TextBox());
			this->textBox241 = (gcnew System::Windows::Forms::TextBox());
			this->textBox242 = (gcnew System::Windows::Forms::TextBox());
			this->textBox243 = (gcnew System::Windows::Forms::TextBox());
			this->textBox244 = (gcnew System::Windows::Forms::TextBox());
			this->textBox245 = (gcnew System::Windows::Forms::TextBox());
			this->textBox246 = (gcnew System::Windows::Forms::TextBox());
			this->textBox247 = (gcnew System::Windows::Forms::TextBox());
			this->textBox248 = (gcnew System::Windows::Forms::TextBox());
			this->textBox249 = (gcnew System::Windows::Forms::TextBox());
			this->textBox250 = (gcnew System::Windows::Forms::TextBox());
			this->textBox251 = (gcnew System::Windows::Forms::TextBox());
			this->textBox252 = (gcnew System::Windows::Forms::TextBox());
			this->textBox253 = (gcnew System::Windows::Forms::TextBox());
			this->panel29 = (gcnew System::Windows::Forms::Panel());
			this->textBox214 = (gcnew System::Windows::Forms::TextBox());
			this->textBox215 = (gcnew System::Windows::Forms::TextBox());
			this->textBox216 = (gcnew System::Windows::Forms::TextBox());
			this->textBox217 = (gcnew System::Windows::Forms::TextBox());
			this->textBox218 = (gcnew System::Windows::Forms::TextBox());
			this->panel22 = (gcnew System::Windows::Forms::Panel());
			this->panel23 = (gcnew System::Windows::Forms::Panel());
			this->panel24 = (gcnew System::Windows::Forms::Panel());
			this->panel25 = (gcnew System::Windows::Forms::Panel());
			this->panel26 = (gcnew System::Windows::Forms::Panel());
			this->panel27 = (gcnew System::Windows::Forms::Panel());
			this->textBox179 = (gcnew System::Windows::Forms::TextBox());
			this->textBox180 = (gcnew System::Windows::Forms::TextBox());
			this->textBox181 = (gcnew System::Windows::Forms::TextBox());
			this->textBox182 = (gcnew System::Windows::Forms::TextBox());
			this->textBox183 = (gcnew System::Windows::Forms::TextBox());
			this->textBox184 = (gcnew System::Windows::Forms::TextBox());
			this->textBox185 = (gcnew System::Windows::Forms::TextBox());
			this->textBox186 = (gcnew System::Windows::Forms::TextBox());
			this->textBox187 = (gcnew System::Windows::Forms::TextBox());
			this->textBox188 = (gcnew System::Windows::Forms::TextBox());
			this->panel28 = (gcnew System::Windows::Forms::Panel());
			this->textBox189 = (gcnew System::Windows::Forms::TextBox());
			this->textBox190 = (gcnew System::Windows::Forms::TextBox());
			this->textBox191 = (gcnew System::Windows::Forms::TextBox());
			this->textBox192 = (gcnew System::Windows::Forms::TextBox());
			this->textBox193 = (gcnew System::Windows::Forms::TextBox());
			this->textBox194 = (gcnew System::Windows::Forms::TextBox());
			this->textBox195 = (gcnew System::Windows::Forms::TextBox());
			this->textBox196 = (gcnew System::Windows::Forms::TextBox());
			this->textBox197 = (gcnew System::Windows::Forms::TextBox());
			this->textBox198 = (gcnew System::Windows::Forms::TextBox());
			this->textBox199 = (gcnew System::Windows::Forms::TextBox());
			this->textBox200 = (gcnew System::Windows::Forms::TextBox());
			this->textBox201 = (gcnew System::Windows::Forms::TextBox());
			this->textBox202 = (gcnew System::Windows::Forms::TextBox());
			this->textBox203 = (gcnew System::Windows::Forms::TextBox());
			this->textBox204 = (gcnew System::Windows::Forms::TextBox());
			this->textBox205 = (gcnew System::Windows::Forms::TextBox());
			this->textBox206 = (gcnew System::Windows::Forms::TextBox());
			this->textBox207 = (gcnew System::Windows::Forms::TextBox());
			this->textBox208 = (gcnew System::Windows::Forms::TextBox());
			this->textBox209 = (gcnew System::Windows::Forms::TextBox());
			this->textBox210 = (gcnew System::Windows::Forms::TextBox());
			this->textBox211 = (gcnew System::Windows::Forms::TextBox());
			this->textBox212 = (gcnew System::Windows::Forms::TextBox());
			this->textBox213 = (gcnew System::Windows::Forms::TextBox());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->textBox174 = (gcnew System::Windows::Forms::TextBox());
			this->textBox175 = (gcnew System::Windows::Forms::TextBox());
			this->textBox176 = (gcnew System::Windows::Forms::TextBox());
			this->textBox177 = (gcnew System::Windows::Forms::TextBox());
			this->textBox178 = (gcnew System::Windows::Forms::TextBox());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->textBox149 = (gcnew System::Windows::Forms::TextBox());
			this->textBox150 = (gcnew System::Windows::Forms::TextBox());
			this->textBox151 = (gcnew System::Windows::Forms::TextBox());
			this->textBox152 = (gcnew System::Windows::Forms::TextBox());
			this->textBox153 = (gcnew System::Windows::Forms::TextBox());
			this->textBox154 = (gcnew System::Windows::Forms::TextBox());
			this->textBox155 = (gcnew System::Windows::Forms::TextBox());
			this->textBox156 = (gcnew System::Windows::Forms::TextBox());
			this->textBox157 = (gcnew System::Windows::Forms::TextBox());
			this->textBox158 = (gcnew System::Windows::Forms::TextBox());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->textBox159 = (gcnew System::Windows::Forms::TextBox());
			this->textBox160 = (gcnew System::Windows::Forms::TextBox());
			this->textBox161 = (gcnew System::Windows::Forms::TextBox());
			this->textBox162 = (gcnew System::Windows::Forms::TextBox());
			this->textBox163 = (gcnew System::Windows::Forms::TextBox());
			this->textBox164 = (gcnew System::Windows::Forms::TextBox());
			this->textBox165 = (gcnew System::Windows::Forms::TextBox());
			this->textBox166 = (gcnew System::Windows::Forms::TextBox());
			this->textBox167 = (gcnew System::Windows::Forms::TextBox());
			this->textBox168 = (gcnew System::Windows::Forms::TextBox());
			this->textBox169 = (gcnew System::Windows::Forms::TextBox());
			this->textBox170 = (gcnew System::Windows::Forms::TextBox());
			this->textBox171 = (gcnew System::Windows::Forms::TextBox());
			this->textBox172 = (gcnew System::Windows::Forms::TextBox());
			this->textBox173 = (gcnew System::Windows::Forms::TextBox());
			this->textBox139 = (gcnew System::Windows::Forms::TextBox());
			this->textBox140 = (gcnew System::Windows::Forms::TextBox());
			this->textBox141 = (gcnew System::Windows::Forms::TextBox());
			this->textBox142 = (gcnew System::Windows::Forms::TextBox());
			this->textBox143 = (gcnew System::Windows::Forms::TextBox());
			this->textBox144 = (gcnew System::Windows::Forms::TextBox());
			this->textBox145 = (gcnew System::Windows::Forms::TextBox());
			this->textBox146 = (gcnew System::Windows::Forms::TextBox());
			this->textBox147 = (gcnew System::Windows::Forms::TextBox());
			this->textBox148 = (gcnew System::Windows::Forms::TextBox());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->textBox129 = (gcnew System::Windows::Forms::TextBox());
			this->textBox130 = (gcnew System::Windows::Forms::TextBox());
			this->textBox131 = (gcnew System::Windows::Forms::TextBox());
			this->textBox132 = (gcnew System::Windows::Forms::TextBox());
			this->textBox133 = (gcnew System::Windows::Forms::TextBox());
			this->textBox134 = (gcnew System::Windows::Forms::TextBox());
			this->textBox135 = (gcnew System::Windows::Forms::TextBox());
			this->textBox136 = (gcnew System::Windows::Forms::TextBox());
			this->textBox137 = (gcnew System::Windows::Forms::TextBox());
			this->textBox138 = (gcnew System::Windows::Forms::TextBox());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->textBox119 = (gcnew System::Windows::Forms::TextBox());
			this->textBox120 = (gcnew System::Windows::Forms::TextBox());
			this->textBox121 = (gcnew System::Windows::Forms::TextBox());
			this->textBox122 = (gcnew System::Windows::Forms::TextBox());
			this->textBox123 = (gcnew System::Windows::Forms::TextBox());
			this->textBox124 = (gcnew System::Windows::Forms::TextBox());
			this->textBox125 = (gcnew System::Windows::Forms::TextBox());
			this->textBox126 = (gcnew System::Windows::Forms::TextBox());
			this->textBox127 = (gcnew System::Windows::Forms::TextBox());
			this->textBox128 = (gcnew System::Windows::Forms::TextBox());
			this->textBox114 = (gcnew System::Windows::Forms::TextBox());
			this->textBox115 = (gcnew System::Windows::Forms::TextBox());
			this->textBox116 = (gcnew System::Windows::Forms::TextBox());
			this->textBox117 = (gcnew System::Windows::Forms::TextBox());
			this->textBox118 = (gcnew System::Windows::Forms::TextBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->textBox109 = (gcnew System::Windows::Forms::TextBox());
			this->textBox110 = (gcnew System::Windows::Forms::TextBox());
			this->textBox111 = (gcnew System::Windows::Forms::TextBox());
			this->textBox112 = (gcnew System::Windows::Forms::TextBox());
			this->textBox113 = (gcnew System::Windows::Forms::TextBox());
			this->textBox104 = (gcnew System::Windows::Forms::TextBox());
			this->textBox105 = (gcnew System::Windows::Forms::TextBox());
			this->textBox106 = (gcnew System::Windows::Forms::TextBox());
			this->textBox107 = (gcnew System::Windows::Forms::TextBox());
			this->textBox108 = (gcnew System::Windows::Forms::TextBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->textBox99 = (gcnew System::Windows::Forms::TextBox());
			this->textBox100 = (gcnew System::Windows::Forms::TextBox());
			this->textBox101 = (gcnew System::Windows::Forms::TextBox());
			this->textBox102 = (gcnew System::Windows::Forms::TextBox());
			this->textBox103 = (gcnew System::Windows::Forms::TextBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->textBox93 = (gcnew System::Windows::Forms::TextBox());
			this->textBox94 = (gcnew System::Windows::Forms::TextBox());
			this->textBox95 = (gcnew System::Windows::Forms::TextBox());
			this->textBox97 = (gcnew System::Windows::Forms::TextBox());
			this->textBox98 = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textBox92 = (gcnew System::Windows::Forms::TextBox());
			this->textBox91 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox96 = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->up1 = (gcnew System::Windows::Forms::Panel());
			this->textBox87 = (gcnew System::Windows::Forms::TextBox());
			this->textBox88 = (gcnew System::Windows::Forms::TextBox());
			this->textBox89 = (gcnew System::Windows::Forms::TextBox());
			this->textBox90 = (gcnew System::Windows::Forms::TextBox());
			this->textBox47 = (gcnew System::Windows::Forms::TextBox());
			this->textBox44 = (gcnew System::Windows::Forms::TextBox());
			this->textBox43 = (gcnew System::Windows::Forms::TextBox());
			this->textBox59 = (gcnew System::Windows::Forms::TextBox());
			this->textBox57 = (gcnew System::Windows::Forms::TextBox());
			this->textBox58 = (gcnew System::Windows::Forms::TextBox());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->textBox45 = (gcnew System::Windows::Forms::TextBox());
			this->textBox46 = (gcnew System::Windows::Forms::TextBox());
			this->textBox49 = (gcnew System::Windows::Forms::TextBox());
			this->textBox50 = (gcnew System::Windows::Forms::TextBox());
			this->textBox53 = (gcnew System::Windows::Forms::TextBox());
			this->textBox54 = (gcnew System::Windows::Forms::TextBox());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->edit_team = (gcnew System::Windows::Forms::Panel());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->home = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->add_team = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->edit_re = (gcnew System::Windows::Forms::Panel());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pan_match = (gcnew System::Windows::Forms::Panel());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->edit_players = (gcnew System::Windows::Forms::Panel());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->textBox36 = (gcnew System::Windows::Forms::TextBox());
			this->textBox37 = (gcnew System::Windows::Forms::TextBox());
			this->textBox38 = (gcnew System::Windows::Forms::TextBox());
			this->textBox39 = (gcnew System::Windows::Forms::TextBox());
			this->textBox40 = (gcnew System::Windows::Forms::TextBox());
			this->textBox41 = (gcnew System::Windows::Forms::TextBox());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->textBox42 = (gcnew System::Windows::Forms::TextBox());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->add_players = (gcnew System::Windows::Forms::Panel());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button57 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->oo->SuspendLayout();
			this->panel39->SuspendLayout();
			this->panel38->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			this->s1->SuspendLayout();
			this->panel37->SuspendLayout();
			this->panel30->SuspendLayout();
			this->panel31->SuspendLayout();
			this->panel32->SuspendLayout();
			this->panel33->SuspendLayout();
			this->panel34->SuspendLayout();
			this->panel35->SuspendLayout();
			this->panel36->SuspendLayout();
			this->panel29->SuspendLayout();
			this->panel22->SuspendLayout();
			this->panel23->SuspendLayout();
			this->panel24->SuspendLayout();
			this->panel25->SuspendLayout();
			this->panel26->SuspendLayout();
			this->panel27->SuspendLayout();
			this->panel28->SuspendLayout();
			this->panel21->SuspendLayout();
			this->panel14->SuspendLayout();
			this->panel15->SuspendLayout();
			this->panel16->SuspendLayout();
			this->panel17->SuspendLayout();
			this->panel18->SuspendLayout();
			this->panel19->SuspendLayout();
			this->panel20->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel12->SuspendLayout();
			this->panel13->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			this->up1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			this->edit_team->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			this->home->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->add_team->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			this->edit_re->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			this->pan_match->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			this->edit_players->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			this->add_players->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(610, 62);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(234, 66);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(503, 28);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(107, 86);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(-37, -17);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(246, 852);
			this->pictureBox3->TabIndex = 4;
			this->pictureBox3->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Corbel", 23.7913F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->Location = System::Drawing::Point(12, 33);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(102, 46);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Hello";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Corbel", 23.7913F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->Location = System::Drawing::Point(46, 82);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(134, 46);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Admin!";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(12, 221);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(53, 38);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 7;
			this->pictureBox4->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Corbel", 20.03478F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label4.Image")));
			this->label4->Location = System::Drawing::Point(58, 222);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(130, 39);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Matches";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(20, 391);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(53, 38);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 11;
			this->pictureBox5->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Corbel", 20.03478F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label7.Image")));
			this->label7->Location = System::Drawing::Point(79, 385);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(105, 39);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Teams";
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(20, 556);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(53, 38);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 14;
			this->pictureBox6->TabStop = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Corbel", 20.03478F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label9.Image")));
			this->label9->Location = System::Drawing::Point(71, 555);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(113, 39);
			this->label9->TabIndex = 15;
			this->label9->Text = L"Players";
			// 
			// addm
			// 
			this->addm->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addm->Font = (gcnew System::Drawing::Font(L"Corbel", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addm->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->addm->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addm.Image")));
			this->addm->Location = System::Drawing::Point(31, 299);
			this->addm->Name = L"addm";
			this->addm->Size = System::Drawing::Size(157, 36);
			this->addm->TabIndex = 17;
			this->addm->Text = L"Add Matches";
			this->addm->UseVisualStyleBackColor = true;
			this->addm->Click += gcnew System::EventHandler(this, &MyForm::addm_Click);
			// 
			// addt
			// 
			this->addt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addt->Font = (gcnew System::Drawing::Font(L"Corbel", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->addt->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addt.Image")));
			this->addt->Location = System::Drawing::Point(27, 447);
			this->addt->Name = L"addt";
			this->addt->Size = System::Drawing::Size(157, 36);
			this->addt->TabIndex = 18;
			this->addt->Text = L"Add Teams";
			this->addt->UseVisualStyleBackColor = true;
			this->addt->Click += gcnew System::EventHandler(this, &MyForm::addt_Click);
			// 
			// addp
			// 
			this->addp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addp->Font = (gcnew System::Drawing::Font(L"Corbel", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addp->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->addp->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addp.Image")));
			this->addp->Location = System::Drawing::Point(27, 616);
			this->addp->Name = L"addp";
			this->addp->Size = System::Drawing::Size(157, 36);
			this->addp->TabIndex = 19;
			this->addp->Text = L"Add Players";
			this->addp->UseVisualStyleBackColor = true;
			this->addp->Click += gcnew System::EventHandler(this, &MyForm::addp_Click);
			// 
			// editt
			// 
			this->editt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->editt->Font = (gcnew System::Drawing::Font(L"Corbel", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->editt->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"editt.Image")));
			this->editt->Location = System::Drawing::Point(27, 501);
			this->editt->Name = L"editt";
			this->editt->Size = System::Drawing::Size(157, 36);
			this->editt->TabIndex = 20;
			this->editt->Text = L"Edit Teams";
			this->editt->UseVisualStyleBackColor = true;
			this->editt->Click += gcnew System::EventHandler(this, &MyForm::editt_Click);
			// 
			// editp
			// 
			this->editp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->editp->Font = (gcnew System::Drawing::Font(L"Corbel", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editp->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->editp->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"editp.Image")));
			this->editp->Location = System::Drawing::Point(27, 665);
			this->editp->Name = L"editp";
			this->editp->Size = System::Drawing::Size(157, 36);
			this->editp->TabIndex = 21;
			this->editp->Text = L"Edit Players";
			this->editp->UseVisualStyleBackColor = true;
			this->editp->Click += gcnew System::EventHandler(this, &MyForm::editp_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.BackgroundImage")));
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(209, 193);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(1088, 580);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 22;
			this->pictureBox7->TabStop = false;
			// 
			// oo
			// 
			this->oo->AllowDrop = true;
			this->oo->Controls->Add(this->panel39);
			this->oo->Controls->Add(this->panel38);
			this->oo->Controls->Add(this->s1);
			this->oo->Controls->Add(this->up1);
			this->oo->Controls->Add(this->edit_team);
			this->oo->Controls->Add(this->home);
			this->oo->Controls->Add(this->add_team);
			this->oo->Controls->Add(this->edit_re);
			this->oo->Controls->Add(this->pan_match);
			this->oo->Controls->Add(this->edit_players);
			this->oo->Controls->Add(this->add_players);
			this->oo->Location = System::Drawing::Point(209, 193);
			this->oo->Name = L"oo";
			this->oo->Size = System::Drawing::Size(1088, 580);
			this->oo->TabIndex = 23;
			// 
			// panel39
			// 
			this->panel39->Controls->Add(this->button35);
			this->panel39->Controls->Add(this->button33);
			this->panel39->Controls->Add(this->button32);
			this->panel39->Controls->Add(this->button34);
			this->panel39->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel39->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->panel39->Location = System::Drawing::Point(0, 0);
			this->panel39->Name = L"panel39";
			this->panel39->Size = System::Drawing::Size(1088, 580);
			this->panel39->TabIndex = 83;
			this->panel39->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel39_Paint);
			// 
			// button35
			// 
			this->button35->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button35->FlatAppearance->BorderSize = 0;
			this->button35->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button35->Font = (gcnew System::Drawing::Font(L"Arial", 21.91304F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button35->ForeColor = System::Drawing::Color::ForestGreen;
			this->button35->Location = System::Drawing::Point(227, 152);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(509, 60);
			this->button35->TabIndex = 77;
			this->button35->Text = L"Chooes what you want";
			this->button35->UseVisualStyleBackColor = false;
			// 
			// button33
			// 
			this->button33->FlatAppearance->BorderSize = 3;
			this->button33->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button33->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button33->ForeColor = System::Drawing::Color::Crimson;
			this->button33->Location = System::Drawing::Point(591, 288);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(271, 57);
			this->button33->TabIndex = 76;
			this->button33->Text = L"Add New Data";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::button33_Click_1);
			// 
			// button32
			// 
			this->button32->FlatAppearance->BorderSize = 3;
			this->button32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button32->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button32->ForeColor = System::Drawing::Color::Crimson;
			this->button32->Location = System::Drawing::Point(146, 288);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(290, 58);
			this->button32->TabIndex = 28;
			this->button32->Text = L"Edit Data";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::button32_Click);
			// 
			// button34
			// 
			this->button34->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button34->FlatAppearance->BorderSize = 0;
			this->button34->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button34->Font = (gcnew System::Drawing::Font(L"Arial", 28.17391F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button34->ForeColor = System::Drawing::Color::ForestGreen;
			this->button34->Location = System::Drawing::Point(37, 20);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(272, 97);
			this->button34->TabIndex = 75;
			this->button34->Text = L"Hello : )";
			this->button34->UseVisualStyleBackColor = false;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::button34_Click_1);
			// 
			// panel38
			// 
			this->panel38->Controls->Add(this->button31);
			this->panel38->Controls->Add(this->comboBox5);
			this->panel38->Controls->Add(this->button29);
			this->panel38->Controls->Add(this->button30);
			this->panel38->Controls->Add(this->pictureBox18);
			this->panel38->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel38->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->panel38->Location = System::Drawing::Point(0, 0);
			this->panel38->Name = L"panel38";
			this->panel38->Size = System::Drawing::Size(1088, 580);
			this->panel38->TabIndex = 82;
			// 
			// button31
			// 
			this->button31->FlatAppearance->BorderSize = 3;
			this->button31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button31->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button31->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->button31->Location = System::Drawing::Point(505, 373);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(259, 52);
			this->button31->TabIndex = 28;
			this->button31->Text = L"Click to add or Edit";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button31_Click);
			// 
			// comboBox5
			// 
			this->comboBox5->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F));
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Location = System::Drawing::Point(267, 277);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(310, 44);
			this->comboBox5->TabIndex = 77;
			this->comboBox5->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox5_SelectedIndexChanged);
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button29->FlatAppearance->BorderSize = 0;
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button29->Font = (gcnew System::Drawing::Font(L"DecoType Naskh", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button29->ForeColor = System::Drawing::Color::Black;
			this->button29->Location = System::Drawing::Point(207, 212);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(321, 47);
			this->button29->TabIndex = 76;
			this->button29->Text = L"Chooes the team";
			this->button29->UseVisualStyleBackColor = false;
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button30->FlatAppearance->BorderSize = 0;
			this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button30->Font = (gcnew System::Drawing::Font(L"DecoType Naskh", 20.03478F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button30->ForeColor = System::Drawing::Color::Black;
			this->button30->Location = System::Drawing::Point(411, 58);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(372, 77);
			this->button30->TabIndex = 75;
			this->button30->Text = L"Add Statistics";
			this->button30->UseVisualStyleBackColor = false;
			// 
			// pictureBox18
			// 
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(249, 57);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(146, 77);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox18->TabIndex = 74;
			this->pictureBox18->TabStop = false;
			// 
			// s1
			// 
			this->s1->Controls->Add(this->button54);
			this->s1->Controls->Add(this->panel37);
			this->s1->Controls->Add(this->panel30);
			this->s1->Controls->Add(this->panel29);
			this->s1->Controls->Add(this->panel22);
			this->s1->Controls->Add(this->panel21);
			this->s1->Controls->Add(this->panel14);
			this->s1->Controls->Add(this->panel9);
			this->s1->Controls->Add(this->panel7);
			this->s1->Controls->Add(this->panel6);
			this->s1->Controls->Add(this->panel5);
			this->s1->Controls->Add(this->panel4);
			this->s1->Controls->Add(this->panel3);
			this->s1->Controls->Add(this->button38);
			this->s1->Controls->Add(this->pictureBox20);
			this->s1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->s1->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->s1->Location = System::Drawing::Point(0, 0);
			this->s1->Name = L"s1";
			this->s1->Size = System::Drawing::Size(1088, 580);
			this->s1->TabIndex = 81;
			this->s1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::s1_Paint);
			// 
			// button54
			// 
			this->button54->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button54->FlatAppearance->BorderSize = 2;
			this->button54->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button54->Font = (gcnew System::Drawing::Font(L"Corbel", 20.03478F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button54->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button54->Location = System::Drawing::Point(888, 17);
			this->button54->Name = L"button54";
			this->button54->Size = System::Drawing::Size(138, 63);
			this->button54->TabIndex = 118;
			this->button54->Text = L"Save";
			this->button54->UseVisualStyleBackColor = false;
			this->button54->Click += gcnew System::EventHandler(this, &MyForm::button54_Click);
			// 
			// panel37
			// 
			this->panel37->Controls->Add(this->textBox254);
			this->panel37->Controls->Add(this->textBox255);
			this->panel37->Controls->Add(this->textBox256);
			this->panel37->Controls->Add(this->textBox257);
			this->panel37->Controls->Add(this->textBox258);
			this->panel37->Location = System::Drawing::Point(3, 545);
			this->panel37->Name = L"panel37";
			this->panel37->Size = System::Drawing::Size(1023, 40);
			this->panel37->TabIndex = 115;
			// 
			// textBox254
			// 
			this->textBox254->AccessibleDescription = L"";
			this->textBox254->AccessibleName = L"";
			this->textBox254->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox254->BackColor = System::Drawing::SystemColors::Control;
			this->textBox254->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox254->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox254->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox254->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox254->Location = System::Drawing::Point(862, 6);
			this->textBox254->Multiline = true;
			this->textBox254->Name = L"textBox254";
			this->textBox254->Size = System::Drawing::Size(63, 30);
			this->textBox254->TabIndex = 96;
			this->textBox254->Text = L"-";
			this->textBox254->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox255
			// 
			this->textBox255->AccessibleDescription = L"";
			this->textBox255->AccessibleName = L"";
			this->textBox255->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox255->BackColor = System::Drawing::SystemColors::Control;
			this->textBox255->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox255->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox255->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox255->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox255->Location = System::Drawing::Point(692, 6);
			this->textBox255->Multiline = true;
			this->textBox255->Name = L"textBox255";
			this->textBox255->Size = System::Drawing::Size(63, 30);
			this->textBox255->TabIndex = 95;
			this->textBox255->Text = L"-";
			this->textBox255->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox256
			// 
			this->textBox256->AccessibleDescription = L"";
			this->textBox256->AccessibleName = L"";
			this->textBox256->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox256->BackColor = System::Drawing::SystemColors::Control;
			this->textBox256->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox256->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox256->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox256->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox256->Location = System::Drawing::Point(502, 7);
			this->textBox256->Multiline = true;
			this->textBox256->Name = L"textBox256";
			this->textBox256->Size = System::Drawing::Size(63, 30);
			this->textBox256->TabIndex = 94;
			this->textBox256->Text = L"-";
			this->textBox256->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox257
			// 
			this->textBox257->AccessibleDescription = L"";
			this->textBox257->AccessibleName = L"";
			this->textBox257->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox257->BackColor = System::Drawing::SystemColors::Control;
			this->textBox257->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox257->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox257->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox257->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox257->Location = System::Drawing::Point(311, 7);
			this->textBox257->Multiline = true;
			this->textBox257->Name = L"textBox257";
			this->textBox257->Size = System::Drawing::Size(63, 30);
			this->textBox257->TabIndex = 93;
			this->textBox257->Text = L"-";
			this->textBox257->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox258
			// 
			this->textBox258->AccessibleDescription = L"";
			this->textBox258->AccessibleName = L"";
			this->textBox258->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox258->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox258->Font = (gcnew System::Drawing::Font(L"Corbel", 13.77391F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox258->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox258->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox258->Location = System::Drawing::Point(15, 5);
			this->textBox258->Multiline = true;
			this->textBox258->Name = L"textBox258";
			this->textBox258->ReadOnly = true;
			this->textBox258->Size = System::Drawing::Size(172, 30);
			this->textBox258->TabIndex = 92;
			this->textBox258->Text = L"-";
			this->textBox258->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel30
			// 
			this->panel30->BackColor = System::Drawing::Color::White;
			this->panel30->Controls->Add(this->panel31);
			this->panel30->Controls->Add(this->textBox249);
			this->panel30->Controls->Add(this->textBox250);
			this->panel30->Controls->Add(this->textBox251);
			this->panel30->Controls->Add(this->textBox252);
			this->panel30->Controls->Add(this->textBox253);
			this->panel30->Location = System::Drawing::Point(6, 505);
			this->panel30->Name = L"panel30";
			this->panel30->Size = System::Drawing::Size(1023, 40);
			this->panel30->TabIndex = 117;
			// 
			// panel31
			// 
			this->panel31->Controls->Add(this->panel32);
			this->panel31->Controls->Add(this->textBox244);
			this->panel31->Controls->Add(this->textBox245);
			this->panel31->Controls->Add(this->textBox246);
			this->panel31->Controls->Add(this->textBox247);
			this->panel31->Controls->Add(this->textBox248);
			this->panel31->Location = System::Drawing::Point(0, 38);
			this->panel31->Name = L"panel31";
			this->panel31->Size = System::Drawing::Size(1023, 40);
			this->panel31->TabIndex = 114;
			// 
			// panel32
			// 
			this->panel32->Controls->Add(this->panel33);
			this->panel32->Controls->Add(this->textBox239);
			this->panel32->Controls->Add(this->textBox240);
			this->panel32->Controls->Add(this->textBox241);
			this->panel32->Controls->Add(this->textBox242);
			this->panel32->Controls->Add(this->textBox243);
			this->panel32->Location = System::Drawing::Point(3, 1);
			this->panel32->Name = L"panel32";
			this->panel32->Size = System::Drawing::Size(1023, 40);
			this->panel32->TabIndex = 116;
			// 
			// panel33
			// 
			this->panel33->BackColor = System::Drawing::Color::White;
			this->panel33->Controls->Add(this->panel34);
			this->panel33->Controls->Add(this->panel36);
			this->panel33->Controls->Add(this->textBox234);
			this->panel33->Controls->Add(this->textBox235);
			this->panel33->Controls->Add(this->textBox236);
			this->panel33->Controls->Add(this->textBox237);
			this->panel33->Controls->Add(this->textBox238);
			this->panel33->Location = System::Drawing::Point(0, 38);
			this->panel33->Name = L"panel33";
			this->panel33->Size = System::Drawing::Size(1023, 40);
			this->panel33->TabIndex = 115;
			// 
			// panel34
			// 
			this->panel34->BackColor = System::Drawing::Color::White;
			this->panel34->Controls->Add(this->panel35);
			this->panel34->Controls->Add(this->textBox224);
			this->panel34->Controls->Add(this->textBox225);
			this->panel34->Controls->Add(this->textBox226);
			this->panel34->Controls->Add(this->textBox227);
			this->panel34->Controls->Add(this->textBox228);
			this->panel34->Location = System::Drawing::Point(0, 1);
			this->panel34->Name = L"panel34";
			this->panel34->Size = System::Drawing::Size(1023, 40);
			this->panel34->TabIndex = 115;
			// 
			// panel35
			// 
			this->panel35->Controls->Add(this->textBox219);
			this->panel35->Controls->Add(this->textBox220);
			this->panel35->Controls->Add(this->textBox221);
			this->panel35->Controls->Add(this->textBox222);
			this->panel35->Controls->Add(this->textBox223);
			this->panel35->Location = System::Drawing::Point(0, 38);
			this->panel35->Name = L"panel35";
			this->panel35->Size = System::Drawing::Size(1023, 40);
			this->panel35->TabIndex = 114;
			// 
			// textBox219
			// 
			this->textBox219->AccessibleDescription = L"";
			this->textBox219->AccessibleName = L"";
			this->textBox219->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox219->BackColor = System::Drawing::SystemColors::Control;
			this->textBox219->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox219->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox219->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox219->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox219->Location = System::Drawing::Point(862, 6);
			this->textBox219->Multiline = true;
			this->textBox219->Name = L"textBox219";
			this->textBox219->Size = System::Drawing::Size(63, 30);
			this->textBox219->TabIndex = 96;
			this->textBox219->Text = L"-";
			this->textBox219->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox220
			// 
			this->textBox220->AccessibleDescription = L"";
			this->textBox220->AccessibleName = L"";
			this->textBox220->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox220->BackColor = System::Drawing::SystemColors::Control;
			this->textBox220->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox220->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox220->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox220->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox220->Location = System::Drawing::Point(692, 6);
			this->textBox220->Multiline = true;
			this->textBox220->Name = L"textBox220";
			this->textBox220->Size = System::Drawing::Size(63, 30);
			this->textBox220->TabIndex = 95;
			this->textBox220->Text = L"-";
			this->textBox220->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox221
			// 
			this->textBox221->AccessibleDescription = L"";
			this->textBox221->AccessibleName = L"";
			this->textBox221->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox221->BackColor = System::Drawing::SystemColors::Control;
			this->textBox221->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox221->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox221->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox221->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox221->Location = System::Drawing::Point(502, 7);
			this->textBox221->Multiline = true;
			this->textBox221->Name = L"textBox221";
			this->textBox221->Size = System::Drawing::Size(63, 30);
			this->textBox221->TabIndex = 94;
			this->textBox221->Text = L"-";
			this->textBox221->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox222
			// 
			this->textBox222->AccessibleDescription = L"";
			this->textBox222->AccessibleName = L"";
			this->textBox222->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox222->BackColor = System::Drawing::SystemColors::Control;
			this->textBox222->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox222->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox222->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox222->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox222->Location = System::Drawing::Point(311, 7);
			this->textBox222->Multiline = true;
			this->textBox222->Name = L"textBox222";
			this->textBox222->Size = System::Drawing::Size(63, 30);
			this->textBox222->TabIndex = 93;
			this->textBox222->Text = L"-";
			this->textBox222->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox223
			// 
			this->textBox223->AccessibleDescription = L"";
			this->textBox223->AccessibleName = L"";
			this->textBox223->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox223->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox223->Font = (gcnew System::Drawing::Font(L"Corbel", 13.77391F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox223->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox223->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox223->Location = System::Drawing::Point(12, 5);
			this->textBox223->Multiline = true;
			this->textBox223->Name = L"textBox223";
			this->textBox223->ReadOnly = true;
			this->textBox223->Size = System::Drawing::Size(172, 30);
			this->textBox223->TabIndex = 92;
			this->textBox223->Text = L"-";
			this->textBox223->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox224
			// 
			this->textBox224->AccessibleDescription = L"";
			this->textBox224->AccessibleName = L"";
			this->textBox224->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox224->BackColor = System::Drawing::Color::White;
			this->textBox224->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox224->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox224->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox224->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox224->Location = System::Drawing::Point(862, 6);
			this->textBox224->Multiline = true;
			this->textBox224->Name = L"textBox224";
			this->textBox224->Size = System::Drawing::Size(63, 30);
			this->textBox224->TabIndex = 96;
			this->textBox224->Text = L"-";
			this->textBox224->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox225
			// 
			this->textBox225->AccessibleDescription = L"";
			this->textBox225->AccessibleName = L"";
			this->textBox225->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox225->BackColor = System::Drawing::Color::White;
			this->textBox225->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox225->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox225->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox225->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox225->Location = System::Drawing::Point(692, 6);
			this->textBox225->Multiline = true;
			this->textBox225->Name = L"textBox225";
			this->textBox225->Size = System::Drawing::Size(63, 30);
			this->textBox225->TabIndex = 95;
			this->textBox225->Text = L"-";
			this->textBox225->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox226
			// 
			this->textBox226->AccessibleDescription = L"";
			this->textBox226->AccessibleName = L"";
			this->textBox226->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox226->BackColor = System::Drawing::Color::White;
			this->textBox226->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox226->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox226->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox226->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox226->Location = System::Drawing::Point(502, 7);
			this->textBox226->Multiline = true;
			this->textBox226->Name = L"textBox226";
			this->textBox226->Size = System::Drawing::Size(63, 30);
			this->textBox226->TabIndex = 94;
			this->textBox226->Text = L"-";
			this->textBox226->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox227
			// 
			this->textBox227->AccessibleDescription = L"";
			this->textBox227->AccessibleName = L"";
			this->textBox227->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox227->BackColor = System::Drawing::Color::White;
			this->textBox227->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox227->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox227->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox227->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox227->Location = System::Drawing::Point(311, 7);
			this->textBox227->Multiline = true;
			this->textBox227->Name = L"textBox227";
			this->textBox227->Size = System::Drawing::Size(63, 30);
			this->textBox227->TabIndex = 93;
			this->textBox227->Text = L"-";
			this->textBox227->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox228
			// 
			this->textBox228->AccessibleDescription = L"";
			this->textBox228->AccessibleName = L"";
			this->textBox228->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox228->BackColor = System::Drawing::Color::White;
			this->textBox228->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox228->Font = (gcnew System::Drawing::Font(L"Corbel", 13.77391F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox228->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox228->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox228->Location = System::Drawing::Point(12, 5);
			this->textBox228->Multiline = true;
			this->textBox228->Name = L"textBox228";
			this->textBox228->ReadOnly = true;
			this->textBox228->Size = System::Drawing::Size(172, 30);
			this->textBox228->TabIndex = 92;
			this->textBox228->Text = L"-";
			this->textBox228->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel36
			// 
			this->panel36->Controls->Add(this->textBox229);
			this->panel36->Controls->Add(this->textBox230);
			this->panel36->Controls->Add(this->textBox231);
			this->panel36->Controls->Add(this->textBox232);
			this->panel36->Controls->Add(this->textBox233);
			this->panel36->Location = System::Drawing::Point(0, 38);
			this->panel36->Name = L"panel36";
			this->panel36->Size = System::Drawing::Size(1023, 40);
			this->panel36->TabIndex = 114;
			// 
			// textBox229
			// 
			this->textBox229->AccessibleDescription = L"";
			this->textBox229->AccessibleName = L"";
			this->textBox229->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox229->BackColor = System::Drawing::SystemColors::Control;
			this->textBox229->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox229->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox229->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox229->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox229->Location = System::Drawing::Point(862, 6);
			this->textBox229->Multiline = true;
			this->textBox229->Name = L"textBox229";
			this->textBox229->Size = System::Drawing::Size(63, 30);
			this->textBox229->TabIndex = 96;
			this->textBox229->Text = L"-";
			this->textBox229->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox230
			// 
			this->textBox230->AccessibleDescription = L"";
			this->textBox230->AccessibleName = L"";
			this->textBox230->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox230->BackColor = System::Drawing::SystemColors::Control;
			this->textBox230->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox230->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox230->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox230->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox230->Location = System::Drawing::Point(692, 6);
			this->textBox230->Multiline = true;
			this->textBox230->Name = L"textBox230";
			this->textBox230->Size = System::Drawing::Size(63, 30);
			this->textBox230->TabIndex = 95;
			this->textBox230->Text = L"-";
			this->textBox230->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox231
			// 
			this->textBox231->AccessibleDescription = L"";
			this->textBox231->AccessibleName = L"";
			this->textBox231->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox231->BackColor = System::Drawing::SystemColors::Control;
			this->textBox231->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox231->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox231->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox231->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox231->Location = System::Drawing::Point(502, 7);
			this->textBox231->Multiline = true;
			this->textBox231->Name = L"textBox231";
			this->textBox231->Size = System::Drawing::Size(63, 30);
			this->textBox231->TabIndex = 94;
			this->textBox231->Text = L"-";
			this->textBox231->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox232
			// 
			this->textBox232->AccessibleDescription = L"";
			this->textBox232->AccessibleName = L"";
			this->textBox232->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox232->BackColor = System::Drawing::SystemColors::Control;
			this->textBox232->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox232->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox232->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox232->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox232->Location = System::Drawing::Point(311, 7);
			this->textBox232->Multiline = true;
			this->textBox232->Name = L"textBox232";
			this->textBox232->Size = System::Drawing::Size(63, 30);
			this->textBox232->TabIndex = 93;
			this->textBox232->Text = L"-";
			this->textBox232->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox233
			// 
			this->textBox233->AccessibleDescription = L"";
			this->textBox233->AccessibleName = L"";
			this->textBox233->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox233->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox233->Font = (gcnew System::Drawing::Font(L"Corbel", 13.77391F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox233->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox233->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox233->Location = System::Drawing::Point(12, 5);
			this->textBox233->Multiline = true;
			this->textBox233->Name = L"textBox233";
			this->textBox233->ReadOnly = true;
			this->textBox233->Size = System::Drawing::Size(172, 30);
			this->textBox233->TabIndex = 92;
			this->textBox233->Text = L"-";
			this->textBox233->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox234
			// 
			this->textBox234->AccessibleDescription = L"";
			this->textBox234->AccessibleName = L"";
			this->textBox234->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox234->BackColor = System::Drawing::Color::White;
			this->textBox234->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox234->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox234->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox234->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox234->Location = System::Drawing::Point(862, 6);
			this->textBox234->Multiline = true;
			this->textBox234->Name = L"textBox234";
			this->textBox234->Size = System::Drawing::Size(63, 30);
			this->textBox234->TabIndex = 96;
			this->textBox234->Text = L"-";
			this->textBox234->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox235
			// 
			this->textBox235->AccessibleDescription = L"";
			this->textBox235->AccessibleName = L"";
			this->textBox235->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox235->BackColor = System::Drawing::Color::White;
			this->textBox235->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox235->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox235->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox235->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox235->Location = System::Drawing::Point(692, 6);
			this->textBox235->Multiline = true;
			this->textBox235->Name = L"textBox235";
			this->textBox235->Size = System::Drawing::Size(63, 30);
			this->textBox235->TabIndex = 95;
			this->textBox235->Text = L"-";
			this->textBox235->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox236
			// 
			this->textBox236->AccessibleDescription = L"";
			this->textBox236->AccessibleName = L"";
			this->textBox236->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox236->BackColor = System::Drawing::Color::White;
			this->textBox236->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox236->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox236->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox236->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox236->Location = System::Drawing::Point(502, 7);
			this->textBox236->Multiline = true;
			this->textBox236->Name = L"textBox236";
			this->textBox236->Size = System::Drawing::Size(63, 30);
			this->textBox236->TabIndex = 94;
			this->textBox236->Text = L"-";
			this->textBox236->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox237
			// 
			this->textBox237->AccessibleDescription = L"";
			this->textBox237->AccessibleName = L"";
			this->textBox237->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox237->BackColor = System::Drawing::Color::White;
			this->textBox237->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox237->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox237->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox237->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox237->Location = System::Drawing::Point(311, 7);
			this->textBox237->Multiline = true;
			this->textBox237->Name = L"textBox237";
			this->textBox237->Size = System::Drawing::Size(63, 30);
			this->textBox237->TabIndex = 93;
			this->textBox237->Text = L"-";
			this->textBox237->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox238
			// 
			this->textBox238->AccessibleDescription = L"";
			this->textBox238->AccessibleName = L"";
			this->textBox238->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox238->BackColor = System::Drawing::Color::White;
			this->textBox238->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox238->Font = (gcnew System::Drawing::Font(L"Corbel", 13.77391F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox238->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox238->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox238->Location = System::Drawing::Point(12, 5);
			this->textBox238->Multiline = true;
			this->textBox238->Name = L"textBox238";
			this->textBox238->ReadOnly = true;
			this->textBox238->Size = System::Drawing::Size(172, 30);
			this->textBox238->TabIndex = 92;
			this->textBox238->Text = L"-";
			this->textBox238->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox239
			// 
			this->textBox239->AccessibleDescription = L"";
			this->textBox239->AccessibleName = L"";
			this->textBox239->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox239->BackColor = System::Drawing::SystemColors::Control;
			this->textBox239->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox239->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox239->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox239->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox239->Location = System::Drawing::Point(862, 6);
			this->textBox239->Multiline = true;
			this->textBox239->Name = L"textBox239";
			this->textBox239->Size = System::Drawing::Size(63, 30);
			this->textBox239->TabIndex = 96;
			this->textBox239->Text = L"-";
			this->textBox239->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox240
			// 
			this->textBox240->AccessibleDescription = L"";
			this->textBox240->AccessibleName = L"";
			this->textBox240->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox240->BackColor = System::Drawing::SystemColors::Control;
			this->textBox240->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox240->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox240->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox240->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox240->Location = System::Drawing::Point(692, 6);
			this->textBox240->Multiline = true;
			this->textBox240->Name = L"textBox240";
			this->textBox240->Size = System::Drawing::Size(63, 30);
			this->textBox240->TabIndex = 95;
			this->textBox240->Text = L"-";
			this->textBox240->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox241
			// 
			this->textBox241->AccessibleDescription = L"";
			this->textBox241->AccessibleName = L"";
			this->textBox241->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox241->BackColor = System::Drawing::SystemColors::Control;
			this->textBox241->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox241->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox241->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox241->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox241->Location = System::Drawing::Point(502, 7);
			this->textBox241->Multiline = true;
			this->textBox241->Name = L"textBox241";
			this->textBox241->Size = System::Drawing::Size(63, 30);
			this->textBox241->TabIndex = 94;
			this->textBox241->Text = L"-";
			this->textBox241->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox242
			// 
			this->textBox242->AccessibleDescription = L"";
			this->textBox242->AccessibleName = L"";
			this->textBox242->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox242->BackColor = System::Drawing::SystemColors::Control;
			this->textBox242->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox242->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox242->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox242->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox242->Location = System::Drawing::Point(311, 7);
			this->textBox242->Multiline = true;
			this->textBox242->Name = L"textBox242";
			this->textBox242->Size = System::Drawing::Size(63, 30);
			this->textBox242->TabIndex = 93;
			this->textBox242->Text = L"-";
			this->textBox242->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox243
			// 
			this->textBox243->AccessibleDescription = L"";
			this->textBox243->AccessibleName = L"";
			this->textBox243->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox243->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox243->Font = (gcnew System::Drawing::Font(L"Corbel", 13.77391F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox243->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox243->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox243->Location = System::Drawing::Point(12, 5);
			this->textBox243->Multiline = true;
			this->textBox243->Name = L"textBox243";
			this->textBox243->ReadOnly = true;
			this->textBox243->Size = System::Drawing::Size(172, 30);
			this->textBox243->TabIndex = 92;
			this->textBox243->Text = L"-";
			this->textBox243->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox244
			// 
			this->textBox244->AccessibleDescription = L"";
			this->textBox244->AccessibleName = L"";
			this->textBox244->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox244->BackColor = System::Drawing::SystemColors::Control;
			this->textBox244->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox244->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox244->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox244->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox244->Location = System::Drawing::Point(862, 6);
			this->textBox244->Multiline = true;
			this->textBox244->Name = L"textBox244";
			this->textBox244->Size = System::Drawing::Size(63, 30);
			this->textBox244->TabIndex = 96;
			this->textBox244->Text = L"-";
			this->textBox244->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox245
			// 
			this->textBox245->AccessibleDescription = L"";
			this->textBox245->AccessibleName = L"";
			this->textBox245->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox245->BackColor = System::Drawing::SystemColors::Control;
			this->textBox245->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox245->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox245->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox245->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox245->Location = System::Drawing::Point(692, 6);
			this->textBox245->Multiline = true;
			this->textBox245->Name = L"textBox245";
			this->textBox245->Size = System::Drawing::Size(63, 30);
			this->textBox245->TabIndex = 95;
			this->textBox245->Text = L"-";
			this->textBox245->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox246
			// 
			this->textBox246->AccessibleDescription = L"";
			this->textBox246->AccessibleName = L"";
			this->textBox246->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox246->BackColor = System::Drawing::SystemColors::Control;
			this->textBox246->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox246->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox246->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox246->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox246->Location = System::Drawing::Point(502, 7);
			this->textBox246->Multiline = true;
			this->textBox246->Name = L"textBox246";
			this->textBox246->Size = System::Drawing::Size(63, 30);
			this->textBox246->TabIndex = 94;
			this->textBox246->Text = L"-";
			this->textBox246->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox247
			// 
			this->textBox247->AccessibleDescription = L"";
			this->textBox247->AccessibleName = L"";
			this->textBox247->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox247->BackColor = System::Drawing::SystemColors::Control;
			this->textBox247->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox247->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox247->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox247->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox247->Location = System::Drawing::Point(311, 7);
			this->textBox247->Multiline = true;
			this->textBox247->Name = L"textBox247";
			this->textBox247->Size = System::Drawing::Size(63, 30);
			this->textBox247->TabIndex = 93;
			this->textBox247->Text = L"-";
			this->textBox247->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox248
			// 
			this->textBox248->AccessibleDescription = L"";
			this->textBox248->AccessibleName = L"";
			this->textBox248->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox248->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox248->Font = (gcnew System::Drawing::Font(L"Corbel", 13.77391F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox248->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox248->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox248->Location = System::Drawing::Point(12, 5);
			this->textBox248->Multiline = true;
			this->textBox248->Name = L"textBox248";
			this->textBox248->ReadOnly = true;
			this->textBox248->Size = System::Drawing::Size(172, 30);
			this->textBox248->TabIndex = 92;
			this->textBox248->Text = L"-";
			this->textBox248->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox249
			// 
			this->textBox249->AccessibleDescription = L"";
			this->textBox249->AccessibleName = L"";
			this->textBox249->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox249->BackColor = System::Drawing::Color::White;
			this->textBox249->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox249->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox249->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox249->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox249->Location = System::Drawing::Point(862, 6);
			this->textBox249->Multiline = true;
			this->textBox249->Name = L"textBox249";
			this->textBox249->Size = System::Drawing::Size(63, 30);
			this->textBox249->TabIndex = 96;
			this->textBox249->Text = L"-";
			this->textBox249->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox250
			// 
			this->textBox250->AccessibleDescription = L"";
			this->textBox250->AccessibleName = L"";
			this->textBox250->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox250->BackColor = System::Drawing::Color::White;
			this->textBox250->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox250->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox250->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox250->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox250->Location = System::Drawing::Point(692, 6);
			this->textBox250->Multiline = true;
			this->textBox250->Name = L"textBox250";
			this->textBox250->Size = System::Drawing::Size(63, 30);
			this->textBox250->TabIndex = 95;
			this->textBox250->Text = L"-";
			this->textBox250->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox251
			// 
			this->textBox251->AccessibleDescription = L"";
			this->textBox251->AccessibleName = L"";
			this->textBox251->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox251->BackColor = System::Drawing::Color::White;
			this->textBox251->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox251->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox251->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox251->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox251->Location = System::Drawing::Point(502, 7);
			this->textBox251->Multiline = true;
			this->textBox251->Name = L"textBox251";
			this->textBox251->Size = System::Drawing::Size(63, 30);
			this->textBox251->TabIndex = 94;
			this->textBox251->Text = L"-";
			this->textBox251->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox252
			// 
			this->textBox252->AccessibleDescription = L"";
			this->textBox252->AccessibleName = L"";
			this->textBox252->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox252->BackColor = System::Drawing::Color::White;
			this->textBox252->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox252->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox252->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox252->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox252->Location = System::Drawing::Point(311, 7);
			this->textBox252->Multiline = true;
			this->textBox252->Name = L"textBox252";
			this->textBox252->Size = System::Drawing::Size(63, 30);
			this->textBox252->TabIndex = 93;
			this->textBox252->Text = L"-";
			this->textBox252->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox253
			// 
			this->textBox253->AccessibleDescription = L"";
			this->textBox253->AccessibleName = L"";
			this->textBox253->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox253->BackColor = System::Drawing::Color::White;
			this->textBox253->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox253->Font = (gcnew System::Drawing::Font(L"Corbel", 13.77391F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox253->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox253->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox253->Location = System::Drawing::Point(12, 10);
			this->textBox253->Multiline = true;
			this->textBox253->Name = L"textBox253";
			this->textBox253->ReadOnly = true;
			this->textBox253->Size = System::Drawing::Size(172, 30);
			this->textBox253->TabIndex = 92;
			this->textBox253->Text = L"-";
			this->textBox253->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel29
			// 
			this->panel29->Controls->Add(this->textBox214);
			this->panel29->Controls->Add(this->textBox215);
			this->panel29->Controls->Add(this->textBox216);
			this->panel29->Controls->Add(this->textBox217);
			this->panel29->Controls->Add(this->textBox218);
			this->panel29->Location = System::Drawing::Point(6, 465);
			this->panel29->Name = L"panel29";
			this->panel29->Size = System::Drawing::Size(1023, 40);
			this->panel29->TabIndex = 114;
			// 
			// textBox214
			// 
			this->textBox214->AccessibleDescription = L"";
			this->textBox214->AccessibleName = L"";
			this->textBox214->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox214->BackColor = System::Drawing::SystemColors::Control;
			this->textBox214->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox214->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox214->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox214->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox214->Location = System::Drawing::Point(862, 6);
			this->textBox214->Multiline = true;
			this->textBox214->Name = L"textBox214";
			this->textBox214->Size = System::Drawing::Size(63, 30);
			this->textBox214->TabIndex = 96;
			this->textBox214->Text = L"-";
			this->textBox214->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox215
			// 
			this->textBox215->AccessibleDescription = L"";
			this->textBox215->AccessibleName = L"";
			this->textBox215->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox215->BackColor = System::Drawing::SystemColors::Control;
			this->textBox215->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox215->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox215->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox215->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox215->Location = System::Drawing::Point(692, 6);
			this->textBox215->Multiline = true;
			this->textBox215->Name = L"textBox215";
			this->textBox215->Size = System::Drawing::Size(63, 30);
			this->textBox215->TabIndex = 95;
			this->textBox215->Text = L"-";
			this->textBox215->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox216
			// 
			this->textBox216->AccessibleDescription = L"";
			this->textBox216->AccessibleName = L"";
			this->textBox216->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox216->BackColor = System::Drawing::SystemColors::Control;
			this->textBox216->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox216->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox216->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox216->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox216->Location = System::Drawing::Point(502, 7);
			this->textBox216->Multiline = true;
			this->textBox216->Name = L"textBox216";
			this->textBox216->Size = System::Drawing::Size(63, 30);
			this->textBox216->TabIndex = 94;
			this->textBox216->Text = L"-";
			this->textBox216->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox217
			// 
			this->textBox217->AccessibleDescription = L"";
			this->textBox217->AccessibleName = L"";
			this->textBox217->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox217->BackColor = System::Drawing::SystemColors::Control;
			this->textBox217->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox217->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox217->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox217->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox217->Location = System::Drawing::Point(311, 7);
			this->textBox217->Multiline = true;
			this->textBox217->Name = L"textBox217";
			this->textBox217->Size = System::Drawing::Size(63, 30);
			this->textBox217->TabIndex = 93;
			this->textBox217->Text = L"-";
			this->textBox217->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox218
			// 
			this->textBox218->AccessibleDescription = L"";
			this->textBox218->AccessibleName = L"";
			this->textBox218->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox218->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox218->Font = (gcnew System::Drawing::Font(L"Corbel", 13.77391F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox218->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox218->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox218->Location = System::Drawing::Point(15, 5);
			this->textBox218->Multiline = true;
			this->textBox218->Name = L"textBox218";
			this->textBox218->ReadOnly = true;
			this->textBox218->Size = System::Drawing::Size(172, 30);
			this->textBox218->TabIndex = 92;
			this->textBox218->Text = L"-";
			this->textBox218->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel22
			// 
			this->panel22->BackColor = System::Drawing::Color::White;
			this->panel22->Controls->Add(this->panel23);
			this->panel22->Controls->Add(this->textBox209);
			this->panel22->Controls->Add(this->textBox210);
			this->panel22->Controls->Add(this->textBox211);
			this->panel22->Controls->Add(this->textBox212);
			this->panel22->Controls->Add(this->textBox213);
			this->panel22->Location = System::Drawing::Point(6, 424);
			this->panel22->Name = L"panel22";
			this->panel22->Size = System::Drawing::Size(1023, 40);
			this->panel22->TabIndex = 116;
			// 
			// panel23
			// 
			this->panel23->Controls->Add(this->panel24);
			this->panel23->Controls->Add(this->textBox204);
			this->panel23->Controls->Add(this->textBox205);
			this->panel23->Controls->Add(this->textBox206);
			this->panel23->Controls->Add(this->textBox207);
			this->panel23->Controls->Add(this->textBox208);
			this->panel23->Location = System::Drawing::Point(0, 38);
			this->panel23->Name = L"panel23";
			this->panel23->Size = System::Drawing::Size(1023, 40);
			this->panel23->TabIndex = 114;
			// 
			// panel24
			// 
			this->panel24->Controls->Add(this->panel25);
			this->panel24->Controls->Add(this->textBox199);
			this->panel24->Controls->Add(this->textBox200);
			this->panel24->Controls->Add(this->textBox201);
			this->panel24->Controls->Add(this->textBox202);
			this->panel24->Controls->Add(this->textBox203);
			this->panel24->Location = System::Drawing::Point(3, 1);
			this->panel24->Name = L"panel24";
			this->panel24->Size = System::Drawing::Size(1023, 40);
			this->panel24->TabIndex = 116;
			// 
			// panel25
			// 
			this->panel25->BackColor = System::Drawing::Color::White;
			this->panel25->Controls->Add(this->panel26);
			this->panel25->Controls->Add(this->panel28);
			this->panel25->Controls->Add(this->textBox194);
			this->panel25->Controls->Add(this->textBox195);
			this->panel25->Controls->Add(this->textBox196);
			this->panel25->Controls->Add(this->textBox197);
			this->panel25->Controls->Add(this->textBox198);
			this->panel25->Location = System::Drawing::Point(0, 38);
			this->panel25->Name = L"panel25";
			this->panel25->Size = System::Drawing::Size(1023, 40);
			this->panel25->TabIndex = 115;
			// 
			// panel26
			// 
			this->panel26->BackColor = System::Drawing::Color::White;
			this->panel26->Controls->Add(this->panel27);
			this->panel26->Controls->Add(this->textBox184);
			this->panel26->Controls->Add(this->textBox185);
			this->panel26->Controls->Add(this->textBox186);
			this->panel26->Controls->Add(this->textBox187);
			this->panel26->Controls->Add(this->textBox188);
			this->panel26->Location = System::Drawing::Point(0, 1);
			this->panel26->Name = L"panel26";
			this->panel26->Size = System::Drawing::Size(1023, 40);
			this->panel26->TabIndex = 115;
			// 
			// panel27
			// 
			this->panel27->Controls->Add(this->textBox179);
			this->panel27->Controls->Add(this->textBox180);
			this->panel27->Controls->Add(this->textBox181);
			this->panel27->Controls->Add(this->textBox182);
			this->panel27->Controls->Add(this->textBox183);
			this->panel27->Location = System::Drawing::Point(0, 38);
			this->panel27->Name = L"panel27";
			this->panel27->Size = System::Drawing::Size(1023, 40);
			this->panel27->TabIndex = 114;
			// 
			// textBox179
			// 
			this->textBox179->AccessibleDescription = L"";
			this->textBox179->AccessibleName = L"";
			this->textBox179->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox179->BackColor = System::Drawing::SystemColors::Control;
			this->textBox179->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox179->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox179->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox179->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox179->Location = System::Drawing::Point(862, 6);
			this->textBox179->Multiline = true;
			this->textBox179->Name = L"textBox179";
			this->textBox179->Size = System::Drawing::Size(63, 30);
			this->textBox179->TabIndex = 96;
			this->textBox179->Text = L"-";
			this->textBox179->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox180
			// 
			this->textBox180->AccessibleDescription = L"";
			this->textBox180->AccessibleName = L"";
			this->textBox180->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox180->BackColor = System::Drawing::SystemColors::Control;
			this->textBox180->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox180->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox180->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox180->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox180->Location = System::Drawing::Point(692, 6);
			this->textBox180->Multiline = true;
			this->textBox180->Name = L"textBox180";
			this->textBox180->Size = System::Drawing::Size(63, 30);
			this->textBox180->TabIndex = 95;
			this->textBox180->Text = L"-";
			this->textBox180->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox181
			// 
			this->textBox181->AccessibleDescription = L"";
			this->textBox181->AccessibleName = L"";
			this->textBox181->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox181->BackColor = System::Drawing::SystemColors::Control;
			this->textBox181->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox181->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox181->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox181->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox181->Location = System::Drawing::Point(502, 7);
			this->textBox181->Multiline = true;
			this->textBox181->Name = L"textBox181";
			this->textBox181->Size = System::Drawing::Size(63, 30);
			this->textBox181->TabIndex = 94;
			this->textBox181->Text = L"-";
			this->textBox181->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox182
			// 
			this->textBox182->AccessibleDescription = L"";
			this->textBox182->AccessibleName = L"";
			this->textBox182->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox182->BackColor = System::Drawing::SystemColors::Control;
			this->textBox182->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox182->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox182->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox182->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox182->Location = System::Drawing::Point(311, 7);
			this->textBox182->Multiline = true;
			this->textBox182->Name = L"textBox182";
			this->textBox182->Size = System::Drawing::Size(63, 30);
			this->textBox182->TabIndex = 93;
			this->textBox182->Text = L"-";
			this->textBox182->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox183
			// 
			this->textBox183->AccessibleDescription = L"";
			this->textBox183->AccessibleName = L"";
			this->textBox183->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox183->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox183->Font = (gcnew System::Drawing::Font(L"Corbel", 13.77391F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox183->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox183->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox183->Location = System::Drawing::Point(12, 5);
			this->textBox183->Multiline = true;
			this->textBox183->Name = L"textBox183";
			this->textBox183->ReadOnly = true;
			this->textBox183->Size = System::Drawing::Size(172, 30);
			this->textBox183->TabIndex = 92;
			this->textBox183->Text = L"-";
			this->textBox183->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox184
			// 
			this->textBox184->AccessibleDescription = L"";
			this->textBox184->AccessibleName = L"";
			this->textBox184->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox184->BackColor = System::Drawing::Color::White;
			this->textBox184->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox184->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox184->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox184->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox184->Location = System::Drawing::Point(862, 6);
			this->textBox184->Multiline = true;
			this->textBox184->Name = L"textBox184";
			this->textBox184->Size = System::Drawing::Size(63, 30);
			this->textBox184->TabIndex = 96;
			this->textBox184->Text = L"-";
			this->textBox184->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox185
			// 
			this->textBox185->AccessibleDescription = L"";
			this->textBox185->AccessibleName = L"";
			this->textBox185->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox185->BackColor = System::Drawing::Color::White;
			this->textBox185->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox185->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox185->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox185->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox185->Location = System::Drawing::Point(692, 6);
			this->textBox185->Multiline = true;
			this->textBox185->Name = L"textBox185";
			this->textBox185->Size = System::Drawing::Size(63, 30);
			this->textBox185->TabIndex = 95;
			this->textBox185->Text = L"-";
			this->textBox185->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox186
			// 
			this->textBox186->AccessibleDescription = L"";
			this->textBox186->AccessibleName = L"";
			this->textBox186->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox186->BackColor = System::Drawing::Color::White;
			this->textBox186->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox186->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox186->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox186->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox186->Location = System::Drawing::Point(502, 7);
			this->textBox186->Multiline = true;
			this->textBox186->Name = L"textBox186";
			this->textBox186->Size = System::Drawing::Size(63, 30);
			this->textBox186->TabIndex = 94;
			this->textBox186->Text = L"-";
			this->textBox186->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox187
			// 
			this->textBox187->AccessibleDescription = L"";
			this->textBox187->AccessibleName = L"";
			this->textBox187->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox187->BackColor = System::Drawing::Color::White;
			this->textBox187->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox187->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox187->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox187->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox187->Location = System::Drawing::Point(311, 7);
			this->textBox187->Multiline = true;
			this->textBox187->Name = L"textBox187";
			this->textBox187->Size = System::Drawing::Size(63, 30);
			this->textBox187->TabIndex = 93;
			this->textBox187->Text = L"-";
			this->textBox187->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox188
			// 
			this->textBox188->AccessibleDescription = L"";
			this->textBox188->AccessibleName = L"";
			this->textBox188->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox188->BackColor = System::Drawing::Color::White;
			this->textBox188->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox188->Font = (gcnew System::Drawing::Font(L"Corbel", 13.77391F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox188->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox188->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox188->Location = System::Drawing::Point(12, 5);
			this->textBox188->Multiline = true;
			this->textBox188->Name = L"textBox188";
			this->textBox188->ReadOnly = true;
			this->textBox188->Size = System::Drawing::Size(172, 30);
			this->textBox188->TabIndex = 92;
			this->textBox188->Text = L"-";
			this->textBox188->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel28
			// 
			this->panel28->Controls->Add(this->textBox189);
			this->panel28->Controls->Add(this->textBox190);
			this->panel28->Controls->Add(this->textBox191);
			this->panel28->Controls->Add(this->textBox192);
			this->panel28->Controls->Add(this->textBox193);
			this->panel28->Location = System::Drawing::Point(0, 38);
			this->panel28->Name = L"panel28";
			this->panel28->Size = System::Drawing::Size(1023, 40);
			this->panel28->TabIndex = 114;
			// 
			// textBox189
			// 
			this->textBox189->AccessibleDescription = L"";
			this->textBox189->AccessibleName = L"";
			this->textBox189->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox189->BackColor = System::Drawing::SystemColors::Control;
			this->textBox189->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox189->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox189->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox189->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox189->Location = System::Drawing::Point(862, 6);
			this->textBox189->Multiline = true;
			this->textBox189->Name = L"textBox189";
			this->textBox189->Size = System::Drawing::Size(63, 30);
			this->textBox189->TabIndex = 96;
			this->textBox189->Text = L"-";
			this->textBox189->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox190
			// 
			this->textBox190->AccessibleDescription = L"";
			this->textBox190->AccessibleName = L"";
			this->textBox190->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox190->BackColor = System::Drawing::SystemColors::Control;
			this->textBox190->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox190->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox190->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox190->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox190->Location = System::Drawing::Point(692, 6);
			this->textBox190->Multiline = true;
			this->textBox190->Name = L"textBox190";
			this->textBox190->Size = System::Drawing::Size(63, 30);
			this->textBox190->TabIndex = 95;
			this->textBox190->Text = L"-";
			this->textBox190->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox191
			// 
			this->textBox191->AccessibleDescription = L"";
			this->textBox191->AccessibleName = L"";
			this->textBox191->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox191->BackColor = System::Drawing::SystemColors::Control;
			this->textBox191->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox191->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox191->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox191->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox191->Location = System::Drawing::Point(502, 7);
			this->textBox191->Multiline = true;
			this->textBox191->Name = L"textBox191";
			this->textBox191->Size = System::Drawing::Size(63, 30);
			this->textBox191->TabIndex = 94;
			this->textBox191->Text = L"-";
			this->textBox191->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox192
			// 
			this->textBox192->AccessibleDescription = L"";
			this->textBox192->AccessibleName = L"";
			this->textBox192->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox192->BackColor = System::Drawing::SystemColors::Control;
			this->textBox192->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox192->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox192->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox192->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox192->Location = System::Drawing::Point(311, 7);
			this->textBox192->Multiline = true;
			this->textBox192->Name = L"textBox192";
			this->textBox192->Size = System::Drawing::Size(63, 30);
			this->textBox192->TabIndex = 93;
			this->textBox192->Text = L"-";
			this->textBox192->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox193
			// 
			this->textBox193->AccessibleDescription = L"";
			this->textBox193->AccessibleName = L"";
			this->textBox193->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox193->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox193->Font = (gcnew System::Drawing::Font(L"Corbel", 13.77391F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox193->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox193->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox193->Location = System::Drawing::Point(12, 5);
			this->textBox193->Multiline = true;
			this->textBox193->Name = L"textBox193";
			this->textBox193->ReadOnly = true;
			this->textBox193->Size = System::Drawing::Size(172, 30);
			this->textBox193->TabIndex = 92;
			this->textBox193->Text = L"-";
			this->textBox193->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox194
			// 
			this->textBox194->AccessibleDescription = L"";
			this->textBox194->AccessibleName = L"";
			this->textBox194->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox194->BackColor = System::Drawing::Color::White;
			this->textBox194->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox194->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox194->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox194->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox194->Location = System::Drawing::Point(862, 6);
			this->textBox194->Multiline = true;
			this->textBox194->Name = L"textBox194";
			this->textBox194->Size = System::Drawing::Size(63, 30);
			this->textBox194->TabIndex = 96;
			this->textBox194->Text = L"-";
			this->textBox194->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox195
			// 
			this->textBox195->AccessibleDescription = L"";
			this->textBox195->AccessibleName = L"";
			this->textBox195->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox195->BackColor = System::Drawing::Color::White;
			this->textBox195->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox195->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox195->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox195->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox195->Location = System::Drawing::Point(692, 6);
			this->textBox195->Multiline = true;
			this->textBox195->Name = L"textBox195";
			this->textBox195->Size = System::Drawing::Size(63, 30);
			this->textBox195->TabIndex = 95;
			this->textBox195->Text = L"-";
			this->textBox195->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox196
			// 
			this->textBox196->AccessibleDescription = L"";
			this->textBox196->AccessibleName = L"";
			this->textBox196->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox196->BackColor = System::Drawing::Color::White;
			this->textBox196->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox196->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox196->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox196->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox196->Location = System::Drawing::Point(502, 7);
			this->textBox196->Multiline = true;
			this->textBox196->Name = L"textBox196";
			this->textBox196->Size = System::Drawing::Size(63, 30);
			this->textBox196->TabIndex = 94;
			this->textBox196->Text = L"-";
			this->textBox196->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox197
			// 
			this->textBox197->AccessibleDescription = L"";
			this->textBox197->AccessibleName = L"";
			this->textBox197->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox197->BackColor = System::Drawing::Color::White;
			this->textBox197->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox197->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox197->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox197->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox197->Location = System::Drawing::Point(311, 7);
			this->textBox197->Multiline = true;
			this->textBox197->Name = L"textBox197";
			this->textBox197->Size = System::Drawing::Size(63, 30);
			this->textBox197->TabIndex = 93;
			this->textBox197->Text = L"-";
			this->textBox197->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox198
			// 
			this->textBox198->AccessibleDescription = L"";
			this->textBox198->AccessibleName = L"";
			this->textBox198->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox198->BackColor = System::Drawing::Color::White;
			this->textBox198->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox198->Font = (gcnew System::Drawing::Font(L"Corbel", 13.77391F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox198->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox198->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox198->Location = System::Drawing::Point(12, 5);
			this->textBox198->Multiline = true;
			this->textBox198->Name = L"textBox198";
			this->textBox198->ReadOnly = true;
			this->textBox198->Size = System::Drawing::Size(172, 30);
			this->textBox198->TabIndex = 92;
			this->textBox198->Text = L"-";
			this->textBox198->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox199
			// 
			this->textBox199->AccessibleDescription = L"";
			this->textBox199->AccessibleName = L"";
			this->textBox199->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox199->BackColor = System::Drawing::SystemColors::Control;
			this->textBox199->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox199->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox199->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox199->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox199->Location = System::Drawing::Point(862, 6);
			this->textBox199->Multiline = true;
			this->textBox199->Name = L"textBox199";
			this->textBox199->Size = System::Drawing::Size(63, 30);
			this->textBox199->TabIndex = 96;
			this->textBox199->Text = L"-";
			this->textBox199->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox200
			// 
			this->textBox200->AccessibleDescription = L"";
			this->textBox200->AccessibleName = L"";
			this->textBox200->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox200->BackColor = System::Drawing::SystemColors::Control;
			this->textBox200->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox200->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox200->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox200->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox200->Location = System::Drawing::Point(692, 6);
			this->textBox200->Multiline = true;
			this->textBox200->Name = L"textBox200";
			this->textBox200->Size = System::Drawing::Size(63, 30);
			this->textBox200->TabIndex = 95;
			this->textBox200->Text = L"-";
			this->textBox200->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox201
			// 
			this->textBox201->AccessibleDescription = L"";
			this->textBox201->AccessibleName = L"";
			this->textBox201->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox201->BackColor = System::Drawing::SystemColors::Control;
			this->textBox201->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox201->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox201->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox201->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox201->Location = System::Drawing::Point(502, 7);
			this->textBox201->Multiline = true;
			this->textBox201->Name = L"textBox201";
			this->textBox201->Size = System::Drawing::Size(63, 30);
			this->textBox201->TabIndex = 94;
			this->textBox201->Text = L"-";
			this->textBox201->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox202
			// 
			this->textBox202->AccessibleDescription = L"";
			this->textBox202->AccessibleName = L"";
			this->textBox202->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox202->BackColor = System::Drawing::SystemColors::Control;
			this->textBox202->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox202->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox202->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox202->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox202->Location = System::Drawing::Point(311, 7);
			this->textBox202->Multiline = true;
			this->textBox202->Name = L"textBox202";
			this->textBox202->Size = System::Drawing::Size(63, 30);
			this->textBox202->TabIndex = 93;
			this->textBox202->Text = L"-";
			this->textBox202->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox203
			// 
			this->textBox203->AccessibleDescription = L"";
			this->textBox203->AccessibleName = L"";
			this->textBox203->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox203->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox203->Font = (gcnew System::Drawing::Font(L"Corbel", 13.77391F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox203->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox203->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox203->Location = System::Drawing::Point(12, 5);
			this->textBox203->Multiline = true;
			this->textBox203->Name = L"textBox203";
			this->textBox203->ReadOnly = true;
			this->textBox203->Size = System::Drawing::Size(172, 30);
			this->textBox203->TabIndex = 92;
			this->textBox203->Text = L"-";
			this->textBox203->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox204
			// 
			this->textBox204->AccessibleDescription = L"";
			this->textBox204->AccessibleName = L"";
			this->textBox204->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox204->BackColor = System::Drawing::SystemColors::Control;
			this->textBox204->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox204->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox204->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox204->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox204->Location = System::Drawing::Point(862, 6);
			this->textBox204->Multiline = true;
			this->textBox204->Name = L"textBox204";
			this->textBox204->Size = System::Drawing::Size(63, 30);
			this->textBox204->TabIndex = 96;
			this->textBox204->Text = L"-";
			this->textBox204->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox205
			// 
			this->textBox205->AccessibleDescription = L"";
			this->textBox205->AccessibleName = L"";
			this->textBox205->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox205->BackColor = System::Drawing::SystemColors::Control;
			this->textBox205->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox205->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox205->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox205->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox205->Location = System::Drawing::Point(692, 6);
			this->textBox205->Multiline = true;
			this->textBox205->Name = L"textBox205";
			this->textBox205->Size = System::Drawing::Size(63, 30);
			this->textBox205->TabIndex = 95;
			this->textBox205->Text = L"-";
			this->textBox205->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox206
			// 
			this->textBox206->AccessibleDescription = L"";
			this->textBox206->AccessibleName = L"";
			this->textBox206->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox206->BackColor = System::Drawing::SystemColors::Control;
			this->textBox206->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox206->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox206->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox206->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox206->Location = System::Drawing::Point(502, 7);
			this->textBox206->Multiline = true;
			this->textBox206->Name = L"textBox206";
			this->textBox206->Size = System::Drawing::Size(63, 30);
			this->textBox206->TabIndex = 94;
			this->textBox206->Text = L"-";
			this->textBox206->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox207
			// 
			this->textBox207->AccessibleDescription = L"";
			this->textBox207->AccessibleName = L"";
			this->textBox207->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox207->BackColor = System::Drawing::SystemColors::Control;
			this->textBox207->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox207->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox207->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox207->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox207->Location = System::Drawing::Point(311, 7);
			this->textBox207->Multiline = true;
			this->textBox207->Name = L"textBox207";
			this->textBox207->Size = System::Drawing::Size(63, 30);
			this->textBox207->TabIndex = 93;
			this->textBox207->Text = L"-";
			this->textBox207->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox208
			// 
			this->textBox208->AccessibleDescription = L"";
			this->textBox208->AccessibleName = L"";
			this->textBox208->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox208->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox208->Font = (gcnew System::Drawing::Font(L"Corbel", 13.77391F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox208->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox208->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox208->Location = System::Drawing::Point(12, 5);
			this->textBox208->Multiline = true;
			this->textBox208->Name = L"textBox208";
			this->textBox208->ReadOnly = true;
			this->textBox208->Size = System::Drawing::Size(172, 30);
			this->textBox208->TabIndex = 92;
			this->textBox208->Text = L"-";
			this->textBox208->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox209
			// 
			this->textBox209->AccessibleDescription = L"";
			this->textBox209->AccessibleName = L"";
			this->textBox209->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox209->BackColor = System::Drawing::Color::White;
			this->textBox209->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox209->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox209->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox209->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox209->Location = System::Drawing::Point(862, 6);
			this->textBox209->Multiline = true;
			this->textBox209->Name = L"textBox209";
			this->textBox209->Size = System::Drawing::Size(63, 30);
			this->textBox209->TabIndex = 96;
			this->textBox209->Text = L"-";
			this->textBox209->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox210
			// 
			this->textBox210->AccessibleDescription = L"";
			this->textBox210->AccessibleName = L"";
			this->textBox210->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox210->BackColor = System::Drawing::Color::White;
			this->textBox210->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox210->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox210->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox210->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox210->Location = System::Drawing::Point(692, 6);
			this->textBox210->Multiline = true;
			this->textBox210->Name = L"textBox210";
			this->textBox210->Size = System::Drawing::Size(63, 30);
			this->textBox210->TabIndex = 95;
			this->textBox210->Text = L"-";
			this->textBox210->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox211
			// 
			this->textBox211->AccessibleDescription = L"";
			this->textBox211->AccessibleName = L"";
			this->textBox211->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox211->BackColor = System::Drawing::Color::White;
			this->textBox211->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox211->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox211->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox211->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox211->Location = System::Drawing::Point(502, 7);
			this->textBox211->Multiline = true;
			this->textBox211->Name = L"textBox211";
			this->textBox211->Size = System::Drawing::Size(63, 30);
			this->textBox211->TabIndex = 94;
			this->textBox211->Text = L"-";
			this->textBox211->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox212
			// 
			this->textBox212->AccessibleDescription = L"";
			this->textBox212->AccessibleName = L"";
			this->textBox212->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox212->BackColor = System::Drawing::Color::White;
			this->textBox212->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox212->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox212->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox212->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox212->Location = System::Drawing::Point(311, 7);
			this->textBox212->Multiline = true;
			this->textBox212->Name = L"textBox212";
			this->textBox212->Size = System::Drawing::Size(63, 30);
			this->textBox212->TabIndex = 93;
			this->textBox212->Text = L"-";
			this->textBox212->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox213
			// 
			this->textBox213->AccessibleDescription = L"";
			this->textBox213->AccessibleName = L"";
			this->textBox213->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox213->BackColor = System::Drawing::Color::White;
			this->textBox213->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox213->Font = (gcnew System::Drawing::Font(L"Corbel", 13.77391F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox213->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox213->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox213->Location = System::Drawing::Point(12, 10);
			this->textBox213->Multiline = true;
			this->textBox213->Name = L"textBox213";
			this->textBox213->ReadOnly = true;
			this->textBox213->Size = System::Drawing::Size(172, 30);
			this->textBox213->TabIndex = 92;
			this->textBox213->Text = L"-";
			this->textBox213->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel21
			// 
			this->panel21->Controls->Add(this->textBox174);
			this->panel21->Controls->Add(this->textBox175);
			this->panel21->Controls->Add(this->textBox176);
			this->panel21->Controls->Add(this->textBox177);
			this->panel21->Controls->Add(this->textBox178);
			this->panel21->Location = System::Drawing::Point(6, 385);
			this->panel21->Name = L"panel21";
			this->panel21->Size = System::Drawing::Size(1023, 40);
			this->panel21->TabIndex = 113;
			// 
			// textBox174
			// 
			this->textBox174->AccessibleDescription = L"";
			this->textBox174->AccessibleName = L"";
			this->textBox174->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox174->BackColor = System::Drawing::SystemColors::Control;
			this->textBox174->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox174->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox174->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox174->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox174->Location = System::Drawing::Point(862, 6);
			this->textBox174->Multiline = true;
			this->textBox174->Name = L"textBox174";
			this->textBox174->Size = System::Drawing::Size(63, 30);
			this->textBox174->TabIndex = 96;
			this->textBox174->Text = L"-";
			this->textBox174->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox175
			// 
			this->textBox175->AccessibleDescription = L"";
			this->textBox175->AccessibleName = L"";
			this->textBox175->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox175->BackColor = System::Drawing::SystemColors::Control;
			this->textBox175->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox175->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox175->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox175->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox175->Location = System::Drawing::Point(692, 6);
			this->textBox175->Multiline = true;
			this->textBox175->Name = L"textBox175";
			this->textBox175->Size = System::Drawing::Size(63, 30);
			this->textBox175->TabIndex = 95;
			this->textBox175->Text = L"-";
			this->textBox175->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox176
			// 
			this->textBox176->AccessibleDescription = L"";
			this->textBox176->AccessibleName = L"";
			this->textBox176->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox176->BackColor = System::Drawing::SystemColors::Control;
			this->textBox176->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox176->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox176->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox176->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox176->Location = System::Drawing::Point(502, 7);
			this->textBox176->Multiline = true;
			this->textBox176->Name = L"textBox176";
			this->textBox176->Size = System::Drawing::Size(63, 30);
			this->textBox176->TabIndex = 94;
			this->textBox176->Text = L"-";
			this->textBox176->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox177
			// 
			this->textBox177->AccessibleDescription = L"";
			this->textBox177->AccessibleName = L"";
			this->textBox177->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox177->BackColor = System::Drawing::SystemColors::Control;
			this->textBox177->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox177->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox177->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox177->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox177->Location = System::Drawing::Point(311, 7);
			this->textBox177->Multiline = true;
			this->textBox177->Name = L"textBox177";
			this->textBox177->Size = System::Drawing::Size(63, 30);
			this->textBox177->TabIndex = 93;
			this->textBox177->Text = L"-";
			this->textBox177->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox178
			// 
			this->textBox178->AccessibleDescription = L"";
			this->textBox178->AccessibleName = L"";
			this->textBox178->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox178->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox178->Font = (gcnew System::Drawing::Font(L"Corbel", 13.77391F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox178->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox178->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox178->Location = System::Drawing::Point(15, 5);
			this->textBox178->Multiline = true;
			this->textBox178->Name = L"textBox178";
			this->textBox178->ReadOnly = true;
			this->textBox178->Size = System::Drawing::Size(172, 30);
			this->textBox178->TabIndex = 92;
			this->textBox178->Text = L"-";
			this->textBox178->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel14
			// 
			this->panel14->BackColor = System::Drawing::Color::White;
			this->panel14->Controls->Add(this->panel15);
			this->panel14->Controls->Add(this->textBox144);
			this->panel14->Controls->Add(this->textBox145);
			this->panel14->Controls->Add(this->textBox146);
			this->panel14->Controls->Add(this->textBox147);
			this->panel14->Controls->Add(this->textBox148);
			this->panel14->Location = System::Drawing::Point(6, 343);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(1023, 40);
			this->panel14->TabIndex = 115;
			// 
			// panel15
			// 
			this->panel15->Controls->Add(this->panel16);
			this->panel15->Controls->Add(this->textBox139);
			this->panel15->Controls->Add(this->textBox140);
			this->panel15->Controls->Add(this->textBox141);
			this->panel15->Controls->Add(this->textBox142);
			this->panel15->Controls->Add(this->textBox143);
			this->panel15->Location = System::Drawing::Point(0, 38);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(1023, 40);
			this->panel15->TabIndex = 114;
			// 
			// panel16
			// 
			this->panel16->Controls->Add(this->panel17);
			this->panel16->Controls->Add(this->textBox169);
			this->panel16->Controls->Add(this->textBox170);
			this->panel16->Controls->Add(this->textBox171);
			this->panel16->Controls->Add(this->textBox172);
			this->panel16->Controls->Add(this->textBox173);
			this->panel16->Location = System::Drawing::Point(3, 1);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(1023, 40);
			this->panel16->TabIndex = 116;
			// 
			// panel17
			// 
			this->panel17->BackColor = System::Drawing::Color::White;
			this->panel17->Controls->Add(this->panel18);
			this->panel17->Controls->Add(this->panel20);
			this->panel17->Controls->Add(this->textBox164);
			this->panel17->Controls->Add(this->textBox165);
			this->panel17->Controls->Add(this->textBox166);
			this->panel17->Controls->Add(this->textBox167);
			this->panel17->Controls->Add(this->textBox168);
			this->panel17->Location = System::Drawing::Point(0, 38);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(1023, 40);
			this->panel17->TabIndex = 115;
			// 
			// panel18
			// 
			this->panel18->BackColor = System::Drawing::Color::White;
			this->panel18->Controls->Add(this->panel19);
			this->panel18->Controls->Add(this->textBox154);
			this->panel18->Controls->Add(this->textBox155);
			this->panel18->Controls->Add(this->textBox156);
			this->panel18->Controls->Add(this->textBox157);
			this->panel18->Controls->Add(this->textBox158);
			this->panel18->Location = System::Drawing::Point(0, 1);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(1023, 40);
			this->panel18->TabIndex = 115;
			// 
			// panel19
			// 
			this->panel19->Controls->Add(this->textBox149);
			this->panel19->Controls->Add(this->textBox150);
			this->panel19->Controls->Add(this->textBox151);
			this->panel19->Controls->Add(this->textBox152);
			this->panel19->Controls->Add(this->textBox153);
			this->panel19->Location = System::Drawing::Point(0, 38);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(1023, 40);
			this->panel19->TabIndex = 114;
			// 
			// textBox149
			// 
			this->textBox149->AccessibleDescription = L"";
			this->textBox149->AccessibleName = L"";
			this->textBox149->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox149->BackColor = System::Drawing::SystemColors::Control;
			this->textBox149->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox149->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox149->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox149->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox149->Location = System::Drawing::Point(862, 6);
			this->textBox149->Multiline = true;
			this->textBox149->Name = L"textBox149";
			this->textBox149->Size = System::Drawing::Size(63, 30);
			this->textBox149->TabIndex = 96;
			this->textBox149->Text = L"-";
			this->textBox149->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox150
			// 
			this->textBox150->AccessibleDescription = L"";
			this->textBox150->AccessibleName = L"";
			this->textBox150->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox150->BackColor = System::Drawing::SystemColors::Control;
			this->textBox150->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox150->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox150->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox150->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox150->Location = System::Drawing::Point(692, 6);
			this->textBox150->Multiline = true;
			this->textBox150->Name = L"textBox150";
			this->textBox150->Size = System::Drawing::Size(63, 30);
			this->textBox150->TabIndex = 95;
			this->textBox150->Text = L"-";
			this->textBox150->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox151
			// 
			this->textBox151->AccessibleDescription = L"";
			this->textBox151->AccessibleName = L"";
			this->textBox151->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox151->BackColor = System::Drawing::SystemColors::Control;
			this->textBox151->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox151->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox151->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox151->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox151->Location = System::Drawing::Point(502, 7);
			this->textBox151->Multiline = true;
			this->textBox151->Name = L"textBox151";
			this->textBox151->Size = System::Drawing::Size(63, 30);
			this->textBox151->TabIndex = 94;
			this->textBox151->Text = L"-";
			this->textBox151->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox152
			// 
			this->textBox152->AccessibleDescription = L"";
			this->textBox152->AccessibleName = L"";
			this->textBox152->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox152->BackColor = System::Drawing::SystemColors::Control;
			this->textBox152->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox152->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox152->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox152->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox152->Location = System::Drawing::Point(311, 7);
			this->textBox152->Multiline = true;
			this->textBox152->Name = L"textBox152";
			this->textBox152->Size = System::Drawing::Size(63, 30);
			this->textBox152->TabIndex = 93;
			this->textBox152->Text = L"-";
			this->textBox152->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox153
			// 
			this->textBox153->AccessibleDescription = L"";
			this->textBox153->AccessibleName = L"";
			this->textBox153->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox153->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox153->Font = (gcnew System::Drawing::Font(L"Corbel", 13.77391F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox153->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox153->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox153->Location = System::Drawing::Point(12, 5);
			this->textBox153->Multiline = true;
			this->textBox153->Name = L"textBox153";
			this->textBox153->ReadOnly = true;
			this->textBox153->Size = System::Drawing::Size(172, 30);
			this->textBox153->TabIndex = 92;
			this->textBox153->Text = L"-";
			this->textBox153->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox154
			// 
			this->textBox154->AccessibleDescription = L"";
			this->textBox154->AccessibleName = L"";
			this->textBox154->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox154->BackColor = System::Drawing::Color::White;
			this->textBox154->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox154->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox154->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox154->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox154->Location = System::Drawing::Point(862, 6);
			this->textBox154->Multiline = true;
			this->textBox154->Name = L"textBox154";
			this->textBox154->Size = System::Drawing::Size(63, 30);
			this->textBox154->TabIndex = 96;
			this->textBox154->Text = L"-";
			this->textBox154->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox155
			// 
			this->textBox155->AccessibleDescription = L"";
			this->textBox155->AccessibleName = L"";
			this->textBox155->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox155->BackColor = System::Drawing::Color::White;
			this->textBox155->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox155->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox155->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox155->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox155->Location = System::Drawing::Point(692, 6);
			this->textBox155->Multiline = true;
			this->textBox155->Name = L"textBox155";
			this->textBox155->Size = System::Drawing::Size(63, 30);
			this->textBox155->TabIndex = 95;
			this->textBox155->Text = L"-";
			this->textBox155->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox156
			// 
			this->textBox156->AccessibleDescription = L"";
			this->textBox156->AccessibleName = L"";
			this->textBox156->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox156->BackColor = System::Drawing::Color::White;
			this->textBox156->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox156->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox156->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox156->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox156->Location = System::Drawing::Point(502, 7);
			this->textBox156->Multiline = true;
			this->textBox156->Name = L"textBox156";
			this->textBox156->Size = System::Drawing::Size(63, 30);
			this->textBox156->TabIndex = 94;
			this->textBox156->Text = L"-";
			this->textBox156->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox157
			// 
			this->textBox157->AccessibleDescription = L"";
			this->textBox157->AccessibleName = L"";
			this->textBox157->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox157->BackColor = System::Drawing::Color::White;
			this->textBox157->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox157->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox157->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox157->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox157->Location = System::Drawing::Point(311, 7);
			this->textBox157->Multiline = true;
			this->textBox157->Name = L"textBox157";
			this->textBox157->Size = System::Drawing::Size(63, 30);
			this->textBox157->TabIndex = 93;
			this->textBox157->Text = L"-";
			this->textBox157->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox158
			// 
			this->textBox158->AccessibleDescription = L"";
			this->textBox158->AccessibleName = L"";
			this->textBox158->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox158->BackColor = System::Drawing::Color::White;
			this->textBox158->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox158->Font = (gcnew System::Drawing::Font(L"Corbel", 13.77391F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox158->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox158->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox158->Location = System::Drawing::Point(12, 5);
			this->textBox158->Multiline = true;
			this->textBox158->Name = L"textBox158";
			this->textBox158->ReadOnly = true;
			this->textBox158->Size = System::Drawing::Size(172, 30);
			this->textBox158->TabIndex = 92;
			this->textBox158->Text = L"-";
			this->textBox158->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel20
			// 
			this->panel20->Controls->Add(this->textBox159);
			this->panel20->Controls->Add(this->textBox160);
			this->panel20->Controls->Add(this->textBox161);
			this->panel20->Controls->Add(this->textBox162);
			this->panel20->Controls->Add(this->textBox163);
			this->panel20->Location = System::Drawing::Point(0, 38);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(1023, 40);
			this->panel20->TabIndex = 114;
			// 
			// textBox159
			// 
			this->textBox159->AccessibleDescription = L"";
			this->textBox159->AccessibleName = L"";
			this->textBox159->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox159->BackColor = System::Drawing::SystemColors::Control;
			this->textBox159->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox159->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox159->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox159->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox159->Location = System::Drawing::Point(862, 6);
			this->textBox159->Multiline = true;
			this->textBox159->Name = L"textBox159";
			this->textBox159->Size = System::Drawing::Size(63, 30);
			this->textBox159->TabIndex = 96;
			this->textBox159->Text = L"-";
			this->textBox159->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox160
			// 
			this->textBox160->AccessibleDescription = L"";
			this->textBox160->AccessibleName = L"";
			this->textBox160->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox160->BackColor = System::Drawing::SystemColors::Control;
			this->textBox160->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox160->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox160->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox160->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox160->Location = System::Drawing::Point(692, 6);
			this->textBox160->Multiline = true;
			this->textBox160->Name = L"textBox160";
			this->textBox160->Size = System::Drawing::Size(63, 30);
			this->textBox160->TabIndex = 95;
			this->textBox160->Text = L"-";
			this->textBox160->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox161
			// 
			this->textBox161->AccessibleDescription = L"";
			this->textBox161->AccessibleName = L"";
			this->textBox161->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox161->BackColor = System::Drawing::SystemColors::Control;
			this->textBox161->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox161->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox161->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox161->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox161->Location = System::Drawing::Point(502, 7);
			this->textBox161->Multiline = true;
			this->textBox161->Name = L"textBox161";
			this->textBox161->Size = System::Drawing::Size(63, 30);
			this->textBox161->TabIndex = 94;
			this->textBox161->Text = L"-";
			this->textBox161->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox162
			// 
			this->textBox162->AccessibleDescription = L"";
			this->textBox162->AccessibleName = L"";
			this->textBox162->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox162->BackColor = System::Drawing::SystemColors::Control;
			this->textBox162->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox162->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox162->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox162->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox162->Location = System::Drawing::Point(311, 7);
			this->textBox162->Multiline = true;
			this->textBox162->Name = L"textBox162";
			this->textBox162->Size = System::Drawing::Size(63, 30);
			this->textBox162->TabIndex = 93;
			this->textBox162->Text = L"-";
			this->textBox162->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox163
			// 
			this->textBox163->AccessibleDescription = L"";
			this->textBox163->AccessibleName = L"";
			this->textBox163->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox163->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox163->Font = (gcnew System::Drawing::Font(L"Corbel", 13.77391F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox163->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox163->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox163->Location = System::Drawing::Point(12, 5);
			this->textBox163->Multiline = true;
			this->textBox163->Name = L"textBox163";
			this->textBox163->ReadOnly = true;
			this->textBox163->Size = System::Drawing::Size(172, 30);
			this->textBox163->TabIndex = 92;
			this->textBox163->Text = L"-";
			this->textBox163->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox164
			// 
			this->textBox164->AccessibleDescription = L"";
			this->textBox164->AccessibleName = L"";
			this->textBox164->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox164->BackColor = System::Drawing::Color::White;
			this->textBox164->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox164->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox164->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox164->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox164->Location = System::Drawing::Point(862, 6);
			this->textBox164->Multiline = true;
			this->textBox164->Name = L"textBox164";
			this->textBox164->Size = System::Drawing::Size(63, 30);
			this->textBox164->TabIndex = 96;
			this->textBox164->Text = L"-";
			this->textBox164->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox165
			// 
			this->textBox165->AccessibleDescription = L"";
			this->textBox165->AccessibleName = L"";
			this->textBox165->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox165->BackColor = System::Drawing::Color::White;
			this->textBox165->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox165->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox165->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox165->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox165->Location = System::Drawing::Point(692, 6);
			this->textBox165->Multiline = true;
			this->textBox165->Name = L"textBox165";
			this->textBox165->Size = System::Drawing::Size(63, 30);
			this->textBox165->TabIndex = 95;
			this->textBox165->Text = L"-";
			this->textBox165->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox166
			// 
			this->textBox166->AccessibleDescription = L"";
			this->textBox166->AccessibleName = L"";
			this->textBox166->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox166->BackColor = System::Drawing::Color::White;
			this->textBox166->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox166->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox166->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox166->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox166->Location = System::Drawing::Point(502, 7);
			this->textBox166->Multiline = true;
			this->textBox166->Name = L"textBox166";
			this->textBox166->Size = System::Drawing::Size(63, 30);
			this->textBox166->TabIndex = 94;
			this->textBox166->Text = L"-";
			this->textBox166->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox167
			// 
			this->textBox167->AccessibleDescription = L"";
			this->textBox167->AccessibleName = L"";
			this->textBox167->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox167->BackColor = System::Drawing::Color::White;
			this->textBox167->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox167->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox167->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox167->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox167->Location = System::Drawing::Point(311, 7);
			this->textBox167->Multiline = true;
			this->textBox167->Name = L"textBox167";
			this->textBox167->Size = System::Drawing::Size(63, 30);
			this->textBox167->TabIndex = 93;
			this->textBox167->Text = L"-";
			this->textBox167->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox168
			// 
			this->textBox168->AccessibleDescription = L"";
			this->textBox168->AccessibleName = L"";
			this->textBox168->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox168->BackColor = System::Drawing::Color::White;
			this->textBox168->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox168->Font = (gcnew System::Drawing::Font(L"Corbel", 13.77391F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox168->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox168->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox168->Location = System::Drawing::Point(12, 5);
			this->textBox168->Multiline = true;
			this->textBox168->Name = L"textBox168";
			this->textBox168->ReadOnly = true;
			this->textBox168->Size = System::Drawing::Size(172, 30);
			this->textBox168->TabIndex = 92;
			this->textBox168->Text = L"-";
			this->textBox168->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox169
			// 
			this->textBox169->AccessibleDescription = L"";
			this->textBox169->AccessibleName = L"";
			this->textBox169->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox169->BackColor = System::Drawing::SystemColors::Control;
			this->textBox169->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox169->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox169->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox169->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox169->Location = System::Drawing::Point(862, 6);
			this->textBox169->Multiline = true;
			this->textBox169->Name = L"textBox169";
			this->textBox169->Size = System::Drawing::Size(63, 30);
			this->textBox169->TabIndex = 96;
			this->textBox169->Text = L"-";
			this->textBox169->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox170
			// 
			this->textBox170->AccessibleDescription = L"";
			this->textBox170->AccessibleName = L"";
			this->textBox170->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox170->BackColor = System::Drawing::SystemColors::Control;
			this->textBox170->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox170->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox170->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox170->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox170->Location = System::Drawing::Point(692, 6);
			this->textBox170->Multiline = true;
			this->textBox170->Name = L"textBox170";
			this->textBox170->Size = System::Drawing::Size(63, 30);
			this->textBox170->TabIndex = 95;
			this->textBox170->Text = L"-";
			this->textBox170->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox171
			// 
			this->textBox171->AccessibleDescription = L"";
			this->textBox171->AccessibleName = L"";
			this->textBox171->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox171->BackColor = System::Drawing::SystemColors::Control;
			this->textBox171->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox171->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox171->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox171->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox171->Location = System::Drawing::Point(502, 7);
			this->textBox171->Multiline = true;
			this->textBox171->Name = L"textBox171";
			this->textBox171->Size = System::Drawing::Size(63, 30);
			this->textBox171->TabIndex = 94;
			this->textBox171->Text = L"-";
			this->textBox171->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox172
			// 
			this->textBox172->AccessibleDescription = L"";
			this->textBox172->AccessibleName = L"";
			this->textBox172->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox172->BackColor = System::Drawing::SystemColors::Control;
			this->textBox172->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox172->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox172->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox172->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox172->Location = System::Drawing::Point(311, 7);
			this->textBox172->Multiline = true;
			this->textBox172->Name = L"textBox172";
			this->textBox172->Size = System::Drawing::Size(63, 30);
			this->textBox172->TabIndex = 93;
			this->textBox172->Text = L"-";
			this->textBox172->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox173
			// 
			this->textBox173->AccessibleDescription = L"";
			this->textBox173->AccessibleName = L"";
			this->textBox173->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox173->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox173->Font = (gcnew System::Drawing::Font(L"Corbel", 13.77391F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox173->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox173->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox173->Location = System::Drawing::Point(12, 5);
			this->textBox173->Multiline = true;
			this->textBox173->Name = L"textBox173";
			this->textBox173->ReadOnly = true;
			this->textBox173->Size = System::Drawing::Size(172, 30);
			this->textBox173->TabIndex = 92;
			this->textBox173->Text = L"-";
			this->textBox173->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox139
			// 
			this->textBox139->AccessibleDescription = L"";
			this->textBox139->AccessibleName = L"";
			this->textBox139->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox139->BackColor = System::Drawing::SystemColors::Control;
			this->textBox139->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox139->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox139->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox139->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox139->Location = System::Drawing::Point(862, 6);
			this->textBox139->Multiline = true;
			this->textBox139->Name = L"textBox139";
			this->textBox139->Size = System::Drawing::Size(63, 30);
			this->textBox139->TabIndex = 96;
			this->textBox139->Text = L"-";
			this->textBox139->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox140
			// 
			this->textBox140->AccessibleDescription = L"";
			this->textBox140->AccessibleName = L"";
			this->textBox140->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox140->BackColor = System::Drawing::SystemColors::Control;
			this->textBox140->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox140->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox140->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox140->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox140->Location = System::Drawing::Point(692, 6);
			this->textBox140->Multiline = true;
			this->textBox140->Name = L"textBox140";
			this->textBox140->Size = System::Drawing::Size(63, 30);
			this->textBox140->TabIndex = 95;
			this->textBox140->Text = L"-";
			this->textBox140->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox141
			// 
			this->textBox141->AccessibleDescription = L"";
			this->textBox141->AccessibleName = L"";
			this->textBox141->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox141->BackColor = System::Drawing::SystemColors::Control;
			this->textBox141->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox141->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox141->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox141->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox141->Location = System::Drawing::Point(502, 7);
			this->textBox141->Multiline = true;
			this->textBox141->Name = L"textBox141";
			this->textBox141->Size = System::Drawing::Size(63, 30);
			this->textBox141->TabIndex = 94;
			this->textBox141->Text = L"-";
			this->textBox141->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox142
			// 
			this->textBox142->AccessibleDescription = L"";
			this->textBox142->AccessibleName = L"";
			this->textBox142->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox142->BackColor = System::Drawing::SystemColors::Control;
			this->textBox142->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox142->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox142->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox142->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox142->Location = System::Drawing::Point(311, 7);
			this->textBox142->Multiline = true;
			this->textBox142->Name = L"textBox142";
			this->textBox142->Size = System::Drawing::Size(63, 30);
			this->textBox142->TabIndex = 93;
			this->textBox142->Text = L"-";
			this->textBox142->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox143
			// 
			this->textBox143->AccessibleDescription = L"";
			this->textBox143->AccessibleName = L"";
			this->textBox143->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox143->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox143->Font = (gcnew System::Drawing::Font(L"Corbel", 13.77391F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox143->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox143->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox143->Location = System::Drawing::Point(12, 5);
			this->textBox143->Multiline = true;
			this->textBox143->Name = L"textBox143";
			this->textBox143->ReadOnly = true;
			this->textBox143->Size = System::Drawing::Size(172, 30);
			this->textBox143->TabIndex = 92;
			this->textBox143->Text = L"-";
			this->textBox143->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox144
			// 
			this->textBox144->AccessibleDescription = L"";
			this->textBox144->AccessibleName = L"";
			this->textBox144->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox144->BackColor = System::Drawing::Color::White;
			this->textBox144->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox144->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox144->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox144->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox144->Location = System::Drawing::Point(862, 6);
			this->textBox144->Multiline = true;
			this->textBox144->Name = L"textBox144";
			this->textBox144->Size = System::Drawing::Size(63, 30);
			this->textBox144->TabIndex = 96;
			this->textBox144->Text = L"-";
			this->textBox144->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox145
			// 
			this->textBox145->AccessibleDescription = L"";
			this->textBox145->AccessibleName = L"";
			this->textBox145->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox145->BackColor = System::Drawing::Color::White;
			this->textBox145->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox145->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox145->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox145->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox145->Location = System::Drawing::Point(692, 6);
			this->textBox145->Multiline = true;
			this->textBox145->Name = L"textBox145";
			this->textBox145->Size = System::Drawing::Size(63, 30);
			this->textBox145->TabIndex = 95;
			this->textBox145->Text = L"-";
			this->textBox145->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox146
			// 
			this->textBox146->AccessibleDescription = L"";
			this->textBox146->AccessibleName = L"";
			this->textBox146->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox146->BackColor = System::Drawing::Color::White;
			this->textBox146->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox146->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox146->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox146->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox146->Location = System::Drawing::Point(502, 7);
			this->textBox146->Multiline = true;
			this->textBox146->Name = L"textBox146";
			this->textBox146->Size = System::Drawing::Size(63, 30);
			this->textBox146->TabIndex = 94;
			this->textBox146->Text = L"-";
			this->textBox146->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox147
			// 
			this->textBox147->AccessibleDescription = L"";
			this->textBox147->AccessibleName = L"";
			this->textBox147->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox147->BackColor = System::Drawing::Color::White;
			this->textBox147->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox147->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox147->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox147->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox147->Location = System::Drawing::Point(311, 7);
			this->textBox147->Multiline = true;
			this->textBox147->Name = L"textBox147";
			this->textBox147->Size = System::Drawing::Size(63, 30);
			this->textBox147->TabIndex = 93;
			this->textBox147->Text = L"-";
			this->textBox147->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox148
			// 
			this->textBox148->AccessibleDescription = L"";
			this->textBox148->AccessibleName = L"";
			this->textBox148->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox148->BackColor = System::Drawing::Color::White;
			this->textBox148->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox148->Font = (gcnew System::Drawing::Font(L"Corbel", 13.77391F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox148->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox148->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox148->Location = System::Drawing::Point(12, 5);
			this->textBox148->Multiline = true;
			this->textBox148->Name = L"textBox148";
			this->textBox148->ReadOnly = true;
			this->textBox148->Size = System::Drawing::Size(172, 30);
			this->textBox148->TabIndex = 92;
			this->textBox148->Text = L"-";
			this->textBox148->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel9
			// 
			this->panel9->Controls->Add(this->panel10);
			this->panel9->Controls->Add(this->textBox114);
			this->panel9->Controls->Add(this->textBox115);
			this->panel9->Controls->Add(this->textBox116);
			this->panel9->Controls->Add(this->textBox117);
			this->panel9->Controls->Add(this->textBox118);
			this->panel9->Location = System::Drawing::Point(6, 306);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(1023, 40);
			this->panel9->TabIndex = 114;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::White;
			this->panel10->Controls->Add(this->panel12);
			this->panel10->Controls->Add(this->panel11);
			this->panel10->Controls->Add(this->textBox124);
			this->panel10->Controls->Add(this->textBox125);
			this->panel10->Controls->Add(this->textBox126);
			this->panel10->Controls->Add(this->textBox127);
			this->panel10->Controls->Add(this->textBox128);
			this->panel10->Location = System::Drawing::Point(0, 38);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(1023, 40);
			this->panel10->TabIndex = 115;
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::White;
			this->panel12->Controls->Add(this->panel13);
			this->panel12->Controls->Add(this->textBox134);
			this->panel12->Controls->Add(this->textBox135);
			this->panel12->Controls->Add(this->textBox136);
			this->panel12->Controls->Add(this->textBox137);
			this->panel12->Controls->Add(this->textBox138);
			this->panel12->Location = System::Drawing::Point(0, 1);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(1023, 40);
			this->panel12->TabIndex = 115;
			// 
			// panel13
			// 
			this->panel13->Controls->Add(this->textBox129);
			this->panel13->Controls->Add(this->textBox130);
			this->panel13->Controls->Add(this->textBox131);
			this->panel13->Controls->Add(this->textBox132);
			this->panel13->Controls->Add(this->textBox133);
			this->panel13->Location = System::Drawing::Point(0, 38);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(1023, 40);
			this->panel13->TabIndex = 114;
			// 
			// textBox129
			// 
			this->textBox129->AccessibleDescription = L"";
			this->textBox129->AccessibleName = L"";
			this->textBox129->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox129->BackColor = System::Drawing::SystemColors::Control;
			this->textBox129->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox129->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox129->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox129->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox129->Location = System::Drawing::Point(862, 6);
			this->textBox129->Multiline = true;
			this->textBox129->Name = L"textBox129";
			this->textBox129->Size = System::Drawing::Size(63, 30);
			this->textBox129->TabIndex = 96;
			this->textBox129->Text = L"-";
			this->textBox129->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox130
			// 
			this->textBox130->AccessibleDescription = L"";
			this->textBox130->AccessibleName = L"";
			this->textBox130->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox130->BackColor = System::Drawing::SystemColors::Control;
			this->textBox130->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox130->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox130->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox130->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox130->Location = System::Drawing::Point(692, 6);
			this->textBox130->Multiline = true;
			this->textBox130->Name = L"textBox130";
			this->textBox130->Size = System::Drawing::Size(63, 30);
			this->textBox130->TabIndex = 95;
			this->textBox130->Text = L"-";
			this->textBox130->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox131
			// 
			this->textBox131->AccessibleDescription = L"";
			this->textBox131->AccessibleName = L"";
			this->textBox131->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox131->BackColor = System::Drawing::SystemColors::Control;
			this->textBox131->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox131->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox131->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox131->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox131->Location = System::Drawing::Point(502, 7);
			this->textBox131->Multiline = true;
			this->textBox131->Name = L"textBox131";
			this->textBox131->Size = System::Drawing::Size(63, 30);
			this->textBox131->TabIndex = 94;
			this->textBox131->Text = L"-";
			this->textBox131->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox132
			// 
			this->textBox132->AccessibleDescription = L"";
			this->textBox132->AccessibleName = L"";
			this->textBox132->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox132->BackColor = System::Drawing::SystemColors::Control;
			this->textBox132->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox132->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox132->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox132->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox132->Location = System::Drawing::Point(311, 7);
			this->textBox132->Multiline = true;
			this->textBox132->Name = L"textBox132";
			this->textBox132->Size = System::Drawing::Size(63, 30);
			this->textBox132->TabIndex = 93;
			this->textBox132->Text = L"-";
			this->textBox132->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox133
			// 
			this->textBox133->AccessibleDescription = L"";
			this->textBox133->AccessibleName = L"";
			this->textBox133->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox133->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox133->Font = (gcnew System::Drawing::Font(L"Corbel", 13.77391F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox133->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox133->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox133->Location = System::Drawing::Point(12, 5);
			this->textBox133->Multiline = true;
			this->textBox133->Name = L"textBox133";
			this->textBox133->ReadOnly = true;
			this->textBox133->Size = System::Drawing::Size(172, 30);
			this->textBox133->TabIndex = 92;
			this->textBox133->Text = L"-";
			this->textBox133->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox134
			// 
			this->textBox134->AccessibleDescription = L"";
			this->textBox134->AccessibleName = L"";
			this->textBox134->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox134->BackColor = System::Drawing::Color::White;
			this->textBox134->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox134->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox134->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox134->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox134->Location = System::Drawing::Point(862, 6);
			this->textBox134->Multiline = true;
			this->textBox134->Name = L"textBox134";
			this->textBox134->Size = System::Drawing::Size(63, 30);
			this->textBox134->TabIndex = 96;
			this->textBox134->Text = L"-";
			this->textBox134->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox135
			// 
			this->textBox135->AccessibleDescription = L"";
			this->textBox135->AccessibleName = L"";
			this->textBox135->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox135->BackColor = System::Drawing::Color::White;
			this->textBox135->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox135->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox135->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox135->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox135->Location = System::Drawing::Point(692, 6);
			this->textBox135->Multiline = true;
			this->textBox135->Name = L"textBox135";
			this->textBox135->Size = System::Drawing::Size(63, 30);
			this->textBox135->TabIndex = 95;
			this->textBox135->Text = L"-";
			this->textBox135->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox136
			// 
			this->textBox136->AccessibleDescription = L"";
			this->textBox136->AccessibleName = L"";
			this->textBox136->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox136->BackColor = System::Drawing::Color::White;
			this->textBox136->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox136->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox136->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox136->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox136->Location = System::Drawing::Point(502, 7);
			this->textBox136->Multiline = true;
			this->textBox136->Name = L"textBox136";
			this->textBox136->Size = System::Drawing::Size(63, 30);
			this->textBox136->TabIndex = 94;
			this->textBox136->Text = L"-";
			this->textBox136->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox137
			// 
			this->textBox137->AccessibleDescription = L"";
			this->textBox137->AccessibleName = L"";
			this->textBox137->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox137->BackColor = System::Drawing::Color::White;
			this->textBox137->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox137->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox137->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox137->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox137->Location = System::Drawing::Point(311, 7);
			this->textBox137->Multiline = true;
			this->textBox137->Name = L"textBox137";
			this->textBox137->Size = System::Drawing::Size(63, 30);
			this->textBox137->TabIndex = 93;
			this->textBox137->Text = L"-";
			this->textBox137->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox138
			// 
			this->textBox138->AccessibleDescription = L"";
			this->textBox138->AccessibleName = L"";
			this->textBox138->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox138->BackColor = System::Drawing::Color::White;
			this->textBox138->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox138->Font = (gcnew System::Drawing::Font(L"Corbel", 13.77391F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox138->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox138->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox138->Location = System::Drawing::Point(12, 5);
			this->textBox138->Multiline = true;
			this->textBox138->Name = L"textBox138";
			this->textBox138->ReadOnly = true;
			this->textBox138->Size = System::Drawing::Size(172, 30);
			this->textBox138->TabIndex = 92;
			this->textBox138->Text = L"-";
			this->textBox138->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel11
			// 
			this->panel11->Controls->Add(this->textBox119);
			this->panel11->Controls->Add(this->textBox120);
			this->panel11->Controls->Add(this->textBox121);
			this->panel11->Controls->Add(this->textBox122);
			this->panel11->Controls->Add(this->textBox123);
			this->panel11->Location = System::Drawing::Point(0, 38);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(1023, 40);
			this->panel11->TabIndex = 114;
			// 
			// textBox119
			// 
			this->textBox119->AccessibleDescription = L"";
			this->textBox119->AccessibleName = L"";
			this->textBox119->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox119->BackColor = System::Drawing::SystemColors::Control;
			this->textBox119->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox119->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox119->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox119->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox119->Location = System::Drawing::Point(862, 6);
			this->textBox119->Multiline = true;
			this->textBox119->Name = L"textBox119";
			this->textBox119->Size = System::Drawing::Size(63, 30);
			this->textBox119->TabIndex = 96;
			this->textBox119->Text = L"-";
			this->textBox119->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox120
			// 
			this->textBox120->AccessibleDescription = L"";
			this->textBox120->AccessibleName = L"";
			this->textBox120->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox120->BackColor = System::Drawing::SystemColors::Control;
			this->textBox120->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox120->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox120->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox120->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox120->Location = System::Drawing::Point(692, 6);
			this->textBox120->Multiline = true;
			this->textBox120->Name = L"textBox120";
			this->textBox120->Size = System::Drawing::Size(63, 30);
			this->textBox120->TabIndex = 95;
			this->textBox120->Text = L"-";
			this->textBox120->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox121
			// 
			this->textBox121->AccessibleDescription = L"";
			this->textBox121->AccessibleName = L"";
			this->textBox121->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox121->BackColor = System::Drawing::SystemColors::Control;
			this->textBox121->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox121->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox121->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox121->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox121->Location = System::Drawing::Point(502, 7);
			this->textBox121->Multiline = true;
			this->textBox121->Name = L"textBox121";
			this->textBox121->Size = System::Drawing::Size(63, 30);
			this->textBox121->TabIndex = 94;
			this->textBox121->Text = L"-";
			this->textBox121->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox122
			// 
			this->textBox122->AccessibleDescription = L"";
			this->textBox122->AccessibleName = L"";
			this->textBox122->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox122->BackColor = System::Drawing::SystemColors::Control;
			this->textBox122->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox122->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox122->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox122->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox122->Location = System::Drawing::Point(311, 7);
			this->textBox122->Multiline = true;
			this->textBox122->Name = L"textBox122";
			this->textBox122->Size = System::Drawing::Size(63, 30);
			this->textBox122->TabIndex = 93;
			this->textBox122->Text = L"-";
			this->textBox122->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox123
			// 
			this->textBox123->AccessibleDescription = L"";
			this->textBox123->AccessibleName = L"";
			this->textBox123->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox123->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox123->Font = (gcnew System::Drawing::Font(L"Corbel", 13.77391F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox123->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox123->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox123->Location = System::Drawing::Point(12, 5);
			this->textBox123->Multiline = true;
			this->textBox123->Name = L"textBox123";
			this->textBox123->ReadOnly = true;
			this->textBox123->Size = System::Drawing::Size(172, 30);
			this->textBox123->TabIndex = 92;
			this->textBox123->Text = L"-";
			this->textBox123->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox124
			// 
			this->textBox124->AccessibleDescription = L"";
			this->textBox124->AccessibleName = L"";
			this->textBox124->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox124->BackColor = System::Drawing::Color::White;
			this->textBox124->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox124->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox124->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox124->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox124->Location = System::Drawing::Point(862, 6);
			this->textBox124->Multiline = true;
			this->textBox124->Name = L"textBox124";
			this->textBox124->Size = System::Drawing::Size(63, 30);
			this->textBox124->TabIndex = 96;
			this->textBox124->Text = L"-";
			this->textBox124->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox125
			// 
			this->textBox125->AccessibleDescription = L"";
			this->textBox125->AccessibleName = L"";
			this->textBox125->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox125->BackColor = System::Drawing::Color::White;
			this->textBox125->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox125->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox125->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox125->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox125->Location = System::Drawing::Point(692, 6);
			this->textBox125->Multiline = true;
			this->textBox125->Name = L"textBox125";
			this->textBox125->Size = System::Drawing::Size(63, 30);
			this->textBox125->TabIndex = 95;
			this->textBox125->Text = L"-";
			this->textBox125->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox126
			// 
			this->textBox126->AccessibleDescription = L"";
			this->textBox126->AccessibleName = L"";
			this->textBox126->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox126->BackColor = System::Drawing::Color::White;
			this->textBox126->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox126->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox126->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox126->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox126->Location = System::Drawing::Point(502, 7);
			this->textBox126->Multiline = true;
			this->textBox126->Name = L"textBox126";
			this->textBox126->Size = System::Drawing::Size(63, 30);
			this->textBox126->TabIndex = 94;
			this->textBox126->Text = L"-";
			this->textBox126->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox127
			// 
			this->textBox127->AccessibleDescription = L"";
			this->textBox127->AccessibleName = L"";
			this->textBox127->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox127->BackColor = System::Drawing::Color::White;
			this->textBox127->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox127->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox127->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox127->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox127->Location = System::Drawing::Point(311, 7);
			this->textBox127->Multiline = true;
			this->textBox127->Name = L"textBox127";
			this->textBox127->Size = System::Drawing::Size(63, 30);
			this->textBox127->TabIndex = 93;
			this->textBox127->Text = L"-";
			this->textBox127->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox128
			// 
			this->textBox128->AccessibleDescription = L"";
			this->textBox128->AccessibleName = L"";
			this->textBox128->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox128->BackColor = System::Drawing::Color::White;
			this->textBox128->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox128->Font = (gcnew System::Drawing::Font(L"Corbel", 13.77391F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox128->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox128->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox128->Location = System::Drawing::Point(12, 5);
			this->textBox128->Multiline = true;
			this->textBox128->Name = L"textBox128";
			this->textBox128->ReadOnly = true;
			this->textBox128->Size = System::Drawing::Size(172, 30);
			this->textBox128->TabIndex = 92;
			this->textBox128->Text = L"-";
			this->textBox128->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox114
			// 
			this->textBox114->AccessibleDescription = L"";
			this->textBox114->AccessibleName = L"";
			this->textBox114->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox114->BackColor = System::Drawing::SystemColors::Control;
			this->textBox114->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox114->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox114->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox114->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox114->Location = System::Drawing::Point(862, 6);
			this->textBox114->Multiline = true;
			this->textBox114->Name = L"textBox114";
			this->textBox114->Size = System::Drawing::Size(63, 30);
			this->textBox114->TabIndex = 96;
			this->textBox114->Text = L"-";
			this->textBox114->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox115
			// 
			this->textBox115->AccessibleDescription = L"";
			this->textBox115->AccessibleName = L"";
			this->textBox115->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox115->BackColor = System::Drawing::SystemColors::Control;
			this->textBox115->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox115->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox115->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox115->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox115->Location = System::Drawing::Point(692, 6);
			this->textBox115->Multiline = true;
			this->textBox115->Name = L"textBox115";
			this->textBox115->Size = System::Drawing::Size(63, 30);
			this->textBox115->TabIndex = 95;
			this->textBox115->Text = L"-";
			this->textBox115->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox116
			// 
			this->textBox116->AccessibleDescription = L"";
			this->textBox116->AccessibleName = L"";
			this->textBox116->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox116->BackColor = System::Drawing::SystemColors::Control;
			this->textBox116->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox116->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox116->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox116->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox116->Location = System::Drawing::Point(502, 7);
			this->textBox116->Multiline = true;
			this->textBox116->Name = L"textBox116";
			this->textBox116->Size = System::Drawing::Size(63, 30);
			this->textBox116->TabIndex = 94;
			this->textBox116->Text = L"-";
			this->textBox116->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox117
			// 
			this->textBox117->AccessibleDescription = L"";
			this->textBox117->AccessibleName = L"";
			this->textBox117->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox117->BackColor = System::Drawing::SystemColors::Control;
			this->textBox117->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox117->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox117->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox117->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox117->Location = System::Drawing::Point(311, 7);
			this->textBox117->Multiline = true;
			this->textBox117->Name = L"textBox117";
			this->textBox117->Size = System::Drawing::Size(63, 30);
			this->textBox117->TabIndex = 93;
			this->textBox117->Text = L"-";
			this->textBox117->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox118
			// 
			this->textBox118->AccessibleDescription = L"";
			this->textBox118->AccessibleName = L"";
			this->textBox118->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox118->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox118->Font = (gcnew System::Drawing::Font(L"Corbel", 13.77391F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox118->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox118->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox118->Location = System::Drawing::Point(12, 5);
			this->textBox118->Multiline = true;
			this->textBox118->Name = L"textBox118";
			this->textBox118->ReadOnly = true;
			this->textBox118->Size = System::Drawing::Size(172, 30);
			this->textBox118->TabIndex = 92;
			this->textBox118->Text = L"-";
			this->textBox118->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::White;
			this->panel7->Controls->Add(this->panel8);
			this->panel7->Controls->Add(this->textBox104);
			this->panel7->Controls->Add(this->textBox105);
			this->panel7->Controls->Add(this->textBox106);
			this->panel7->Controls->Add(this->textBox107);
			this->panel7->Controls->Add(this->textBox108);
			this->panel7->Location = System::Drawing::Point(6, 268);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(1023, 40);
			this->panel7->TabIndex = 114;
			// 
			// panel8
			// 
			this->panel8->Controls->Add(this->textBox109);
			this->panel8->Controls->Add(this->textBox110);
			this->panel8->Controls->Add(this->textBox111);
			this->panel8->Controls->Add(this->textBox112);
			this->panel8->Controls->Add(this->textBox113);
			this->panel8->Location = System::Drawing::Point(0, 38);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(1023, 40);
			this->panel8->TabIndex = 114;
			// 
			// textBox109
			// 
			this->textBox109->AccessibleDescription = L"";
			this->textBox109->AccessibleName = L"";
			this->textBox109->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox109->BackColor = System::Drawing::SystemColors::Control;
			this->textBox109->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox109->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox109->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox109->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox109->Location = System::Drawing::Point(862, 6);
			this->textBox109->Multiline = true;
			this->textBox109->Name = L"textBox109";
			this->textBox109->Size = System::Drawing::Size(63, 30);
			this->textBox109->TabIndex = 96;
			this->textBox109->Text = L"-";
			this->textBox109->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox110
			// 
			this->textBox110->AccessibleDescription = L"";
			this->textBox110->AccessibleName = L"";
			this->textBox110->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox110->BackColor = System::Drawing::SystemColors::Control;
			this->textBox110->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox110->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox110->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox110->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox110->Location = System::Drawing::Point(692, 6);
			this->textBox110->Multiline = true;
			this->textBox110->Name = L"textBox110";
			this->textBox110->Size = System::Drawing::Size(63, 30);
			this->textBox110->TabIndex = 95;
			this->textBox110->Text = L"-";
			this->textBox110->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox111
			// 
			this->textBox111->AccessibleDescription = L"";
			this->textBox111->AccessibleName = L"";
			this->textBox111->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox111->BackColor = System::Drawing::SystemColors::Control;
			this->textBox111->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox111->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox111->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox111->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox111->Location = System::Drawing::Point(502, 7);
			this->textBox111->Multiline = true;
			this->textBox111->Name = L"textBox111";
			this->textBox111->Size = System::Drawing::Size(63, 30);
			this->textBox111->TabIndex = 94;
			this->textBox111->Text = L"-";
			this->textBox111->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox112
			// 
			this->textBox112->AccessibleDescription = L"";
			this->textBox112->AccessibleName = L"";
			this->textBox112->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox112->BackColor = System::Drawing::SystemColors::Control;
			this->textBox112->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox112->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox112->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox112->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox112->Location = System::Drawing::Point(311, 7);
			this->textBox112->Multiline = true;
			this->textBox112->Name = L"textBox112";
			this->textBox112->Size = System::Drawing::Size(63, 30);
			this->textBox112->TabIndex = 93;
			this->textBox112->Text = L"-";
			this->textBox112->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox113
			// 
			this->textBox113->AccessibleDescription = L"";
			this->textBox113->AccessibleName = L"";
			this->textBox113->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox113->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox113->Font = (gcnew System::Drawing::Font(L"Corbel", 13.77391F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox113->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox113->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox113->Location = System::Drawing::Point(12, 5);
			this->textBox113->Multiline = true;
			this->textBox113->Name = L"textBox113";
			this->textBox113->ReadOnly = true;
			this->textBox113->Size = System::Drawing::Size(172, 30);
			this->textBox113->TabIndex = 92;
			this->textBox113->Text = L"-";
			this->textBox113->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox104
			// 
			this->textBox104->AccessibleDescription = L"";
			this->textBox104->AccessibleName = L"";
			this->textBox104->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox104->BackColor = System::Drawing::Color::White;
			this->textBox104->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox104->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox104->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox104->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox104->Location = System::Drawing::Point(862, 6);
			this->textBox104->Multiline = true;
			this->textBox104->Name = L"textBox104";
			this->textBox104->Size = System::Drawing::Size(63, 30);
			this->textBox104->TabIndex = 96;
			this->textBox104->Text = L"-";
			this->textBox104->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox105
			// 
			this->textBox105->AccessibleDescription = L"";
			this->textBox105->AccessibleName = L"";
			this->textBox105->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox105->BackColor = System::Drawing::Color::White;
			this->textBox105->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox105->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox105->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox105->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox105->Location = System::Drawing::Point(692, 6);
			this->textBox105->Multiline = true;
			this->textBox105->Name = L"textBox105";
			this->textBox105->Size = System::Drawing::Size(63, 30);
			this->textBox105->TabIndex = 95;
			this->textBox105->Text = L"-";
			this->textBox105->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox106
			// 
			this->textBox106->AccessibleDescription = L"";
			this->textBox106->AccessibleName = L"";
			this->textBox106->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox106->BackColor = System::Drawing::Color::White;
			this->textBox106->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox106->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox106->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox106->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox106->Location = System::Drawing::Point(502, 7);
			this->textBox106->Multiline = true;
			this->textBox106->Name = L"textBox106";
			this->textBox106->Size = System::Drawing::Size(63, 30);
			this->textBox106->TabIndex = 94;
			this->textBox106->Text = L"-";
			this->textBox106->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox107
			// 
			this->textBox107->AccessibleDescription = L"";
			this->textBox107->AccessibleName = L"";
			this->textBox107->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox107->BackColor = System::Drawing::Color::White;
			this->textBox107->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox107->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox107->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox107->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox107->Location = System::Drawing::Point(311, 7);
			this->textBox107->Multiline = true;
			this->textBox107->Name = L"textBox107";
			this->textBox107->Size = System::Drawing::Size(63, 30);
			this->textBox107->TabIndex = 93;
			this->textBox107->Text = L"-";
			this->textBox107->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox108
			// 
			this->textBox108->AccessibleDescription = L"";
			this->textBox108->AccessibleName = L"";
			this->textBox108->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox108->BackColor = System::Drawing::Color::White;
			this->textBox108->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox108->Font = (gcnew System::Drawing::Font(L"Corbel", 13.77391F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox108->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox108->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox108->Location = System::Drawing::Point(12, 5);
			this->textBox108->Multiline = true;
			this->textBox108->Name = L"textBox108";
			this->textBox108->ReadOnly = true;
			this->textBox108->Size = System::Drawing::Size(172, 30);
			this->textBox108->TabIndex = 92;
			this->textBox108->Text = L"-";
			this->textBox108->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->textBox99);
			this->panel6->Controls->Add(this->textBox100);
			this->panel6->Controls->Add(this->textBox101);
			this->panel6->Controls->Add(this->textBox102);
			this->panel6->Controls->Add(this->textBox103);
			this->panel6->Location = System::Drawing::Point(6, 227);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(1023, 40);
			this->panel6->TabIndex = 113;
			// 
			// textBox99
			// 
			this->textBox99->AccessibleDescription = L"";
			this->textBox99->AccessibleName = L"";
			this->textBox99->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox99->BackColor = System::Drawing::SystemColors::Control;
			this->textBox99->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox99->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox99->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox99->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox99->Location = System::Drawing::Point(862, 6);
			this->textBox99->Multiline = true;
			this->textBox99->Name = L"textBox99";
			this->textBox99->Size = System::Drawing::Size(63, 30);
			this->textBox99->TabIndex = 96;
			this->textBox99->Text = L"-";
			this->textBox99->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox100
			// 
			this->textBox100->AccessibleDescription = L"";
			this->textBox100->AccessibleName = L"";
			this->textBox100->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox100->BackColor = System::Drawing::SystemColors::Control;
			this->textBox100->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox100->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox100->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox100->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox100->Location = System::Drawing::Point(692, 6);
			this->textBox100->Multiline = true;
			this->textBox100->Name = L"textBox100";
			this->textBox100->Size = System::Drawing::Size(63, 30);
			this->textBox100->TabIndex = 95;
			this->textBox100->Text = L"-";
			this->textBox100->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox101
			// 
			this->textBox101->AccessibleDescription = L"";
			this->textBox101->AccessibleName = L"";
			this->textBox101->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox101->BackColor = System::Drawing::SystemColors::Control;
			this->textBox101->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox101->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox101->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox101->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox101->Location = System::Drawing::Point(502, 7);
			this->textBox101->Multiline = true;
			this->textBox101->Name = L"textBox101";
			this->textBox101->Size = System::Drawing::Size(63, 30);
			this->textBox101->TabIndex = 94;
			this->textBox101->Text = L"-";
			this->textBox101->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox102
			// 
			this->textBox102->AccessibleDescription = L"";
			this->textBox102->AccessibleName = L"";
			this->textBox102->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox102->BackColor = System::Drawing::SystemColors::Control;
			this->textBox102->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox102->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox102->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox102->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox102->Location = System::Drawing::Point(311, 7);
			this->textBox102->Multiline = true;
			this->textBox102->Name = L"textBox102";
			this->textBox102->Size = System::Drawing::Size(63, 30);
			this->textBox102->TabIndex = 93;
			this->textBox102->Text = L"-";
			this->textBox102->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox103
			// 
			this->textBox103->AccessibleDescription = L"";
			this->textBox103->AccessibleName = L"";
			this->textBox103->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox103->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox103->Font = (gcnew System::Drawing::Font(L"Corbel", 13.77391F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox103->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox103->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox103->Location = System::Drawing::Point(12, 5);
			this->textBox103->Multiline = true;
			this->textBox103->Name = L"textBox103";
			this->textBox103->ReadOnly = true;
			this->textBox103->Size = System::Drawing::Size(172, 30);
			this->textBox103->TabIndex = 92;
			this->textBox103->Text = L"-";
			this->textBox103->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::White;
			this->panel5->Controls->Add(this->textBox93);
			this->panel5->Controls->Add(this->textBox94);
			this->panel5->Controls->Add(this->textBox95);
			this->panel5->Controls->Add(this->textBox97);
			this->panel5->Controls->Add(this->textBox98);
			this->panel5->Location = System::Drawing::Point(6, 186);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(1023, 40);
			this->panel5->TabIndex = 113;
			// 
			// textBox93
			// 
			this->textBox93->AccessibleDescription = L"";
			this->textBox93->AccessibleName = L"";
			this->textBox93->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox93->BackColor = System::Drawing::Color::White;
			this->textBox93->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox93->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox93->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox93->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox93->Location = System::Drawing::Point(862, 6);
			this->textBox93->Multiline = true;
			this->textBox93->Name = L"textBox93";
			this->textBox93->Size = System::Drawing::Size(63, 30);
			this->textBox93->TabIndex = 96;
			this->textBox93->Text = L"-";
			this->textBox93->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox94
			// 
			this->textBox94->AccessibleDescription = L"";
			this->textBox94->AccessibleName = L"";
			this->textBox94->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox94->BackColor = System::Drawing::Color::White;
			this->textBox94->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox94->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox94->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox94->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox94->Location = System::Drawing::Point(692, 6);
			this->textBox94->Multiline = true;
			this->textBox94->Name = L"textBox94";
			this->textBox94->Size = System::Drawing::Size(63, 30);
			this->textBox94->TabIndex = 95;
			this->textBox94->Text = L"-";
			this->textBox94->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox95
			// 
			this->textBox95->AccessibleDescription = L"";
			this->textBox95->AccessibleName = L"";
			this->textBox95->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox95->BackColor = System::Drawing::Color::White;
			this->textBox95->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox95->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox95->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox95->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox95->Location = System::Drawing::Point(502, 7);
			this->textBox95->Multiline = true;
			this->textBox95->Name = L"textBox95";
			this->textBox95->Size = System::Drawing::Size(63, 30);
			this->textBox95->TabIndex = 94;
			this->textBox95->Text = L"-";
			this->textBox95->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox97
			// 
			this->textBox97->AccessibleDescription = L"";
			this->textBox97->AccessibleName = L"";
			this->textBox97->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox97->BackColor = System::Drawing::Color::White;
			this->textBox97->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox97->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox97->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox97->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox97->Location = System::Drawing::Point(311, 7);
			this->textBox97->Multiline = true;
			this->textBox97->Name = L"textBox97";
			this->textBox97->Size = System::Drawing::Size(63, 30);
			this->textBox97->TabIndex = 93;
			this->textBox97->Text = L"-";
			this->textBox97->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox98
			// 
			this->textBox98->AccessibleDescription = L"";
			this->textBox98->AccessibleName = L"";
			this->textBox98->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox98->BackColor = System::Drawing::Color::White;
			this->textBox98->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox98->Font = (gcnew System::Drawing::Font(L"Corbel", 13.77391F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox98->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox98->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox98->Location = System::Drawing::Point(12, 5);
			this->textBox98->Multiline = true;
			this->textBox98->Name = L"textBox98";
			this->textBox98->ReadOnly = true;
			this->textBox98->Size = System::Drawing::Size(172, 30);
			this->textBox98->TabIndex = 92;
			this->textBox98->Text = L"-";
			this->textBox98->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->textBox92);
			this->panel4->Controls->Add(this->textBox91);
			this->panel4->Controls->Add(this->textBox8);
			this->panel4->Controls->Add(this->textBox7);
			this->panel4->Controls->Add(this->textBox96);
			this->panel4->Location = System::Drawing::Point(6, 145);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1023, 40);
			this->panel4->TabIndex = 112;
			// 
			// textBox92
			// 
			this->textBox92->AccessibleDescription = L"";
			this->textBox92->AccessibleName = L"";
			this->textBox92->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox92->BackColor = System::Drawing::SystemColors::Control;
			this->textBox92->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox92->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox92->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox92->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox92->Location = System::Drawing::Point(862, 6);
			this->textBox92->Multiline = true;
			this->textBox92->Name = L"textBox92";
			this->textBox92->Size = System::Drawing::Size(63, 30);
			this->textBox92->TabIndex = 96;
			this->textBox92->Text = L"-";
			this->textBox92->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox91
			// 
			this->textBox91->AccessibleDescription = L"";
			this->textBox91->AccessibleName = L"";
			this->textBox91->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox91->BackColor = System::Drawing::SystemColors::Control;
			this->textBox91->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox91->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox91->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox91->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox91->Location = System::Drawing::Point(692, 6);
			this->textBox91->Multiline = true;
			this->textBox91->Name = L"textBox91";
			this->textBox91->Size = System::Drawing::Size(63, 30);
			this->textBox91->TabIndex = 95;
			this->textBox91->Text = L"-";
			this->textBox91->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox8
			// 
			this->textBox8->AccessibleDescription = L"";
			this->textBox8->AccessibleName = L"";
			this->textBox8->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox8->BackColor = System::Drawing::SystemColors::Control;
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox8->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox8->Location = System::Drawing::Point(502, 7);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(63, 30);
			this->textBox8->TabIndex = 94;
			this->textBox8->Text = L"-";
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox7
			// 
			this->textBox7->AccessibleDescription = L"";
			this->textBox7->AccessibleName = L"";
			this->textBox7->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox7->BackColor = System::Drawing::SystemColors::Control;
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox7->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox7->Location = System::Drawing::Point(311, 7);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(63, 30);
			this->textBox7->TabIndex = 93;
			this->textBox7->Text = L"-";
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox96
			// 
			this->textBox96->AccessibleDescription = L"";
			this->textBox96->AccessibleName = L"";
			this->textBox96->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox96->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox96->Font = (gcnew System::Drawing::Font(L"Corbel", 13.77391F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox96->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox96->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox96->Location = System::Drawing::Point(12, 5);
			this->textBox96->Multiline = true;
			this->textBox96->Name = L"textBox96";
			this->textBox96->ReadOnly = true;
			this->textBox96->Size = System::Drawing::Size(172, 30);
			this->textBox96->TabIndex = 92;
			this->textBox96->Text = L"-";
			this->textBox96->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel3->Controls->Add(this->button41);
			this->panel3->Controls->Add(this->button40);
			this->panel3->Controls->Add(this->button39);
			this->panel3->Controls->Add(this->button37);
			this->panel3->Controls->Add(this->button36);
			this->panel3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel3->Location = System::Drawing::Point(3, 91);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1029, 52);
			this->panel3->TabIndex = 111;
			// 
			// button41
			// 
			this->button41->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->button41->FlatAppearance->BorderSize = 0;
			this->button41->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button41->Font = (gcnew System::Drawing::Font(L"DecoType Naskh", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button41->ForeColor = System::Drawing::Color::White;
			this->button41->Location = System::Drawing::Point(815, 5);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(156, 41);
			this->button41->TabIndex = 116;
			this->button41->Text = L"Red";
			this->button41->UseVisualStyleBackColor = false;
			// 
			// button40
			// 
			this->button40->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->button40->FlatAppearance->BorderSize = 0;
			this->button40->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button40->Font = (gcnew System::Drawing::Font(L"DecoType Naskh", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button40->ForeColor = System::Drawing::Color::White;
			this->button40->Location = System::Drawing::Point(653, 5);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(156, 41);
			this->button40->TabIndex = 115;
			this->button40->Text = L"Yel";
			this->button40->UseVisualStyleBackColor = false;
			// 
			// button39
			// 
			this->button39->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->button39->FlatAppearance->BorderSize = 0;
			this->button39->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button39->Font = (gcnew System::Drawing::Font(L"DecoType Naskh", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button39->ForeColor = System::Drawing::Color::White;
			this->button39->Location = System::Drawing::Point(459, 6);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(156, 41);
			this->button39->TabIndex = 114;
			this->button39->Text = L"Assists";
			this->button39->UseVisualStyleBackColor = false;
			// 
			// button37
			// 
			this->button37->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->button37->FlatAppearance->BorderSize = 0;
			this->button37->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button37->Font = (gcnew System::Drawing::Font(L"DecoType Naskh", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button37->ForeColor = System::Drawing::Color::White;
			this->button37->Location = System::Drawing::Point(264, 7);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(156, 41);
			this->button37->TabIndex = 113;
			this->button37->Text = L"Goals";
			this->button37->UseVisualStyleBackColor = false;
			// 
			// button36
			// 
			this->button36->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->button36->FlatAppearance->BorderSize = 0;
			this->button36->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button36->Font = (gcnew System::Drawing::Font(L"DecoType Naskh", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button36->ForeColor = System::Drawing::Color::White;
			this->button36->Location = System::Drawing::Point(20, 2);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(156, 41);
			this->button36->TabIndex = 112;
			this->button36->Text = L"Player";
			this->button36->UseVisualStyleBackColor = false;
			// 
			// button38
			// 
			this->button38->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button38->FlatAppearance->BorderSize = 0;
			this->button38->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button38->Font = (gcnew System::Drawing::Font(L"DecoType Naskh", 20.03478F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button38->ForeColor = System::Drawing::Color::Black;
			this->button38->Location = System::Drawing::Point(401, 8);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(325, 77);
			this->button38->TabIndex = 91;
			this->button38->Text = L"Statistics";
			this->button38->UseVisualStyleBackColor = false;
			// 
			// pictureBox20
			// 
			this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.Image")));
			this->pictureBox20->Location = System::Drawing::Point(276, 8);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(125, 77);
			this->pictureBox20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox20->TabIndex = 90;
			this->pictureBox20->TabStop = false;
			// 
			// up1
			// 
			this->up1->Controls->Add(this->textBox87);
			this->up1->Controls->Add(this->textBox88);
			this->up1->Controls->Add(this->textBox89);
			this->up1->Controls->Add(this->textBox90);
			this->up1->Controls->Add(this->textBox47);
			this->up1->Controls->Add(this->textBox44);
			this->up1->Controls->Add(this->textBox43);
			this->up1->Controls->Add(this->textBox59);
			this->up1->Controls->Add(this->textBox57);
			this->up1->Controls->Add(this->textBox58);
			this->up1->Controls->Add(this->button27);
			this->up1->Controls->Add(this->textBox45);
			this->up1->Controls->Add(this->textBox46);
			this->up1->Controls->Add(this->textBox49);
			this->up1->Controls->Add(this->textBox50);
			this->up1->Controls->Add(this->textBox53);
			this->up1->Controls->Add(this->textBox54);
			this->up1->Controls->Add(this->button28);
			this->up1->Controls->Add(this->pictureBox17);
			this->up1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->up1->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->up1->Location = System::Drawing::Point(0, 0);
			this->up1->Name = L"up1";
			this->up1->Size = System::Drawing::Size(1088, 580);
			this->up1->TabIndex = 74;
			// 
			// textBox87
			// 
			this->textBox87->AcceptsReturn = true;
			this->textBox87->BackColor = System::Drawing::SystemColors::Control;
			this->textBox87->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox87->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F));
			this->textBox87->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->textBox87->Location = System::Drawing::Point(75, 383);
			this->textBox87->Multiline = true;
			this->textBox87->Name = L"textBox87";
			this->textBox87->Size = System::Drawing::Size(148, 27);
			this->textBox87->TabIndex = 131;
			this->textBox87->Text = L"Wed, 4 May";
			this->textBox87->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox88
			// 
			this->textBox88->AcceptsReturn = true;
			this->textBox88->BackColor = System::Drawing::SystemColors::Control;
			this->textBox88->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox88->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F));
			this->textBox88->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->textBox88->Location = System::Drawing::Point(75, 305);
			this->textBox88->Multiline = true;
			this->textBox88->Name = L"textBox88";
			this->textBox88->Size = System::Drawing::Size(148, 27);
			this->textBox88->TabIndex = 130;
			this->textBox88->Text = L"Sat, 30 Apr";
			this->textBox88->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox89
			// 
			this->textBox89->AcceptsReturn = true;
			this->textBox89->BackColor = System::Drawing::SystemColors::Control;
			this->textBox89->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox89->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F));
			this->textBox89->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->textBox89->Location = System::Drawing::Point(75, 223);
			this->textBox89->Multiline = true;
			this->textBox89->Name = L"textBox89";
			this->textBox89->Size = System::Drawing::Size(148, 27);
			this->textBox89->TabIndex = 129;
			this->textBox89->Text = L"Tue, 26 Apr";
			this->textBox89->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox90
			// 
			this->textBox90->AcceptsReturn = true;
			this->textBox90->BackColor = System::Drawing::SystemColors::Control;
			this->textBox90->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox90->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.89565F));
			this->textBox90->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->textBox90->Location = System::Drawing::Point(75, 132);
			this->textBox90->Multiline = true;
			this->textBox90->Name = L"textBox90";
			this->textBox90->Size = System::Drawing::Size(148, 40);
			this->textBox90->TabIndex = 128;
			this->textBox90->Text = L"Wed, 20 Apr";
			this->textBox90->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox47
			// 
			this->textBox47->AcceptsReturn = true;
			this->textBox47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->textBox47->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 16.27826F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox47->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox47->Location = System::Drawing::Point(411, 417);
			this->textBox47->Multiline = true;
			this->textBox47->Name = L"textBox47";
			this->textBox47->Size = System::Drawing::Size(148, 40);
			this->textBox47->TabIndex = 100;
			this->textBox47->Text = L"05:00 pm";
			this->textBox47->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox44
			// 
			this->textBox44->AcceptsReturn = true;
			this->textBox44->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->textBox44->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 16.27826F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox44->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox44->Location = System::Drawing::Point(411, 339);
			this->textBox44->Multiline = true;
			this->textBox44->Name = L"textBox44";
			this->textBox44->Size = System::Drawing::Size(148, 40);
			this->textBox44->TabIndex = 99;
			this->textBox44->Text = L"04:15 pm";
			this->textBox44->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox43
			// 
			this->textBox43->AcceptsReturn = true;
			this->textBox43->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->textBox43->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 16.27826F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox43->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox43->Location = System::Drawing::Point(411, 263);
			this->textBox43->Multiline = true;
			this->textBox43->Name = L"textBox43";
			this->textBox43->Size = System::Drawing::Size(148, 40);
			this->textBox43->TabIndex = 98;
			this->textBox43->Text = L"09:00 pm";
			this->textBox43->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox59
			// 
			this->textBox59->AcceptsReturn = true;
			this->textBox59->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->textBox59->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 16.27826F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox59->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox59->Location = System::Drawing::Point(411, 177);
			this->textBox59->Multiline = true;
			this->textBox59->Name = L"textBox59";
			this->textBox59->Size = System::Drawing::Size(148, 40);
			this->textBox59->TabIndex = 97;
			this->textBox59->Text = L"09:30 pm";
			this->textBox59->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox57
			// 
			this->textBox57->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox57->ForeColor = System::Drawing::SystemColors::InfoText;
			this->textBox57->Location = System::Drawing::Point(579, 415);
			this->textBox57->Multiline = true;
			this->textBox57->Name = L"textBox57";
			this->textBox57->Size = System::Drawing::Size(310, 39);
			this->textBox57->TabIndex = 94;
			this->textBox57->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox58
			// 
			this->textBox58->AccessibleDescription = L"";
			this->textBox58->AccessibleName = L"";
			this->textBox58->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox58->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox58->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox58->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox58->Location = System::Drawing::Point(76, 415);
			this->textBox58->Multiline = true;
			this->textBox58->Name = L"textBox58";
			this->textBox58->ReadOnly = true;
			this->textBox58->Size = System::Drawing::Size(310, 39);
			this->textBox58->TabIndex = 92;
			this->textBox58->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button27->FlatAppearance->BorderSize = 2;
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button27->Font = (gcnew System::Drawing::Font(L"Corbel", 20.03478F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button27->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button27->Location = System::Drawing::Point(789, 471);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(138, 63);
			this->button27->TabIndex = 91;
			this->button27->Text = L"Save";
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// textBox45
			// 
			this->textBox45->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox45->ForeColor = System::Drawing::SystemColors::InfoText;
			this->textBox45->Location = System::Drawing::Point(579, 340);
			this->textBox45->Multiline = true;
			this->textBox45->Name = L"textBox45";
			this->textBox45->Size = System::Drawing::Size(310, 39);
			this->textBox45->TabIndex = 88;
			this->textBox45->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox46
			// 
			this->textBox46->AccessibleDescription = L"";
			this->textBox46->AccessibleName = L"";
			this->textBox46->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox46->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox46->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox46->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox46->Location = System::Drawing::Point(76, 340);
			this->textBox46->Multiline = true;
			this->textBox46->Name = L"textBox46";
			this->textBox46->ReadOnly = true;
			this->textBox46->Size = System::Drawing::Size(310, 39);
			this->textBox46->TabIndex = 86;
			this->textBox46->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox49
			// 
			this->textBox49->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox49->ForeColor = System::Drawing::SystemColors::InfoText;
			this->textBox49->Location = System::Drawing::Point(579, 260);
			this->textBox49->Multiline = true;
			this->textBox49->Name = L"textBox49";
			this->textBox49->Size = System::Drawing::Size(310, 39);
			this->textBox49->TabIndex = 83;
			this->textBox49->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox50
			// 
			this->textBox50->AccessibleDescription = L"";
			this->textBox50->AccessibleName = L"";
			this->textBox50->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox50->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox50->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox50->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox50->Location = System::Drawing::Point(76, 260);
			this->textBox50->Multiline = true;
			this->textBox50->Name = L"textBox50";
			this->textBox50->ReadOnly = true;
			this->textBox50->Size = System::Drawing::Size(310, 39);
			this->textBox50->TabIndex = 81;
			this->textBox50->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox53
			// 
			this->textBox53->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox53->ForeColor = System::Drawing::SystemColors::InfoText;
			this->textBox53->Location = System::Drawing::Point(579, 178);
			this->textBox53->Multiline = true;
			this->textBox53->Name = L"textBox53";
			this->textBox53->Size = System::Drawing::Size(310, 39);
			this->textBox53->TabIndex = 78;
			this->textBox53->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox54
			// 
			this->textBox54->AccessibleDescription = L"";
			this->textBox54->AccessibleName = L"";
			this->textBox54->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox54->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox54->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox54->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox54->Location = System::Drawing::Point(76, 178);
			this->textBox54->Multiline = true;
			this->textBox54->Name = L"textBox54";
			this->textBox54->ReadOnly = true;
			this->textBox54->Size = System::Drawing::Size(310, 39);
			this->textBox54->TabIndex = 76;
			this->textBox54->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox54->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox54_TextChanged);
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button28->FlatAppearance->BorderSize = 0;
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button28->Font = (gcnew System::Drawing::Font(L"DecoType Naskh", 20.03478F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button28->ForeColor = System::Drawing::Color::Black;
			this->button28->Location = System::Drawing::Point(318, 19);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(525, 77);
			this->button28->TabIndex = 75;
			this->button28->Text = L"Edit upcoming match";
			this->button28->UseVisualStyleBackColor = false;
			// 
			// pictureBox17
			// 
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(162, 19);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(146, 77);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox17->TabIndex = 74;
			this->pictureBox17->TabStop = false;
			// 
			// edit_team
			// 
			this->edit_team->Controls->Add(this->button26);
			this->edit_team->Controls->Add(this->button25);
			this->edit_team->Controls->Add(this->button24);
			this->edit_team->Controls->Add(this->textBox31);
			this->edit_team->Controls->Add(this->textBox30);
			this->edit_team->Controls->Add(this->button18);
			this->edit_team->Controls->Add(this->textBox29);
			this->edit_team->Controls->Add(this->button20);
			this->edit_team->Controls->Add(this->pictureBox15);
			this->edit_team->Dock = System::Windows::Forms::DockStyle::Fill;
			this->edit_team->Location = System::Drawing::Point(0, 0);
			this->edit_team->Name = L"edit_team";
			this->edit_team->Size = System::Drawing::Size(1088, 580);
			this->edit_team->TabIndex = 3;
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button26->FlatAppearance->BorderSize = 0;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button26->Font = (gcnew System::Drawing::Font(L"DecoType Naskh", 10.01739F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button26->ForeColor = System::Drawing::Color::ForestGreen;
			this->button26->Location = System::Drawing::Point(598, 339);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(233, 77);
			this->button26->TabIndex = 72;
			this->button26->Text = L"Upcoming Matches";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button25->FlatAppearance->BorderSize = 0;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Font = (gcnew System::Drawing::Font(L"DecoType Naskh", 10.01739F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button25->ForeColor = System::Drawing::Color::ForestGreen;
			this->button25->Location = System::Drawing::Point(593, 269);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(233, 77);
			this->button25->TabIndex = 71;
			this->button25->Text = L"Upcoming Matches";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button24->FlatAppearance->BorderSize = 0;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Font = (gcnew System::Drawing::Font(L"DecoType Naskh", 10.01739F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button24->ForeColor = System::Drawing::Color::ForestGreen;
			this->button24->Location = System::Drawing::Point(593, 199);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(233, 77);
			this->button24->TabIndex = 68;
			this->button24->Text = L"Upcoming Matches";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// textBox31
			// 
			this->textBox31->AccessibleDescription = L"";
			this->textBox31->AccessibleName = L"";
			this->textBox31->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox31->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox31->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox31->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox31->Location = System::Drawing::Point(287, 352);
			this->textBox31->Multiline = true;
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(310, 39);
			this->textBox31->TabIndex = 67;
			this->textBox31->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox30
			// 
			this->textBox30->AccessibleDescription = L"";
			this->textBox30->AccessibleName = L"";
			this->textBox30->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox30->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox30->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox30->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox30->Location = System::Drawing::Point(287, 211);
			this->textBox30->Multiline = true;
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(310, 39);
			this->textBox30->TabIndex = 66;
			this->textBox30->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button18->FlatAppearance->BorderSize = 2;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Corbel", 20.03478F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button18->Location = System::Drawing::Point(782, 477);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(138, 63);
			this->button18->TabIndex = 63;
			this->button18->Text = L"Save";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// textBox29
			// 
			this->textBox29->AccessibleDescription = L"";
			this->textBox29->AccessibleName = L"";
			this->textBox29->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox29->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox29->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox29->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox29->Location = System::Drawing::Point(287, 285);
			this->textBox29->Multiline = true;
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(310, 39);
			this->textBox29->TabIndex = 65;
			this->textBox29->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button20->FlatAppearance->BorderSize = 0;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"DecoType Naskh", 20.03478F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button20->ForeColor = System::Drawing::Color::Black;
			this->button20->Location = System::Drawing::Point(433, 28);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(325, 77);
			this->button20->TabIndex = 64;
			this->button20->Text = L"Edit Team";
			this->button20->UseVisualStyleBackColor = false;
			// 
			// pictureBox15
			// 
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(315, 28);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(133, 77);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox15->TabIndex = 62;
			this->pictureBox15->TabStop = false;
			// 
			// home
			// 
			this->home->Controls->Add(this->label11);
			this->home->Controls->Add(this->label10);
			this->home->Controls->Add(this->label6);
			this->home->Controls->Add(this->label5);
			this->home->Controls->Add(this->label8);
			this->home->Controls->Add(this->label1);
			this->home->Controls->Add(this->panel2);
			this->home->Controls->Add(this->panel1);
			this->home->Controls->Add(this->pictureBox10);
			this->home->Controls->Add(this->pictureBox9);
			this->home->Controls->Add(this->pictureBox8);
			this->home->Dock = System::Windows::Forms::DockStyle::Fill;
			this->home->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->home->Location = System::Drawing::Point(0, 0);
			this->home->Name = L"home";
			this->home->Size = System::Drawing::Size(1088, 580);
			this->home->TabIndex = 6;
			this->home->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::home_Paint);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Corbel", 26.29565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(837, 295);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(44, 51);
			this->label11->TabIndex = 12;
			this->label11->Text = L"0";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Corbel", 26.29565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(484, 295);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(44, 51);
			this->label10->TabIndex = 11;
			this->label10->Text = L"0";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Corbel", 26.29565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(129, 295);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(41, 51);
			this->label6->TabIndex = 10;
			this->label6->Text = L"1";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Corbel", 28.17391F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Lime;
			this->label5->Location = System::Drawing::Point(720, 62);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(158, 55);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Players";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Corbel", 28.17391F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Lime;
			this->label8->Location = System::Drawing::Point(361, 62);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(142, 55);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Teams";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Corbel", 28.17391F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Lime;
			this->label1->Location = System::Drawing::Point(46, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(124, 55);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Users";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::Desktop;
			this->panel2->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->panel2->Location = System::Drawing::Point(665, 71);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(2, 456);
			this->panel2->TabIndex = 4;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Desktop;
			this->panel1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->panel1->Location = System::Drawing::Point(315, 71);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(2, 456);
			this->panel1->TabIndex = 3;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(790, 151);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(137, 106);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox10->TabIndex = 2;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(433, 151);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(137, 106);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox9->TabIndex = 1;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(84, 148);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(144, 106);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 0;
			this->pictureBox8->TabStop = false;
			// 
			// add_team
			// 
			this->add_team->Controls->Add(this->button4);
			this->add_team->Controls->Add(this->button5);
			this->add_team->Controls->Add(this->textBox1);
			this->add_team->Controls->Add(this->button14);
			this->add_team->Controls->Add(this->pictureBox13);
			this->add_team->Dock = System::Windows::Forms::DockStyle::Fill;
			this->add_team->Location = System::Drawing::Point(0, 0);
			this->add_team->Name = L"add_team";
			this->add_team->Size = System::Drawing::Size(1088, 580);
			this->add_team->TabIndex = 2;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"DecoType Naskh", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(279, 203);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(259, 47);
			this->button4->TabIndex = 61;
			this->button4->Text = L"Write Name of Team";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button5->FlatAppearance->BorderSize = 2;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Corbel", 20.03478F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button5->Location = System::Drawing::Point(712, 354);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(138, 63);
			this->button5->TabIndex = 58;
			this->button5->Text = L"Save";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// textBox1
			// 
			this->textBox1->AccessibleDescription = L"";
			this->textBox1->AccessibleName = L"";
			this->textBox1->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox1->Location = System::Drawing::Point(287, 277);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(310, 39);
			this->textBox1->TabIndex = 60;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"DecoType Naskh", 20.03478F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button14->ForeColor = System::Drawing::Color::Black;
			this->button14->Location = System::Drawing::Point(411, 28);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(325, 77);
			this->button14->TabIndex = 59;
			this->button14->Text = L"Add Team";
			this->button14->UseVisualStyleBackColor = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(280, 28);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(125, 77);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox13->TabIndex = 57;
			this->pictureBox13->TabStop = false;
			// 
			// edit_re
			// 
			this->edit_re->Controls->Add(this->button16);
			this->edit_re->Controls->Add(this->textBox10);
			this->edit_re->Controls->Add(this->textBox11);
			this->edit_re->Controls->Add(this->textBox16);
			this->edit_re->Controls->Add(this->label12);
			this->edit_re->Controls->Add(this->textBox17);
			this->edit_re->Controls->Add(this->textBox25);
			this->edit_re->Controls->Add(this->textBox26);
			this->edit_re->Controls->Add(this->textBox27);
			this->edit_re->Controls->Add(this->label15);
			this->edit_re->Controls->Add(this->textBox28);
			this->edit_re->Controls->Add(this->textBox21);
			this->edit_re->Controls->Add(this->textBox22);
			this->edit_re->Controls->Add(this->textBox23);
			this->edit_re->Controls->Add(this->label14);
			this->edit_re->Controls->Add(this->textBox24);
			this->edit_re->Controls->Add(this->button19);
			this->edit_re->Controls->Add(this->pictureBox14);
			this->edit_re->Dock = System::Windows::Forms::DockStyle::Fill;
			this->edit_re->Location = System::Drawing::Point(0, 0);
			this->edit_re->Name = L"edit_re";
			this->edit_re->Size = System::Drawing::Size(1088, 580);
			this->edit_re->TabIndex = 1;
			this->edit_re->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::edit_re_Paint);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button16->FlatAppearance->BorderSize = 2;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Corbel", 20.03478F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button16->Location = System::Drawing::Point(790, 403);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(138, 63);
			this->button16->TabIndex = 73;
			this->button16->Text = L"Save";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox10->Location = System::Drawing::Point(544, 340);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(43, 45);
			this->textBox10->TabIndex = 72;
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox11
			// 
			this->textBox11->AcceptsReturn = true;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox11->Location = System::Drawing::Point(459, 340);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(43, 45);
			this->textBox11->TabIndex = 71;
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox16
			// 
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox16->ForeColor = System::Drawing::SystemColors::InfoText;
			this->textBox16->Location = System::Drawing::Point(617, 340);
			this->textBox16->Multiline = true;
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(310, 39);
			this->textBox16->TabIndex = 70;
			this->textBox16->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Corbel", 28.17391F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(508, 328);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(39, 55);
			this->label12->TabIndex = 69;
			this->label12->Text = L"-";
			// 
			// textBox17
			// 
			this->textBox17->AccessibleDescription = L"";
			this->textBox17->AccessibleName = L"";
			this->textBox17->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox17->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox17->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox17->Location = System::Drawing::Point(114, 340);
			this->textBox17->Multiline = true;
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(310, 39);
			this->textBox17->TabIndex = 68;
			this->textBox17->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox25
			// 
			this->textBox25->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox25->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox25->Location = System::Drawing::Point(544, 260);
			this->textBox25->Multiline = true;
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(43, 45);
			this->textBox25->TabIndex = 67;
			this->textBox25->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox26
			// 
			this->textBox26->AcceptsReturn = true;
			this->textBox26->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox26->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox26->Location = System::Drawing::Point(459, 260);
			this->textBox26->Multiline = true;
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(43, 45);
			this->textBox26->TabIndex = 66;
			this->textBox26->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox27
			// 
			this->textBox27->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox27->ForeColor = System::Drawing::SystemColors::InfoText;
			this->textBox27->Location = System::Drawing::Point(617, 260);
			this->textBox27->Multiline = true;
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(310, 39);
			this->textBox27->TabIndex = 65;
			this->textBox27->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Corbel", 28.17391F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(508, 248);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(39, 55);
			this->label15->TabIndex = 64;
			this->label15->Text = L"-";
			// 
			// textBox28
			// 
			this->textBox28->AccessibleDescription = L"";
			this->textBox28->AccessibleName = L"";
			this->textBox28->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox28->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox28->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox28->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox28->Location = System::Drawing::Point(114, 260);
			this->textBox28->Multiline = true;
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(310, 39);
			this->textBox28->TabIndex = 63;
			this->textBox28->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox21
			// 
			this->textBox21->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox21->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox21->Location = System::Drawing::Point(544, 178);
			this->textBox21->Multiline = true;
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(43, 45);
			this->textBox21->TabIndex = 62;
			this->textBox21->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox22
			// 
			this->textBox22->AcceptsReturn = true;
			this->textBox22->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox22->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox22->Location = System::Drawing::Point(459, 178);
			this->textBox22->Multiline = true;
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(43, 45);
			this->textBox22->TabIndex = 61;
			this->textBox22->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox23
			// 
			this->textBox23->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox23->ForeColor = System::Drawing::SystemColors::InfoText;
			this->textBox23->Location = System::Drawing::Point(617, 178);
			this->textBox23->Multiline = true;
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(310, 39);
			this->textBox23->TabIndex = 60;
			this->textBox23->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Corbel", 28.17391F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(508, 166);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(39, 55);
			this->label14->TabIndex = 59;
			this->label14->Text = L"-";
			// 
			// textBox24
			// 
			this->textBox24->AccessibleDescription = L"";
			this->textBox24->AccessibleName = L"";
			this->textBox24->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox24->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox24->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox24->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox24->Location = System::Drawing::Point(114, 178);
			this->textBox24->Multiline = true;
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(310, 39);
			this->textBox24->TabIndex = 58;
			this->textBox24->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button19->FlatAppearance->BorderSize = 0;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"DecoType Naskh", 20.03478F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button19->ForeColor = System::Drawing::Color::Black;
			this->button19->Location = System::Drawing::Point(433, 28);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(325, 77);
			this->button19->TabIndex = 57;
			this->button19->Text = L"Edit Results";
			this->button19->UseVisualStyleBackColor = false;
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(302, 19);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(146, 77);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox14->TabIndex = 56;
			this->pictureBox14->TabStop = false;
			// 
			// pan_match
			// 
			this->pan_match->Controls->Add(this->comboBox4);
			this->pan_match->Controls->Add(this->comboBox3);
			this->pan_match->Controls->Add(this->button7);
			this->pan_match->Controls->Add(this->button8);
			this->pan_match->Controls->Add(this->button9);
			this->pan_match->Controls->Add(this->button10);
			this->pan_match->Controls->Add(this->textBox4);
			this->pan_match->Controls->Add(this->textBox6);
			this->pan_match->Controls->Add(this->label13);
			this->pan_match->Controls->Add(this->button11);
			this->pan_match->Controls->Add(this->pictureBox12);
			this->pan_match->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pan_match->Location = System::Drawing::Point(0, 0);
			this->pan_match->Name = L"pan_match";
			this->pan_match->Size = System::Drawing::Size(1088, 580);
			this->pan_match->TabIndex = 0;
			// 
			// comboBox4
			// 
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F));
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(583, 271);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(310, 44);
			this->comboBox4->TabIndex = 67;
			// 
			// comboBox3
			// 
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(70, 272);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(310, 44);
			this->comboBox3->TabIndex = 66;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"DecoType Naskh", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(391, 216);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(200, 47);
			this->button7->TabIndex = 47;
			this->button7->Text = L"Result";
			this->button7->UseVisualStyleBackColor = false;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"DecoType Naskh", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button8->ForeColor = System::Drawing::Color::Black;
			this->button8->Location = System::Drawing::Point(648, 213);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(233, 47);
			this->button8->TabIndex = 46;
			this->button8->Text = L"Add Second Team";
			this->button8->UseVisualStyleBackColor = false;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"DecoType Naskh", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button9->ForeColor = System::Drawing::Color::Black;
			this->button9->Location = System::Drawing::Point(108, 213);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(200, 47);
			this->button9->TabIndex = 45;
			this->button9->Text = L"Add First Team";
			this->button9->UseVisualStyleBackColor = false;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button10->FlatAppearance->BorderSize = 2;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Corbel", 20.03478F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button10->Location = System::Drawing::Point(782, 384);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(138, 63);
			this->button10->TabIndex = 38;
			this->button10->Text = L"Save";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox4->Location = System::Drawing::Point(514, 269);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(43, 45);
			this->textBox4->TabIndex = 44;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox6
			// 
			this->textBox6->AcceptsReturn = true;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox6->Location = System::Drawing::Point(429, 269);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(43, 45);
			this->textBox6->TabIndex = 43;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Corbel", 28.17391F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(478, 257);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(39, 55);
			this->label13->TabIndex = 41;
			this->label13->Text = L"-";
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"DecoType Naskh", 20.03478F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button11->ForeColor = System::Drawing::Color::Black;
			this->button11->Location = System::Drawing::Point(389, 29);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(325, 77);
			this->button11->TabIndex = 39;
			this->button11->Text = L"Add Match";
			this->button11->UseVisualStyleBackColor = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(290, 28);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(105, 60);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox12->TabIndex = 37;
			this->pictureBox12->TabStop = false;
			// 
			// edit_players
			// 
			this->edit_players->Controls->Add(this->comboBox2);
			this->edit_players->Controls->Add(this->button17);
			this->edit_players->Controls->Add(this->textBox32);
			this->edit_players->Controls->Add(this->textBox33);
			this->edit_players->Controls->Add(this->textBox34);
			this->edit_players->Controls->Add(this->textBox35);
			this->edit_players->Controls->Add(this->textBox36);
			this->edit_players->Controls->Add(this->textBox37);
			this->edit_players->Controls->Add(this->textBox38);
			this->edit_players->Controls->Add(this->textBox39);
			this->edit_players->Controls->Add(this->textBox40);
			this->edit_players->Controls->Add(this->textBox41);
			this->edit_players->Controls->Add(this->button21);
			this->edit_players->Controls->Add(this->button22);
			this->edit_players->Controls->Add(this->textBox42);
			this->edit_players->Controls->Add(this->button23);
			this->edit_players->Controls->Add(this->pictureBox16);
			this->edit_players->Dock = System::Windows::Forms::DockStyle::Fill;
			this->edit_players->Location = System::Drawing::Point(0, 0);
			this->edit_players->Name = L"edit_players";
			this->edit_players->Size = System::Drawing::Size(1088, 580);
			this->edit_players->TabIndex = 5;
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Corbel", 16.27826F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(266, 149);
			this->comboBox2->MaxDropDownItems = 100;
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(272, 40);
			this->comboBox2->TabIndex = 89;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button17->FlatAppearance->BorderSize = 0;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"DecoType Naskh", 11.26957F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button17->ForeColor = System::Drawing::Color::Black;
			this->button17->Location = System::Drawing::Point(32, 149);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(243, 47);
			this->button17->TabIndex = 88;
			this->button17->Text = L"Choose The Team";
			this->button17->UseVisualStyleBackColor = false;
			// 
			// textBox32
			// 
			this->textBox32->AccessibleDescription = L"";
			this->textBox32->AccessibleName = L"";
			this->textBox32->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox32->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox32->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox32->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox32->Location = System::Drawing::Point(764, 415);
			this->textBox32->Multiline = true;
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(310, 39);
			this->textBox32->TabIndex = 87;
			this->textBox32->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox33
			// 
			this->textBox33->AccessibleDescription = L"";
			this->textBox33->AccessibleName = L"";
			this->textBox33->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox33->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox33->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox33->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox33->Location = System::Drawing::Point(764, 356);
			this->textBox33->Multiline = true;
			this->textBox33->Name = L"textBox33";
			this->textBox33->Size = System::Drawing::Size(310, 39);
			this->textBox33->TabIndex = 86;
			this->textBox33->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox34
			// 
			this->textBox34->AccessibleDescription = L"";
			this->textBox34->AccessibleName = L"";
			this->textBox34->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox34->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox34->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox34->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox34->Location = System::Drawing::Point(764, 301);
			this->textBox34->Multiline = true;
			this->textBox34->Name = L"textBox34";
			this->textBox34->Size = System::Drawing::Size(310, 39);
			this->textBox34->TabIndex = 85;
			this->textBox34->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox35
			// 
			this->textBox35->AccessibleDescription = L"";
			this->textBox35->AccessibleName = L"";
			this->textBox35->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox35->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox35->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox35->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox35->Location = System::Drawing::Point(403, 473);
			this->textBox35->Multiline = true;
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(310, 39);
			this->textBox35->TabIndex = 84;
			this->textBox35->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox36
			// 
			this->textBox36->AccessibleDescription = L"";
			this->textBox36->AccessibleName = L"";
			this->textBox36->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox36->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox36->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox36->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox36->Location = System::Drawing::Point(403, 412);
			this->textBox36->Multiline = true;
			this->textBox36->Name = L"textBox36";
			this->textBox36->Size = System::Drawing::Size(310, 39);
			this->textBox36->TabIndex = 83;
			this->textBox36->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox37
			// 
			this->textBox37->AccessibleDescription = L"";
			this->textBox37->AccessibleName = L"";
			this->textBox37->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox37->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox37->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox37->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox37->Location = System::Drawing::Point(403, 353);
			this->textBox37->Multiline = true;
			this->textBox37->Name = L"textBox37";
			this->textBox37->Size = System::Drawing::Size(310, 39);
			this->textBox37->TabIndex = 82;
			this->textBox37->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox38
			// 
			this->textBox38->AccessibleDescription = L"";
			this->textBox38->AccessibleName = L"";
			this->textBox38->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox38->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox38->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox38->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox38->Location = System::Drawing::Point(403, 298);
			this->textBox38->Multiline = true;
			this->textBox38->Name = L"textBox38";
			this->textBox38->Size = System::Drawing::Size(310, 39);
			this->textBox38->TabIndex = 81;
			this->textBox38->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox39
			// 
			this->textBox39->AccessibleDescription = L"";
			this->textBox39->AccessibleName = L"";
			this->textBox39->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox39->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox39->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox39->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox39->Location = System::Drawing::Point(44, 471);
			this->textBox39->Multiline = true;
			this->textBox39->Name = L"textBox39";
			this->textBox39->Size = System::Drawing::Size(310, 39);
			this->textBox39->TabIndex = 80;
			this->textBox39->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox40
			// 
			this->textBox40->AccessibleDescription = L"";
			this->textBox40->AccessibleName = L"";
			this->textBox40->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox40->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox40->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox40->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox40->Location = System::Drawing::Point(44, 410);
			this->textBox40->Multiline = true;
			this->textBox40->Name = L"textBox40";
			this->textBox40->Size = System::Drawing::Size(310, 39);
			this->textBox40->TabIndex = 79;
			this->textBox40->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox41
			// 
			this->textBox41->AccessibleDescription = L"";
			this->textBox41->AccessibleName = L"";
			this->textBox41->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox41->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox41->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox41->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox41->Location = System::Drawing::Point(44, 351);
			this->textBox41->Multiline = true;
			this->textBox41->Name = L"textBox41";
			this->textBox41->Size = System::Drawing::Size(310, 39);
			this->textBox41->TabIndex = 78;
			this->textBox41->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button21->FlatAppearance->BorderSize = 0;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Font = (gcnew System::Drawing::Font(L"DecoType Naskh", 13.77391F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button21->ForeColor = System::Drawing::Color::Black;
			this->button21->Location = System::Drawing::Point(15, 213);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(366, 77);
			this->button21->TabIndex = 77;
			this->button21->Text = L"Edit Name of Players";
			this->button21->UseVisualStyleBackColor = false;
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button22->FlatAppearance->BorderSize = 2;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Font = (gcnew System::Drawing::Font(L"Corbel", 20.03478F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button22->Location = System::Drawing::Point(888, 488);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(138, 63);
			this->button22->TabIndex = 74;
			this->button22->Text = L"Save";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// textBox42
			// 
			this->textBox42->AccessibleDescription = L"";
			this->textBox42->AccessibleName = L"";
			this->textBox42->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox42->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox42->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox42->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox42->Location = System::Drawing::Point(44, 296);
			this->textBox42->Multiline = true;
			this->textBox42->Name = L"textBox42";
			this->textBox42->Size = System::Drawing::Size(310, 39);
			this->textBox42->TabIndex = 76;
			this->textBox42->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button23->FlatAppearance->BorderSize = 0;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Font = (gcnew System::Drawing::Font(L"DecoType Naskh", 20.03478F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button23->ForeColor = System::Drawing::Color::Black;
			this->button23->Location = System::Drawing::Point(401, 29);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(325, 77);
			this->button23->TabIndex = 75;
			this->button23->Text = L"Edit Players";
			this->button23->UseVisualStyleBackColor = false;
			// 
			// pictureBox16
			// 
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(276, 29);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(125, 77);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox16->TabIndex = 73;
			this->pictureBox16->TabStop = false;
			// 
			// add_players
			// 
			this->add_players->Controls->Add(this->comboBox1);
			this->add_players->Controls->Add(this->button6);
			this->add_players->Controls->Add(this->textBox18);
			this->add_players->Controls->Add(this->textBox19);
			this->add_players->Controls->Add(this->textBox20);
			this->add_players->Controls->Add(this->textBox12);
			this->add_players->Controls->Add(this->textBox13);
			this->add_players->Controls->Add(this->textBox14);
			this->add_players->Controls->Add(this->textBox15);
			this->add_players->Controls->Add(this->textBox9);
			this->add_players->Controls->Add(this->textBox3);
			this->add_players->Controls->Add(this->textBox2);
			this->add_players->Controls->Add(this->button15);
			this->add_players->Controls->Add(this->button12);
			this->add_players->Controls->Add(this->textBox5);
			this->add_players->Controls->Add(this->button13);
			this->add_players->Controls->Add(this->pictureBox11);
			this->add_players->Dock = System::Windows::Forms::DockStyle::Fill;
			this->add_players->Font = (gcnew System::Drawing::Font(L"Cooper Black", 16.27826F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_players->Location = System::Drawing::Point(0, 0);
			this->add_players->Name = L"add_players";
			this->add_players->Size = System::Drawing::Size(1088, 580);
			this->add_players->TabIndex = 4;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Corbel", 16.27826F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(254, 148);
			this->comboBox1->MaxDropDownItems = 100;
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(272, 40);
			this->comboBox1->TabIndex = 72;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"DecoType Naskh", 11.26957F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(20, 148);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(243, 47);
			this->button6->TabIndex = 71;
			this->button6->Text = L"Choose The Team";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// textBox18
			// 
			this->textBox18->AccessibleDescription = L"";
			this->textBox18->AccessibleName = L"";
			this->textBox18->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox18->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox18->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox18->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox18->Location = System::Drawing::Point(752, 414);
			this->textBox18->Multiline = true;
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(310, 39);
			this->textBox18->TabIndex = 69;
			this->textBox18->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox19
			// 
			this->textBox19->AccessibleDescription = L"";
			this->textBox19->AccessibleName = L"";
			this->textBox19->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox19->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox19->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox19->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox19->Location = System::Drawing::Point(752, 355);
			this->textBox19->Multiline = true;
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(310, 39);
			this->textBox19->TabIndex = 68;
			this->textBox19->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox20
			// 
			this->textBox20->AccessibleDescription = L"";
			this->textBox20->AccessibleName = L"";
			this->textBox20->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox20->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox20->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox20->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox20->Location = System::Drawing::Point(752, 300);
			this->textBox20->Multiline = true;
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(310, 39);
			this->textBox20->TabIndex = 67;
			this->textBox20->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox12
			// 
			this->textBox12->AccessibleDescription = L"";
			this->textBox12->AccessibleName = L"";
			this->textBox12->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox12->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox12->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox12->Location = System::Drawing::Point(391, 472);
			this->textBox12->Multiline = true;
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(310, 39);
			this->textBox12->TabIndex = 65;
			this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox13
			// 
			this->textBox13->AccessibleDescription = L"";
			this->textBox13->AccessibleName = L"";
			this->textBox13->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox13->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox13->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox13->Location = System::Drawing::Point(391, 411);
			this->textBox13->Multiline = true;
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(310, 39);
			this->textBox13->TabIndex = 64;
			this->textBox13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox14
			// 
			this->textBox14->AccessibleDescription = L"";
			this->textBox14->AccessibleName = L"";
			this->textBox14->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox14->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox14->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox14->Location = System::Drawing::Point(391, 352);
			this->textBox14->Multiline = true;
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(310, 39);
			this->textBox14->TabIndex = 63;
			this->textBox14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox15
			// 
			this->textBox15->AccessibleDescription = L"";
			this->textBox15->AccessibleName = L"";
			this->textBox15->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox15->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox15->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox15->Location = System::Drawing::Point(391, 297);
			this->textBox15->Multiline = true;
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(310, 39);
			this->textBox15->TabIndex = 62;
			this->textBox15->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox9
			// 
			this->textBox9->AccessibleDescription = L"";
			this->textBox9->AccessibleName = L"";
			this->textBox9->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox9->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox9->Location = System::Drawing::Point(32, 470);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(310, 39);
			this->textBox9->TabIndex = 60;
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->AccessibleDescription = L"";
			this->textBox3->AccessibleName = L"";
			this->textBox3->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox3->Location = System::Drawing::Point(32, 409);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(310, 39);
			this->textBox3->TabIndex = 59;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->AccessibleDescription = L"";
			this->textBox2->AccessibleName = L"";
			this->textBox2->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox2->Location = System::Drawing::Point(32, 350);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(310, 39);
			this->textBox2->TabIndex = 58;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"DecoType Naskh", 13.77391F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button15->ForeColor = System::Drawing::Color::Black;
			this->button15->Location = System::Drawing::Point(3, 212);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(366, 77);
			this->button15->TabIndex = 57;
			this->button15->Text = L"Write Name of Players";
			this->button15->UseVisualStyleBackColor = false;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button12->FlatAppearance->BorderSize = 2;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Corbel", 20.03478F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button12->Location = System::Drawing::Point(876, 487);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(138, 63);
			this->button12->TabIndex = 49;
			this->button12->Text = L"Save";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// textBox5
			// 
			this->textBox5->AccessibleDescription = L"";
			this->textBox5->AccessibleName = L"";
			this->textBox5->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox5->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox5->Location = System::Drawing::Point(32, 295);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(310, 39);
			this->textBox5->TabIndex = 51;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged_1);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"DecoType Naskh", 20.03478F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button13->ForeColor = System::Drawing::Color::Black;
			this->button13->Location = System::Drawing::Point(389, 28);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(325, 77);
			this->button13->TabIndex = 50;
			this->button13->Text = L"Add Players";
			this->button13->UseVisualStyleBackColor = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(264, 28);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(125, 77);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox11->TabIndex = 48;
			this->pictureBox11->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Lime;
			this->button1->FlatAppearance->BorderSize = 2;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Corbel", 16.27826F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(12, 155);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(187, 46);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Home";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Corbel", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(27, 274);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(157, 36);
			this->button2->TabIndex = 25;
			this->button2->Text = L"Add Matches";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Corbel", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(27, 329);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(157, 36);
			this->button3->TabIndex = 26;
			this->button3->Text = L"Edit Matches";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
			// 
			// button57
			// 
			this->button57->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button57->Font = (gcnew System::Drawing::Font(L"Corbel", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button57->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button57->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button57.Image")));
			this->button57->Location = System::Drawing::Point(27, 708);
			this->button57->Name = L"button57";
			this->button57->Size = System::Drawing::Size(157, 36);
			this->button57->TabIndex = 27;
			this->button57->Text = L"Add Statistics";
			this->button57->UseVisualStyleBackColor = true;
			this->button57->Click += gcnew System::EventHandler(this, &MyForm::button57_Click);
			// 
			// button42
			// 
			this->button42->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button42->FlatAppearance->BorderSize = 0;
			this->button42->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button42->Font = (gcnew System::Drawing::Font(L"Arial", 16.27826F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button42->ForeColor = System::Drawing::Color::Crimson;
			this->button42->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button42.Image")));
			this->button42->Location = System::Drawing::Point(984, 48);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(304, 66);
			this->button42->TabIndex = 78;
			this->button42->Text = L"Disclaimer, Don\'t Forget ";
			this->button42->UseVisualStyleBackColor = false;
			// 
			// button43
			// 
			this->button43->BackColor = System::Drawing::Color::Crimson;
			this->button43->FlatAppearance->BorderSize = 0;
			this->button43->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button43->Font = (gcnew System::Drawing::Font(L"Corbel", 18.15652F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button43->ForeColor = System::Drawing::Color::White;
			this->button43->Location = System::Drawing::Point(1074, 111);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(141, 47);
			this->button43->TabIndex = 78;
			this->button43->Text = L"Save";
			this->button43->UseVisualStyleBackColor = false;
			this->button43->Click += gcnew System::EventHandler(this, &MyForm::button43_Click);
			// 
			// button44
			// 
			this->button44->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button44->FlatAppearance->BorderSize = 0;
			this->button44->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button44->Font = (gcnew System::Drawing::Font(L"Arial", 16.27826F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button44->ForeColor = System::Drawing::Color::Crimson;
			this->button44->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button44.Image")));
			this->button44->Location = System::Drawing::Point(1221, 113);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(47, 43);
			this->button44->TabIndex = 79;
			this->button44->Text = L"it.";
			this->button44->UseVisualStyleBackColor = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(52, 89);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1303, 801);
			this->Controls->Add(this->button43);
			this->Controls->Add(this->button44);
			this->Controls->Add(this->button42);
			this->Controls->Add(this->button57);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->oo);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->editp);
			this->Controls->Add(this->editt);
			this->Controls->Add(this->addp);
			this->Controls->Add(this->addt);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->addm);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Cooper Black", 48.20869F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(20, 17, 20, 17);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->oo->ResumeLayout(false);
			this->panel39->ResumeLayout(false);
			this->panel38->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			this->s1->ResumeLayout(false);
			this->panel37->ResumeLayout(false);
			this->panel37->PerformLayout();
			this->panel30->ResumeLayout(false);
			this->panel30->PerformLayout();
			this->panel31->ResumeLayout(false);
			this->panel31->PerformLayout();
			this->panel32->ResumeLayout(false);
			this->panel32->PerformLayout();
			this->panel33->ResumeLayout(false);
			this->panel33->PerformLayout();
			this->panel34->ResumeLayout(false);
			this->panel34->PerformLayout();
			this->panel35->ResumeLayout(false);
			this->panel35->PerformLayout();
			this->panel36->ResumeLayout(false);
			this->panel36->PerformLayout();
			this->panel29->ResumeLayout(false);
			this->panel29->PerformLayout();
			this->panel22->ResumeLayout(false);
			this->panel22->PerformLayout();
			this->panel23->ResumeLayout(false);
			this->panel23->PerformLayout();
			this->panel24->ResumeLayout(false);
			this->panel24->PerformLayout();
			this->panel25->ResumeLayout(false);
			this->panel25->PerformLayout();
			this->panel26->ResumeLayout(false);
			this->panel26->PerformLayout();
			this->panel27->ResumeLayout(false);
			this->panel27->PerformLayout();
			this->panel28->ResumeLayout(false);
			this->panel28->PerformLayout();
			this->panel21->ResumeLayout(false);
			this->panel21->PerformLayout();
			this->panel14->ResumeLayout(false);
			this->panel14->PerformLayout();
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			this->panel16->ResumeLayout(false);
			this->panel16->PerformLayout();
			this->panel17->ResumeLayout(false);
			this->panel17->PerformLayout();
			this->panel18->ResumeLayout(false);
			this->panel18->PerformLayout();
			this->panel19->ResumeLayout(false);
			this->panel19->PerformLayout();
			this->panel20->ResumeLayout(false);
			this->panel20->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			this->up1->ResumeLayout(false);
			this->up1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			this->edit_team->ResumeLayout(false);
			this->edit_team->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			this->home->ResumeLayout(false);
			this->home->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->add_team->ResumeLayout(false);
			this->add_team->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			this->edit_re->ResumeLayout(false);
			this->edit_re->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			this->pan_match->ResumeLayout(false);
			this->pan_match->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			this->edit_players->ResumeLayout(false);
			this->edit_players->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			this->add_players->ResumeLayout(false);
			this->add_players->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}






#pragma endregion



		int x = 1, x1 = 1;

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void addm_Click(System::Object^ sender, System::EventArgs^ e) {
		pan_match->BringToFront();
	}
	private: System::Void editr_Click(System::Object^ sender, System::EventArgs^ e) {

		edit_re->BringToFront();
	}
	private: System::Void addt_Click(System::Object^ sender, System::EventArgs^ e) {
		add_team->BringToFront();
	}
	private: System::Void editt_Click(System::Object^ sender, System::EventArgs^ e) {
		edit_team->BringToFront();
	}
	private: System::Void addp_Click(System::Object^ sender, System::EventArgs^ e) {
		add_players->BringToFront();
	}
	private: System::Void editp_Click(System::Object^ sender, System::EventArgs^ e) {
		edit_players->BringToFront();
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		home->BringToFront();
	}
	private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {




	}
	private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox11_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void textBox2_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		//add match when click save

		if (x == 4)x = 1;

		if (x == 1) {
			textBox24->Text = comboBox3->Text;
			textBox23->Text = comboBox4->Text;
			textBox22->Text = textBox6->Text;
			textBox21->Text = textBox4->Text;
		}
		if (x == 2) {
			textBox28->Text = comboBox3->Text;
			textBox27->Text = comboBox4->Text;
			textBox26->Text = textBox6->Text;
			textBox25->Text = textBox4->Text;
		}
		if (x == 3) {
			textBox17->Text = comboBox3->Text;
			textBox16->Text = comboBox4->Text;
			textBox11->Text = textBox6->Text;
			textBox10->Text = textBox4->Text;
		}
		team1[0].m1 = msclr::interop::marshal_as<std::string>(textBox24->Text);
		team1[0].r1 = msclr::interop::marshal_as<std::string>(textBox22->Text);
		team1[0].r2 = msclr::interop::marshal_as<std::string>(textBox21->Text);
		team1[0].m2 = msclr::interop::marshal_as<std::string>(textBox23->Text);

		team1[1].m1 = msclr::interop::marshal_as<std::string>(textBox28->Text);
		team1[1].r1 = msclr::interop::marshal_as<std::string>(textBox26->Text);
		team1[1].r2 = msclr::interop::marshal_as<std::string>(textBox25->Text);
		team1[1].m2 = msclr::interop::marshal_as<std::string>(textBox27->Text);

		team1[2].m1 = msclr::interop::marshal_as<std::string>(textBox17->Text);
		team1[2].r1 = msclr::interop::marshal_as<std::string>(textBox11->Text);
		team1[2].r2 = msclr::interop::marshal_as<std::string>(textBox10->Text);
		team1[2].m2 = msclr::interop::marshal_as<std::string>(textBox16->Text);

		textBox4->Text = "";//r2
		textBox6->Text = "";//r1
		comboBox4->Text = "";//t2
		comboBox3->Text = "";//t1

		x++;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		pan_match->BringToFront();
	}
	private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
		edit_re->BringToFront();
	}
	private: System::Void textBox5_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		
		//add player when click save

		if (team[0].name == msclr::interop::marshal_as<std::string>(comboBox1->Text)) {

			team[0].player[0].name = msclr::interop::marshal_as<std::string>(textBox5->Text);
			team[0].player[1].name = msclr::interop::marshal_as<std::string>(textBox2->Text);
			team[0].player[2].name = msclr::interop::marshal_as<std::string>(textBox3->Text);
			team[0].player[3].name = msclr::interop::marshal_as<std::string>(textBox9->Text);
			team[0].player[4].name = msclr::interop::marshal_as<std::string>(textBox15->Text);
			team[0].player[5].name = msclr::interop::marshal_as<std::string>(textBox14->Text);
			team[0].player[6].name = msclr::interop::marshal_as<std::string>(textBox13->Text);
			team[0].player[7].name = msclr::interop::marshal_as<std::string>(textBox12->Text);
			team[0].player[8].name = msclr::interop::marshal_as<std::string>(textBox20->Text);
			team[0].player[9].name = msclr::interop::marshal_as<std::string>(textBox19->Text);
			team[0].player[10].name = msclr::interop::marshal_as<std::string>(textBox18->Text);
		}
		else if (team[1].name == msclr::interop::marshal_as<std::string>(comboBox1->Text)) {

			team[1].player[0].name = msclr::interop::marshal_as<std::string>(textBox5->Text);
			team[1].player[1].name = msclr::interop::marshal_as<std::string>(textBox2->Text);
			team[1].player[2].name = msclr::interop::marshal_as<std::string>(textBox3->Text);
			team[1].player[3].name = msclr::interop::marshal_as<std::string>(textBox9->Text);
			team[1].player[4].name = msclr::interop::marshal_as<std::string>(textBox15->Text);
			team[1].player[5].name = msclr::interop::marshal_as<std::string>(textBox14->Text);
			team[1].player[6].name = msclr::interop::marshal_as<std::string>(textBox13->Text);
			team[1].player[7].name = msclr::interop::marshal_as<std::string>(textBox12->Text);
			team[1].player[8].name = msclr::interop::marshal_as<std::string>(textBox20->Text);
			team[1].player[9].name = msclr::interop::marshal_as<std::string>(textBox19->Text);
			team[1].player[10].name = msclr::interop::marshal_as<std::string>(textBox18->Text);
		}
		else if (team[2].name == msclr::interop::marshal_as<std::string>(comboBox1->Text)) {

			team[2].player[0].name = msclr::interop::marshal_as<std::string>(textBox5->Text);
			team[2].player[1].name = msclr::interop::marshal_as<std::string>(textBox2->Text);
			team[2].player[2].name = msclr::interop::marshal_as<std::string>(textBox3->Text);
			team[2].player[3].name = msclr::interop::marshal_as<std::string>(textBox9->Text);
			team[2].player[4].name = msclr::interop::marshal_as<std::string>(textBox15->Text);
			team[2].player[5].name = msclr::interop::marshal_as<std::string>(textBox14->Text);
			team[2].player[6].name = msclr::interop::marshal_as<std::string>(textBox13->Text);
			team[2].player[7].name = msclr::interop::marshal_as<std::string>(textBox12->Text);
			team[2].player[8].name = msclr::interop::marshal_as<std::string>(textBox20->Text);
			team[2].player[9].name = msclr::interop::marshal_as<std::string>(textBox19->Text);
			team[2].player[10].name = msclr::interop::marshal_as<std::string>(textBox18->Text);
		}







		comboBox1->Text = "";
		textBox5->Text = "";
		textBox2->Text = "";
		textBox3->Text = "";
		textBox9->Text = "";
		textBox12->Text = "";
		textBox13->Text = "";
		textBox14->Text = "";
		textBox15->Text = "";
		textBox18->Text = "";
		textBox19->Text = "";
		textBox20->Text = "";
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		
		
		//add team when click save


		comboBox1->Items->Add(textBox1->Text);
		comboBox2->Items->Add(textBox1->Text);
		comboBox3->Items->Add(textBox1->Text);
		comboBox4->Items->Add(textBox1->Text);
		comboBox5->Items->Add(textBox1->Text);
		if (x1 == 4)x1 = 1;
		if (x1 == 1) {
			textBox30->Text = textBox1->Text;
		}
		if (x1 == 2) {
			textBox29->Text = textBox1->Text;
		}
		if (x1 == 3) {
			textBox31->Text = textBox1->Text;
		}

		textBox1->Text = "";

		x1++;
		comboBox1->Items->Clear();
		comboBox1->Items->Add(textBox30->Text);
		comboBox1->Items->Add(textBox29->Text);
		comboBox1->Items->Add(textBox31->Text);
		comboBox2->Items->Clear();
		comboBox2->Items->Add(textBox30->Text);
		comboBox2->Items->Add(textBox29->Text);
		comboBox2->Items->Add(textBox31->Text);
		comboBox3->Items->Clear();
		comboBox3->Items->Add(textBox30->Text);
		comboBox3->Items->Add(textBox29->Text);
		comboBox3->Items->Add(textBox31->Text);
		comboBox4->Items->Clear();
		comboBox4->Items->Add(textBox30->Text);
		comboBox4->Items->Add(textBox29->Text);
		comboBox4->Items->Add(textBox31->Text);
		comboBox5->Items->Clear();
		comboBox5->Items->Add(textBox30->Text);
		comboBox5->Items->Add(textBox29->Text);
		comboBox5->Items->Add(textBox31->Text);
		int y = 0;
		if (textBox30->Text != "")y++;
		if (textBox31->Text != "")y++;
		if (textBox29->Text != "")y++;
		if (y == 1) { label10->Text = "1"; label11->Text = "11"; }
		if (y == 2) { label10->Text = "2"; label11->Text = "22"; }
		if (y == 3) { label10->Text = "3"; label11->Text = "33"; }





		team[0].name = msclr::interop::marshal_as<std::string>(textBox30->Text);
		team[1].name = msclr::interop::marshal_as<std::string>(textBox29->Text);
		team[2].name = msclr::interop::marshal_as<std::string>(textBox31->Text);



	}
	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {

		//edit team when click save


		comboBox1->Items->Clear();
		comboBox1->Items->Add(textBox30->Text);
		comboBox1->Items->Add(textBox29->Text);
		comboBox1->Items->Add(textBox31->Text);
		comboBox2->Items->Clear();
		comboBox2->Items->Add(textBox30->Text);
		comboBox2->Items->Add(textBox29->Text);
		comboBox2->Items->Add(textBox31->Text);
		comboBox3->Items->Clear();
		comboBox3->Items->Add(textBox30->Text);
		comboBox3->Items->Add(textBox29->Text);
		comboBox3->Items->Add(textBox31->Text);
		comboBox4->Items->Clear();
		comboBox4->Items->Add(textBox30->Text);
		comboBox4->Items->Add(textBox29->Text);
		comboBox4->Items->Add(textBox31->Text);
		comboBox5->Items->Clear();
		comboBox5->Items->Add(textBox30->Text);
		comboBox5->Items->Add(textBox29->Text);
		comboBox5->Items->Add(textBox31->Text);
		int y = 0;
		if (textBox30->Text != "")y++;
		if (textBox31->Text != "")y++;
		if (textBox29->Text != "")y++;
		if (y == 1) { label10->Text = "1"; label11->Text = "11"; }
		if (y == 2) { label10->Text = "2"; label11->Text = "22"; }
		if (y == 3) { label10->Text = "3"; label11->Text = "33"; }








		//to save teams 
		team[0].name = msclr::interop::marshal_as<std::string>(textBox30->Text);
		team[1].name = msclr::interop::marshal_as<std::string>(textBox29->Text);
		team[2].name = msclr::interop::marshal_as<std::string>(textBox31->Text);
		//textBox29->Text = gcnew String(team[0].name.data());






	}
	private: System::Void home_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {



		//upcoming match when click upcomming 2

		textBox54->Text = textBox31->Text;
		textBox50->Text = textBox31->Text;
		textBox46->Text = textBox31->Text;
		textBox58->Text = textBox31->Text;

		if (team[0].name == msclr::interop::marshal_as<std::string>(textBox31->Text)) {
			textBox53->Text = gcnew String(team[0].matches[0].t2.data());
			textBox59->Text = gcnew String(team[0].matches[0].htime.data());
			textBox90->Text = gcnew String(team[0].matches[0].mtime.data());

			textBox49->Text = gcnew String(team[0].matches[1].t2.data());
			textBox43->Text = gcnew String(team[0].matches[1].htime.data());
			textBox89->Text = gcnew String(team[0].matches[1].mtime.data());

			textBox45->Text = gcnew String(team[0].matches[2].t2.data());
			textBox44->Text = gcnew String(team[0].matches[2].htime.data());
			textBox88->Text = gcnew String(team[0].matches[2].mtime.data());

			textBox57->Text = gcnew String(team[0].matches[3].t2.data());
			textBox47->Text = gcnew String(team[0].matches[3].htime.data());
			textBox87->Text = gcnew String(team[0].matches[3].mtime.data());

		}
		else if (team[1].name == msclr::interop::marshal_as<std::string>(textBox31->Text)) {
			textBox53->Text = gcnew String(team[1].matches[0].t2.data());
			textBox59->Text = gcnew String(team[1].matches[0].htime.data());
			textBox90->Text = gcnew String(team[1].matches[0].mtime.data());

			textBox49->Text = gcnew String(team[1].matches[1].t2.data());
			textBox43->Text = gcnew String(team[1].matches[1].htime.data());
			textBox89->Text = gcnew String(team[1].matches[1].mtime.data());

			textBox45->Text = gcnew String(team[1].matches[2].t2.data());
			textBox44->Text = gcnew String(team[1].matches[2].htime.data());
			textBox88->Text = gcnew String(team[1].matches[2].mtime.data());

			textBox57->Text = gcnew String(team[1].matches[3].t2.data());
			textBox47->Text = gcnew String(team[1].matches[3].htime.data());
			textBox87->Text = gcnew String(team[1].matches[3].mtime.data());

		}
		else if (team[2].name == msclr::interop::marshal_as<std::string>(textBox31->Text)) {
			textBox53->Text = gcnew String(team[2].matches[0].t2.data());
			textBox59->Text = gcnew String(team[2].matches[0].htime.data());
			textBox90->Text = gcnew String(team[2].matches[0].mtime.data());

			textBox49->Text = gcnew String(team[2].matches[1].t2.data());
			textBox43->Text = gcnew String(team[2].matches[1].htime.data());
			textBox89->Text = gcnew String(team[2].matches[1].mtime.data());

			textBox45->Text = gcnew String(team[2].matches[2].t2.data());
			textBox44->Text = gcnew String(team[2].matches[2].htime.data());
			textBox88->Text = gcnew String(team[2].matches[2].mtime.data());

			textBox57->Text = gcnew String(team[2].matches[3].t2.data());
			textBox47->Text = gcnew String(team[2].matches[3].htime.data());
			textBox87->Text = gcnew String(team[2].matches[3].mtime.data());
		}

		up1->BringToFront();

		//up3->BringToFront();
	}
	private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {

		//upcoming match when click upcomming 1
		textBox54->Text = textBox30->Text;
		textBox50->Text = textBox30->Text;
		textBox46->Text = textBox30->Text;
		textBox58->Text = textBox30->Text;

		if (team[0].name == msclr::interop::marshal_as<std::string>(textBox30->Text)) {
			textBox53->Text = gcnew String(team[0].matches[0].t2.data());
			textBox59->Text = gcnew String(team[0].matches[0].htime.data());
			textBox90->Text = gcnew String(team[0].matches[0].mtime.data());

			textBox49->Text = gcnew String(team[0].matches[1].t2.data());
			textBox43->Text = gcnew String(team[0].matches[1].htime.data());
			textBox89->Text = gcnew String(team[0].matches[1].mtime.data());

			textBox45->Text = gcnew String(team[0].matches[2].t2.data());
			textBox44->Text = gcnew String(team[0].matches[2].htime.data());
			textBox88->Text = gcnew String(team[0].matches[2].mtime.data());

			textBox57->Text = gcnew String(team[0].matches[3].t2.data());
			textBox47->Text = gcnew String(team[0].matches[3].htime.data());
			textBox87->Text = gcnew String(team[0].matches[3].mtime.data());

		}
		else if (team[1].name == msclr::interop::marshal_as<std::string>(textBox30->Text)) {
			textBox53->Text = gcnew String(team[1].matches[0].t2.data());
			textBox59->Text = gcnew String(team[1].matches[0].htime.data());
			textBox90->Text = gcnew String(team[1].matches[0].mtime.data());

			textBox49->Text = gcnew String(team[1].matches[1].t2.data());
			textBox43->Text = gcnew String(team[1].matches[1].htime.data());
			textBox89->Text = gcnew String(team[1].matches[1].mtime.data());

			
			textBox45->Text = gcnew String(team[1].matches[2].t2.data());
			textBox44->Text = gcnew String(team[1].matches[2].htime.data());
			textBox88->Text = gcnew String(team[1].matches[2].mtime.data());

			textBox57->Text = gcnew String(team[1].matches[3].t2.data());
			textBox47->Text = gcnew String(team[1].matches[3].htime.data());
			textBox87->Text = gcnew String(team[1].matches[3].mtime.data());

		}
		else if (team[2].name == msclr::interop::marshal_as<std::string>(textBox30->Text)) {
			textBox53->Text = gcnew String(team[2].matches[0].t2.data());
			textBox59->Text = gcnew String(team[2].matches[0].htime.data());
			textBox90->Text = gcnew String(team[2].matches[0].mtime.data());

			textBox49->Text = gcnew String(team[2].matches[1].t2.data());
			textBox43->Text = gcnew String(team[2].matches[1].htime.data());
			textBox89->Text = gcnew String(team[2].matches[1].mtime.data());

			textBox45->Text = gcnew String(team[2].matches[2].t2.data());
			textBox44->Text = gcnew String(team[2].matches[2].htime.data());
			textBox88->Text = gcnew String(team[2].matches[2].mtime.data());

			textBox57->Text = gcnew String(team[2].matches[3].t2.data());
			textBox47->Text = gcnew String(team[2].matches[3].htime.data());
			textBox87->Text = gcnew String(team[2].matches[3].mtime.data());
		}

		up1->BringToFront();


		up1->BringToFront();
	}
	private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {

		//upcoming match when click upcomming 1
		textBox54->Text = textBox29->Text;
		textBox50->Text = textBox29->Text;
		textBox46->Text = textBox29->Text;
		textBox58->Text = textBox29->Text;

		if (team[0].name == msclr::interop::marshal_as<std::string>(textBox29->Text)) {
			textBox53->Text = gcnew String(team[0].matches[0].t2.data());
			textBox59->Text = gcnew String(team[0].matches[0].htime.data());
			textBox90->Text = gcnew String(team[0].matches[0].mtime.data());

			textBox49->Text = gcnew String(team[0].matches[1].t2.data());
			textBox43->Text = gcnew String(team[0].matches[1].htime.data());
			textBox89->Text = gcnew String(team[0].matches[1].mtime.data());

			textBox45->Text = gcnew String(team[0].matches[2].t2.data());
			textBox44->Text = gcnew String(team[0].matches[2].htime.data());
			textBox88->Text = gcnew String(team[0].matches[2].mtime.data());

			textBox57->Text = gcnew String(team[0].matches[3].t2.data());
			textBox47->Text = gcnew String(team[0].matches[3].htime.data());
			textBox87->Text = gcnew String(team[0].matches[3].mtime.data());

		}
		else if (team[1].name == msclr::interop::marshal_as<std::string>(textBox29->Text)) {
			textBox53->Text = gcnew String(team[1].matches[0].t2.data());
			textBox59->Text = gcnew String(team[1].matches[0].htime.data());
			textBox90->Text = gcnew String(team[1].matches[0].mtime.data());

			textBox49->Text = gcnew String(team[1].matches[1].t2.data());
			textBox43->Text = gcnew String(team[1].matches[1].htime.data());
			textBox89->Text = gcnew String(team[1].matches[1].mtime.data());

			textBox45->Text = gcnew String(team[1].matches[2].t2.data());
			textBox44->Text = gcnew String(team[1].matches[2].htime.data());
			textBox88->Text = gcnew String(team[1].matches[2].mtime.data());

			textBox57->Text = gcnew String(team[1].matches[3].t2.data());
			textBox47->Text = gcnew String(team[1].matches[3].htime.data());
			textBox87->Text = gcnew String(team[1].matches[3].mtime.data());

		}
		else if (team[2].name == msclr::interop::marshal_as<std::string>(textBox29->Text)) {
			textBox53->Text = gcnew String(team[2].matches[0].t2.data());
			textBox59->Text = gcnew String(team[2].matches[0].htime.data());
			textBox90->Text = gcnew String(team[2].matches[0].mtime.data());

			textBox49->Text = gcnew String(team[2].matches[1].t2.data());
			textBox43->Text = gcnew String(team[2].matches[1].htime.data());
			textBox89->Text = gcnew String(team[2].matches[1].mtime.data());

			textBox45->Text = gcnew String(team[2].matches[2].t2.data());
			textBox44->Text = gcnew String(team[2].matches[2].htime.data());
			textBox88->Text = gcnew String(team[2].matches[2].mtime.data());

			textBox57->Text = gcnew String(team[2].matches[3].t2.data());
			textBox47->Text = gcnew String(team[2].matches[3].htime.data());
			textBox87->Text = gcnew String(team[2].matches[3].mtime.data());
		}

		up1->BringToFront();


		//up2->BringToFront();
	}
	private: System::Void textBox54_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void up2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void edit_re_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void s1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {
		//s1->BringToFront();
	}
	private: System::Void button35_Click(System::Object^ sender, System::EventArgs^ e) {
		//s2->BringToFront();
	}
	private: System::Void button34_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button57_Click(System::Object^ sender, System::EventArgs^ e) {

		panel38->BringToFront();
	}
	private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {


		//click to edit ststics

		if (team[0].name == msclr::interop::marshal_as<std::string>(comboBox5->Text)) {
			textBox96->Text = gcnew String(team[0].player[0].name.data());
			textBox98->Text = gcnew String(team[0].player[1].name.data());
			textBox103->Text = gcnew String(team[0].player[2].name.data());
			textBox108->Text = gcnew String(team[0].player[3].name.data());
			textBox118->Text = gcnew String(team[0].player[4].name.data());
			textBox148->Text = gcnew String(team[0].player[5].name.data());
			textBox178->Text = gcnew String(team[0].player[6].name.data());
			textBox213->Text = gcnew String(team[0].player[7].name.data());
			textBox218->Text = gcnew String(team[0].player[8].name.data());
			textBox253->Text = gcnew String(team[0].player[9].name.data());
			textBox258->Text = gcnew String(team[0].player[10].name.data());

			textBox7->Text = gcnew String(team[0].player[0].goals.data());
			textBox8->Text = gcnew String(team[0].player[0].Assists.data());
			textBox91->Text = gcnew String(team[0].player[0].Yel.data());
			textBox92->Text = gcnew String(team[0].player[0].Red.data());

			textBox97->Text = gcnew String(team[0].player[1].goals.data());
			textBox95->Text = gcnew String(team[0].player[1].Assists.data());
			textBox94->Text = gcnew String(team[0].player[1].Yel.data());
			textBox93->Text = gcnew String(team[0].player[1].Red.data());

			textBox102->Text = gcnew String(team[0].player[2].goals.data());
			textBox101->Text = gcnew String(team[0].player[2].Assists.data());
			textBox100->Text = gcnew String(team[0].player[2].Yel.data());
			textBox99->Text = gcnew String(team[0].player[2].Red.data());

			textBox107->Text = gcnew String(team[0].player[3].goals.data());
			textBox106->Text = gcnew String(team[0].player[3].Assists.data());
			textBox105->Text = gcnew String(team[0].player[3].Yel.data());
			textBox104->Text = gcnew String(team[0].player[3].Red.data());

			textBox117->Text = gcnew String(team[0].player[4].goals.data());
			textBox116->Text = gcnew String(team[0].player[4].Assists.data());
			textBox115->Text = gcnew String(team[0].player[4].Yel.data());
			textBox114->Text = gcnew String(team[0].player[4].Red.data());

			textBox147->Text = gcnew String(team[0].player[5].goals.data());
			textBox146->Text = gcnew String(team[0].player[5].Assists.data());
			textBox145->Text = gcnew String(team[0].player[5].Yel.data());
			textBox144->Text = gcnew String(team[0].player[5].Red.data());

			textBox177->Text = gcnew String(team[0].player[6].goals.data());
			textBox176->Text = gcnew String(team[0].player[6].Assists.data());
			textBox175->Text = gcnew String(team[0].player[6].Yel.data());
			textBox174->Text = gcnew String(team[0].player[6].Red.data());

			textBox212->Text = gcnew String(team[0].player[7].goals.data());
			textBox211->Text = gcnew String(team[0].player[7].Assists.data());
			textBox210->Text = gcnew String(team[0].player[7].Yel.data());
			textBox209->Text = gcnew String(team[0].player[7].Red.data());

			textBox217->Text = gcnew String(team[0].player[8].goals.data());
			textBox216->Text = gcnew String(team[0].player[8].Assists.data());
			textBox215->Text = gcnew String(team[0].player[8].Yel.data());
			textBox214->Text = gcnew String(team[0].player[8].Red.data());

			textBox252->Text = gcnew String(team[0].player[9].goals.data());
			textBox251->Text = gcnew String(team[0].player[9].Assists.data());
			textBox250->Text = gcnew String(team[0].player[9].Yel.data());
			textBox249->Text = gcnew String(team[0].player[9].Red.data());

			textBox257->Text = gcnew String(team[0].player[10].goals.data());
			textBox256->Text = gcnew String(team[0].player[10].Assists.data());
			textBox255->Text = gcnew String(team[0].player[10].Yel.data());
			textBox254->Text = gcnew String(team[0].player[10].Red.data());


		}
		else if (team[1].name == msclr::interop::marshal_as<std::string>(comboBox5->Text)) {

			textBox96->Text = gcnew String(team[1].player[0].name.data());
			textBox98->Text = gcnew String(team[1].player[1].name.data());
			textBox103->Text = gcnew String(team[1].player[2].name.data());
			textBox108->Text = gcnew String(team[1].player[3].name.data());
			textBox118->Text = gcnew String(team[1].player[4].name.data());
			textBox148->Text = gcnew String(team[1].player[5].name.data());
			textBox178->Text = gcnew String(team[1].player[6].name.data());
			textBox213->Text = gcnew String(team[1].player[7].name.data());
			textBox218->Text = gcnew String(team[1].player[8].name.data());
			textBox253->Text = gcnew String(team[1].player[9].name.data());
			textBox258->Text = gcnew String(team[1].player[10].name.data());

			textBox7->Text = gcnew String(team[1].player[0].goals.data());
			textBox8->Text = gcnew String(team[1].player[0].Assists.data());
			textBox91->Text = gcnew String(team[1].player[0].Yel.data());
			textBox92->Text = gcnew String(team[1].player[0].Red.data());

			textBox97->Text = gcnew String(team[1].player[1].goals.data());
			textBox95->Text = gcnew String(team[1].player[1].Assists.data());
			textBox94->Text = gcnew String(team[1].player[1].Yel.data());
			textBox93->Text = gcnew String(team[1].player[1].Red.data());

			textBox102->Text = gcnew String(team[1].player[2].goals.data());
			textBox101->Text = gcnew String(team[1].player[2].Assists.data());
			textBox100->Text = gcnew String(team[1].player[2].Yel.data());
			textBox99->Text = gcnew String(team[1].player[2].Red.data());

			textBox107->Text = gcnew String(team[1].player[3].goals.data());
			textBox106->Text = gcnew String(team[1].player[3].Assists.data());
			textBox105->Text = gcnew String(team[1].player[3].Yel.data());
			textBox104->Text = gcnew String(team[1].player[3].Red.data());

			textBox117->Text = gcnew String(team[1].player[4].goals.data());
			textBox116->Text = gcnew String(team[1].player[4].Assists.data());
			textBox115->Text = gcnew String(team[1].player[4].Yel.data());
			textBox114->Text = gcnew String(team[1].player[4].Red.data());

			textBox147->Text = gcnew String(team[1].player[5].goals.data());
			textBox146->Text = gcnew String(team[1].player[5].Assists.data());
			textBox145->Text = gcnew String(team[1].player[5].Yel.data());
			textBox144->Text = gcnew String(team[1].player[5].Red.data());

			textBox177->Text = gcnew String(team[1].player[6].goals.data());
			textBox176->Text = gcnew String(team[1].player[6].Assists.data());
			textBox175->Text = gcnew String(team[1].player[6].Yel.data());
			textBox174->Text = gcnew String(team[1].player[6].Red.data());

			textBox212->Text = gcnew String(team[1].player[7].goals.data());
			textBox211->Text = gcnew String(team[1].player[7].Assists.data());
			textBox210->Text = gcnew String(team[1].player[7].Yel.data());
			textBox209->Text = gcnew String(team[1].player[7].Red.data());

			textBox217->Text = gcnew String(team[1].player[8].goals.data());
			textBox216->Text = gcnew String(team[1].player[8].Assists.data());
			textBox215->Text = gcnew String(team[1].player[8].Yel.data());
			textBox214->Text = gcnew String(team[1].player[8].Red.data());

			textBox252->Text = gcnew String(team[1].player[9].goals.data());
			textBox251->Text = gcnew String(team[1].player[9].Assists.data());
			textBox250->Text = gcnew String(team[1].player[9].Yel.data());
			textBox249->Text = gcnew String(team[1].player[9].Red.data());

			textBox257->Text = gcnew String(team[1].player[10].goals.data());
			textBox256->Text = gcnew String(team[1].player[10].Assists.data());
			textBox255->Text = gcnew String(team[1].player[10].Yel.data());
			textBox254->Text = gcnew String(team[1].player[10].Red.data());
		}
		else if (team[2].name == msclr::interop::marshal_as<std::string>(comboBox5->Text)) {

			textBox96->Text = gcnew String(team[2].player[0].name.data());
			textBox98->Text = gcnew String(team[2].player[1].name.data());
			textBox103->Text = gcnew String(team[2].player[2].name.data());
			textBox108->Text = gcnew String(team[2].player[3].name.data());
			textBox118->Text = gcnew String(team[2].player[4].name.data());
			textBox148->Text = gcnew String(team[2].player[5].name.data());
			textBox178->Text = gcnew String(team[2].player[6].name.data());
			textBox213->Text = gcnew String(team[2].player[7].name.data());
			textBox218->Text = gcnew String(team[2].player[8].name.data());
			textBox253->Text = gcnew String(team[2].player[9].name.data());
			textBox258->Text = gcnew String(team[2].player[10].name.data());


			textBox7->Text = gcnew String(team[2].player[0].goals.data());
			textBox8->Text = gcnew String(team[2].player[0].Assists.data());
			textBox91->Text = gcnew String(team[2].player[0].Yel.data());
			textBox92->Text = gcnew String(team[2].player[0].Red.data());

			textBox97->Text = gcnew String(team[2].player[1].goals.data());
			textBox95->Text = gcnew String(team[2].player[1].Assists.data());
			textBox94->Text = gcnew String(team[2].player[1].Yel.data());
			textBox93->Text = gcnew String(team[2].player[1].Red.data());

			textBox102->Text = gcnew String(team[2].player[2].goals.data());
			textBox101->Text = gcnew String(team[2].player[2].Assists.data());
			textBox100->Text = gcnew String(team[2].player[2].Yel.data());
			textBox99->Text = gcnew String(team[2].player[2].Red.data());

			textBox107->Text = gcnew String(team[2].player[3].goals.data());
			textBox106->Text = gcnew String(team[2].player[3].Assists.data());
			textBox105->Text = gcnew String(team[2].player[3].Yel.data());
			textBox104->Text = gcnew String(team[2].player[3].Red.data());

			textBox117->Text = gcnew String(team[2].player[4].goals.data());
			textBox116->Text = gcnew String(team[2].player[4].Assists.data());
			textBox115->Text = gcnew String(team[2].player[4].Yel.data());
			textBox114->Text = gcnew String(team[2].player[4].Red.data());

			textBox147->Text = gcnew String(team[2].player[5].goals.data());
			textBox146->Text = gcnew String(team[2].player[5].Assists.data());
			textBox145->Text = gcnew String(team[2].player[5].Yel.data());
			textBox144->Text = gcnew String(team[2].player[5].Red.data());

			textBox177->Text = gcnew String(team[2].player[6].goals.data());
			textBox176->Text = gcnew String(team[2].player[6].Assists.data());
			textBox175->Text = gcnew String(team[2].player[6].Yel.data());
			textBox174->Text = gcnew String(team[2].player[6].Red.data());

			textBox212->Text = gcnew String(team[2].player[7].goals.data());
			textBox211->Text = gcnew String(team[2].player[7].Assists.data());
			textBox210->Text = gcnew String(team[2].player[7].Yel.data());
			textBox209->Text = gcnew String(team[2].player[7].Red.data());

			textBox217->Text = gcnew String(team[2].player[8].goals.data());
			textBox216->Text = gcnew String(team[2].player[8].Assists.data());
			textBox215->Text = gcnew String(team[2].player[8].Yel.data());
			textBox214->Text = gcnew String(team[2].player[8].Red.data());

			textBox252->Text = gcnew String(team[2].player[9].goals.data());
			textBox251->Text = gcnew String(team[2].player[9].Assists.data());
			textBox250->Text = gcnew String(team[2].player[9].Yel.data());
			textBox249->Text = gcnew String(team[2].player[9].Red.data());

			textBox257->Text = gcnew String(team[2].player[10].goals.data());
			textBox256->Text = gcnew String(team[2].player[10].Assists.data());
			textBox255->Text = gcnew String(team[2].player[10].Yel.data());
			textBox254->Text = gcnew String(team[2].player[10].Red.data());
		}



		s1->BringToFront();














		s1->BringToFront();
	}
	private: System::Void button34_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {



		//save in edit player
		if (team[0].name == msclr::interop::marshal_as<std::string>(comboBox2->Text)) {



			team[0].player[0].name = msclr::interop::marshal_as<std::string>(textBox42->Text);
			team[0].player[1].name = msclr::interop::marshal_as<std::string>(textBox41->Text);
			team[0].player[2].name = msclr::interop::marshal_as<std::string>(textBox40->Text);
			team[0].player[3].name = msclr::interop::marshal_as<std::string>(textBox39->Text);
			team[0].player[4].name = msclr::interop::marshal_as<std::string>(textBox38->Text);
			team[0].player[5].name = msclr::interop::marshal_as<std::string>(textBox37->Text);
			team[0].player[6].name = msclr::interop::marshal_as<std::string>(textBox36->Text);
			team[0].player[7].name = msclr::interop::marshal_as<std::string>(textBox35->Text);
			team[0].player[8].name = msclr::interop::marshal_as<std::string>(textBox34->Text);
			team[0].player[9].name = msclr::interop::marshal_as<std::string>(textBox33->Text);
			team[0].player[10].name = msclr::interop::marshal_as<std::string>(textBox32->Text);
		}
		else if (team[1].name == msclr::interop::marshal_as<std::string>(comboBox2->Text)) {

			team[1].player[0].name = msclr::interop::marshal_as<std::string>(textBox42->Text);
			team[1].player[1].name = msclr::interop::marshal_as<std::string>(textBox41->Text);
			team[1].player[2].name = msclr::interop::marshal_as<std::string>(textBox40->Text);
			team[1].player[3].name = msclr::interop::marshal_as<std::string>(textBox39->Text);
			team[1].player[4].name = msclr::interop::marshal_as<std::string>(textBox38->Text);
			team[1].player[5].name = msclr::interop::marshal_as<std::string>(textBox37->Text);
			team[1].player[6].name = msclr::interop::marshal_as<std::string>(textBox36->Text);
			team[1].player[7].name = msclr::interop::marshal_as<std::string>(textBox35->Text);
			team[1].player[8].name = msclr::interop::marshal_as<std::string>(textBox34->Text);
			team[1].player[9].name = msclr::interop::marshal_as<std::string>(textBox33->Text);
			team[1].player[10].name = msclr::interop::marshal_as<std::string>(textBox32->Text);
		}
		else if (team[2].name == msclr::interop::marshal_as<std::string>(comboBox2->Text)) {

			team[2].player[0].name = msclr::interop::marshal_as<std::string>(textBox42->Text);
			team[2].player[1].name = msclr::interop::marshal_as<std::string>(textBox41->Text);
			team[2].player[2].name = msclr::interop::marshal_as<std::string>(textBox40->Text);
			team[2].player[3].name = msclr::interop::marshal_as<std::string>(textBox39->Text);
			team[2].player[4].name = msclr::interop::marshal_as<std::string>(textBox38->Text);
			team[2].player[5].name = msclr::interop::marshal_as<std::string>(textBox37->Text);
			team[2].player[6].name = msclr::interop::marshal_as<std::string>(textBox36->Text);
			team[2].player[7].name = msclr::interop::marshal_as<std::string>(textBox35->Text);
			team[2].player[8].name = msclr::interop::marshal_as<std::string>(textBox34->Text);
			team[2].player[9].name = msclr::interop::marshal_as<std::string>(textBox33->Text);
			team[2].player[10].name = msclr::interop::marshal_as<std::string>(textBox32->Text);
		}

	}
	private: System::Void button54_Click(System::Object^ sender, System::EventArgs^ e) {


		//save in statistics
		if (team[0].player[0].name == msclr::interop::marshal_as<std::string>(textBox96->Text)) {

			team[0].player[0].goals = msclr::interop::marshal_as<std::string>(textBox7->Text);
			team[0].player[0].Assists = msclr::interop::marshal_as<std::string>(textBox8->Text);
			team[0].player[0].Yel = msclr::interop::marshal_as<std::string>(textBox91->Text);
			team[0].player[0].Red = msclr::interop::marshal_as<std::string>(textBox92->Text);

			team[0].player[1].goals = msclr::interop::marshal_as<std::string>(textBox97->Text);
			team[0].player[1].Assists = msclr::interop::marshal_as<std::string>(textBox95->Text);
			team[0].player[1].Yel = msclr::interop::marshal_as<std::string>(textBox94->Text);
			team[0].player[1].Red = msclr::interop::marshal_as<std::string>(textBox93->Text);

			team[0].player[2].goals = msclr::interop::marshal_as<std::string>(textBox102->Text);
			team[0].player[2].Assists = msclr::interop::marshal_as<std::string>(textBox101->Text);
			team[0].player[2].Yel = msclr::interop::marshal_as<std::string>(textBox100->Text);
			team[0].player[2].Red = msclr::interop::marshal_as<std::string>(textBox99->Text);

			team[0].player[3].goals = msclr::interop::marshal_as<std::string>(textBox107->Text);
			team[0].player[3].Assists = msclr::interop::marshal_as<std::string>(textBox106->Text);
			team[0].player[3].Yel = msclr::interop::marshal_as<std::string>(textBox105->Text);
			team[0].player[3].Red = msclr::interop::marshal_as<std::string>(textBox104->Text);

			team[0].player[4].goals = msclr::interop::marshal_as<std::string>(textBox117->Text);
			team[0].player[4].Assists = msclr::interop::marshal_as<std::string>(textBox116->Text);
			team[0].player[4].Yel = msclr::interop::marshal_as<std::string>(textBox115->Text);
			team[0].player[4].Red = msclr::interop::marshal_as<std::string>(textBox114->Text);

			team[0].player[5].goals = msclr::interop::marshal_as<std::string>(textBox147->Text);
			team[0].player[5].Assists = msclr::interop::marshal_as<std::string>(textBox146->Text);
			team[0].player[5].Yel = msclr::interop::marshal_as<std::string>(textBox145->Text);
			team[0].player[5].Red = msclr::interop::marshal_as<std::string>(textBox144->Text);

			team[0].player[6].goals = msclr::interop::marshal_as<std::string>(textBox177->Text);
			team[0].player[6].Assists = msclr::interop::marshal_as<std::string>(textBox176->Text);
			team[0].player[6].Yel = msclr::interop::marshal_as<std::string>(textBox175->Text);
			team[0].player[6].Red = msclr::interop::marshal_as<std::string>(textBox174->Text);

			team[0].player[7].goals = msclr::interop::marshal_as<std::string>(textBox212->Text);
			team[0].player[7].Assists = msclr::interop::marshal_as<std::string>(textBox211->Text);
			team[0].player[7].Yel = msclr::interop::marshal_as<std::string>(textBox210->Text);
			team[0].player[7].Red = msclr::interop::marshal_as<std::string>(textBox209->Text);

			team[0].player[8].goals = msclr::interop::marshal_as<std::string>(textBox217->Text);
			team[0].player[8].Assists = msclr::interop::marshal_as<std::string>(textBox216->Text);
			team[0].player[8].Yel = msclr::interop::marshal_as<std::string>(textBox215->Text);
			team[0].player[8].Red = msclr::interop::marshal_as<std::string>(textBox214->Text);

			team[0].player[9].goals = msclr::interop::marshal_as<std::string>(textBox252->Text);
			team[0].player[9].Assists = msclr::interop::marshal_as<std::string>(textBox251->Text);
			team[0].player[9].Yel = msclr::interop::marshal_as<std::string>(textBox250->Text);
			team[0].player[9].Red = msclr::interop::marshal_as<std::string>(textBox249->Text);

			team[0].player[10].goals = msclr::interop::marshal_as<std::string>(textBox257->Text);
			team[0].player[10].Assists = msclr::interop::marshal_as<std::string>(textBox256->Text);
			team[0].player[10].Yel = msclr::interop::marshal_as<std::string>(textBox255->Text);
			team[0].player[10].Red = msclr::interop::marshal_as<std::string>(textBox254->Text);


		}
		else if (team[1].player[0].name == msclr::interop::marshal_as<std::string>(textBox96->Text)) {


			team[1].player[0].goals = msclr::interop::marshal_as<std::string>(textBox7->Text);
			team[1].player[0].Assists = msclr::interop::marshal_as<std::string>(textBox8->Text);
			team[1].player[0].Yel = msclr::interop::marshal_as<std::string>(textBox91->Text);
			team[1].player[0].Red = msclr::interop::marshal_as<std::string>(textBox92->Text);

			team[1].player[1].goals = msclr::interop::marshal_as<std::string>(textBox97->Text);
			team[1].player[1].Assists = msclr::interop::marshal_as<std::string>(textBox95->Text);
			team[1].player[1].Yel = msclr::interop::marshal_as<std::string>(textBox94->Text);
			team[1].player[1].Red = msclr::interop::marshal_as<std::string>(textBox93->Text);

			team[1].player[2].goals = msclr::interop::marshal_as<std::string>(textBox102->Text);
			team[1].player[2].Assists = msclr::interop::marshal_as<std::string>(textBox101->Text);
			team[1].player[2].Yel = msclr::interop::marshal_as<std::string>(textBox100->Text);
			team[1].player[2].Red = msclr::interop::marshal_as<std::string>(textBox99->Text);

			team[1].player[3].goals = msclr::interop::marshal_as<std::string>(textBox107->Text);
			team[1].player[3].Assists = msclr::interop::marshal_as<std::string>(textBox106->Text);
			team[1].player[3].Yel = msclr::interop::marshal_as<std::string>(textBox105->Text);
			team[1].player[3].Red = msclr::interop::marshal_as<std::string>(textBox104->Text);

			team[1].player[4].goals = msclr::interop::marshal_as<std::string>(textBox117->Text);
			team[1].player[4].Assists = msclr::interop::marshal_as<std::string>(textBox116->Text);
			team[1].player[4].Yel = msclr::interop::marshal_as<std::string>(textBox115->Text);
			team[1].player[4].Red = msclr::interop::marshal_as<std::string>(textBox114->Text);

			team[1].player[5].goals = msclr::interop::marshal_as<std::string>(textBox147->Text);
			team[1].player[5].Assists = msclr::interop::marshal_as<std::string>(textBox146->Text);
			team[1].player[5].Yel = msclr::interop::marshal_as<std::string>(textBox145->Text);
			team[1].player[5].Red = msclr::interop::marshal_as<std::string>(textBox144->Text);

			team[1].player[6].goals = msclr::interop::marshal_as<std::string>(textBox177->Text);
			team[1].player[6].Assists = msclr::interop::marshal_as<std::string>(textBox176->Text);
			team[1].player[6].Yel = msclr::interop::marshal_as<std::string>(textBox175->Text);
			team[1].player[6].Red = msclr::interop::marshal_as<std::string>(textBox174->Text);

			team[1].player[7].goals = msclr::interop::marshal_as<std::string>(textBox212->Text);
			team[1].player[7].Assists = msclr::interop::marshal_as<std::string>(textBox211->Text);
			team[1].player[7].Yel = msclr::interop::marshal_as<std::string>(textBox210->Text);
			team[1].player[7].Red = msclr::interop::marshal_as<std::string>(textBox209->Text);

			team[1].player[8].goals = msclr::interop::marshal_as<std::string>(textBox217->Text);
			team[1].player[8].Assists = msclr::interop::marshal_as<std::string>(textBox216->Text);
			team[1].player[8].Yel = msclr::interop::marshal_as<std::string>(textBox215->Text);
			team[1].player[8].Red = msclr::interop::marshal_as<std::string>(textBox214->Text);

			team[1].player[9].goals = msclr::interop::marshal_as<std::string>(textBox252->Text);
			team[1].player[9].Assists = msclr::interop::marshal_as<std::string>(textBox251->Text);
			team[1].player[9].Yel = msclr::interop::marshal_as<std::string>(textBox250->Text);
			team[1].player[9].Red = msclr::interop::marshal_as<std::string>(textBox249->Text);

			team[1].player[10].goals = msclr::interop::marshal_as<std::string>(textBox257->Text);
			team[1].player[10].Assists = msclr::interop::marshal_as<std::string>(textBox256->Text);
			team[1].player[10].Yel = msclr::interop::marshal_as<std::string>(textBox255->Text);
			team[1].player[10].Red = msclr::interop::marshal_as<std::string>(textBox254->Text);
		}
		else if (team[2].player[0].name == msclr::interop::marshal_as<std::string>(textBox96->Text)) {


			team[2].player[0].goals = msclr::interop::marshal_as<std::string>(textBox7->Text);
			team[2].player[0].Assists = msclr::interop::marshal_as<std::string>(textBox8->Text);
			team[2].player[0].Yel = msclr::interop::marshal_as<std::string>(textBox91->Text);
			team[2].player[0].Red = msclr::interop::marshal_as<std::string>(textBox92->Text);

			team[2].player[1].goals = msclr::interop::marshal_as<std::string>(textBox97->Text);
			team[2].player[1].Assists = msclr::interop::marshal_as<std::string>(textBox95->Text);
			team[2].player[1].Yel = msclr::interop::marshal_as<std::string>(textBox94->Text);
			team[2].player[1].Red = msclr::interop::marshal_as<std::string>(textBox93->Text);

			team[2].player[2].goals = msclr::interop::marshal_as<std::string>(textBox102->Text);
			team[2].player[2].Assists = msclr::interop::marshal_as<std::string>(textBox101->Text);
			team[2].player[2].Yel = msclr::interop::marshal_as<std::string>(textBox100->Text);
			team[2].player[2].Red = msclr::interop::marshal_as<std::string>(textBox99->Text);

			team[2].player[3].goals = msclr::interop::marshal_as<std::string>(textBox107->Text);
			team[2].player[3].Assists = msclr::interop::marshal_as<std::string>(textBox106->Text);
			team[2].player[3].Yel = msclr::interop::marshal_as<std::string>(textBox105->Text);
			team[2].player[3].Red = msclr::interop::marshal_as<std::string>(textBox104->Text);

			team[2].player[4].goals = msclr::interop::marshal_as<std::string>(textBox117->Text);
			team[2].player[4].Assists = msclr::interop::marshal_as<std::string>(textBox116->Text);
			team[2].player[4].Yel = msclr::interop::marshal_as<std::string>(textBox115->Text);
			team[2].player[4].Red = msclr::interop::marshal_as<std::string>(textBox114->Text);

			team[2].player[5].goals = msclr::interop::marshal_as<std::string>(textBox147->Text);
			team[2].player[5].Assists = msclr::interop::marshal_as<std::string>(textBox146->Text);
			team[2].player[5].Yel = msclr::interop::marshal_as<std::string>(textBox145->Text);
			team[2].player[5].Red = msclr::interop::marshal_as<std::string>(textBox144->Text);

			team[2].player[6].goals = msclr::interop::marshal_as<std::string>(textBox177->Text);
			team[2].player[6].Assists = msclr::interop::marshal_as<std::string>(textBox176->Text);
			team[2].player[6].Yel = msclr::interop::marshal_as<std::string>(textBox175->Text);
			team[2].player[6].Red = msclr::interop::marshal_as<std::string>(textBox174->Text);

			team[2].player[7].goals = msclr::interop::marshal_as<std::string>(textBox212->Text);
			team[2].player[7].Assists = msclr::interop::marshal_as<std::string>(textBox211->Text);
			team[2].player[7].Yel = msclr::interop::marshal_as<std::string>(textBox210->Text);
			team[2].player[7].Red = msclr::interop::marshal_as<std::string>(textBox209->Text);

			team[2].player[8].goals = msclr::interop::marshal_as<std::string>(textBox217->Text);
			team[2].player[8].Assists = msclr::interop::marshal_as<std::string>(textBox216->Text);
			team[2].player[8].Yel = msclr::interop::marshal_as<std::string>(textBox215->Text);
			team[2].player[8].Red = msclr::interop::marshal_as<std::string>(textBox214->Text);

			team[2].player[9].goals = msclr::interop::marshal_as<std::string>(textBox252->Text);
			team[2].player[9].Assists = msclr::interop::marshal_as<std::string>(textBox251->Text);
			team[2].player[9].Yel = msclr::interop::marshal_as<std::string>(textBox250->Text);
			team[2].player[9].Red = msclr::interop::marshal_as<std::string>(textBox249->Text);

			team[2].player[10].goals = msclr::interop::marshal_as<std::string>(textBox257->Text);
			team[2].player[10].Assists = msclr::interop::marshal_as<std::string>(textBox256->Text);
			team[2].player[10].Yel = msclr::interop::marshal_as<std::string>(textBox255->Text);
			team[2].player[10].Red = msclr::interop::marshal_as<std::string>(textBox254->Text);
		}





	}
	private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {


		//save in upcomming 
		if (team[0].name == msclr::interop::marshal_as<std::string>(textBox54->Text)) {







			team[0].matches[0].t2 = msclr::interop::marshal_as<std::string>(textBox53->Text);
			team[0].matches[0].htime = msclr::interop::marshal_as<std::string>(textBox59->Text);
			team[0].matches[0].mtime = msclr::interop::marshal_as<std::string>(textBox90->Text);

			team[0].matches[1].t2 = msclr::interop::marshal_as<std::string>(textBox49->Text);
			team[0].matches[1].htime = msclr::interop::marshal_as<std::string>(textBox43->Text);
			team[0].matches[1].mtime = msclr::interop::marshal_as<std::string>(textBox89->Text);

			team[0].matches[2].t2 = msclr::interop::marshal_as<std::string>(textBox45->Text);
			team[0].matches[2].htime = msclr::interop::marshal_as<std::string>(textBox44->Text);
			team[0].matches[2].mtime = msclr::interop::marshal_as<std::string>(textBox88->Text);

			team[0].matches[3].t2 = msclr::interop::marshal_as<std::string>(textBox57->Text);
			team[0].matches[3].htime = msclr::interop::marshal_as<std::string>(textBox47->Text);
			team[0].matches[3].mtime = msclr::interop::marshal_as<std::string>(textBox87->Text);
		}
		else if (team[1].name == msclr::interop::marshal_as<std::string>(textBox54->Text)) {

			team[1].matches[0].t2 = msclr::interop::marshal_as<std::string>(textBox53->Text);
			team[1].matches[0].htime = msclr::interop::marshal_as<std::string>(textBox59->Text);
			team[1].matches[0].mtime = msclr::interop::marshal_as<std::string>(textBox90->Text);

			team[1].matches[1].t2 = msclr::interop::marshal_as<std::string>(textBox49->Text);
			team[1].matches[1].htime = msclr::interop::marshal_as<std::string>(textBox43->Text);
			team[1].matches[1].mtime = msclr::interop::marshal_as<std::string>(textBox89->Text);

			team[1].matches[2].t2 = msclr::interop::marshal_as<std::string>(textBox45->Text);
			team[1].matches[2].htime = msclr::interop::marshal_as<std::string>(textBox44->Text);
			team[1].matches[2].mtime = msclr::interop::marshal_as<std::string>(textBox88->Text);

			team[1].matches[3].t2 = msclr::interop::marshal_as<std::string>(textBox57->Text);
			team[1].matches[3].htime = msclr::interop::marshal_as<std::string>(textBox47->Text);
			team[1].matches[3].mtime = msclr::interop::marshal_as<std::string>(textBox87->Text);
		}
		else if (team[2].name == msclr::interop::marshal_as<std::string>(textBox54->Text)) {

			team[2].matches[0].t2 = msclr::interop::marshal_as<std::string>(textBox53->Text);
			team[2].matches[0].htime = msclr::interop::marshal_as<std::string>(textBox59->Text);
			team[2].matches[0].mtime = msclr::interop::marshal_as<std::string>(textBox90->Text);

			team[2].matches[1].t2 = msclr::interop::marshal_as<std::string>(textBox49->Text);
			team[2].matches[1].htime = msclr::interop::marshal_as<std::string>(textBox43->Text);
			team[2].matches[1].mtime = msclr::interop::marshal_as<std::string>(textBox89->Text);

			team[2].matches[2].t2 = msclr::interop::marshal_as<std::string>(textBox45->Text);
			team[2].matches[2].htime = msclr::interop::marshal_as<std::string>(textBox44->Text);
			team[2].matches[2].mtime = msclr::interop::marshal_as<std::string>(textBox88->Text);

			team[2].matches[3].t2 = msclr::interop::marshal_as<std::string>(textBox57->Text);
			team[2].matches[3].htime = msclr::interop::marshal_as<std::string>(textBox47->Text);
			team[2].matches[3].mtime = msclr::interop::marshal_as<std::string>(textBox87->Text);
		}


	}
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {


		//save in edit result

		team1[0].m1 = msclr::interop::marshal_as<std::string>(textBox24->Text);
		team1[0].r1 = msclr::interop::marshal_as<std::string>(textBox22->Text);
		team1[0].r2 = msclr::interop::marshal_as<std::string>(textBox21->Text);
		team1[0].m2 = msclr::interop::marshal_as<std::string>(textBox23->Text);



		team1[1].m1 = msclr::interop::marshal_as<std::string>(textBox28->Text);
		team1[1].r1 = msclr::interop::marshal_as<std::string>(textBox26->Text);
		team1[1].r2 = msclr::interop::marshal_as<std::string>(textBox25->Text);
		team1[1].m2 = msclr::interop::marshal_as<std::string>(textBox27->Text);

		team1[2].m1 = msclr::interop::marshal_as<std::string>(textBox17->Text);
		team1[2].r1 = msclr::interop::marshal_as<std::string>(textBox11->Text);
		team1[2].r2 = msclr::interop::marshal_as<std::string>(textBox10->Text);
		team1[2].m2 = msclr::interop::marshal_as<std::string>(textBox16->Text);

	}
	private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {


		///edit data
		
		editdata();






		textBox30->Text = gcnew String(team[0].name.data());
		textBox29->Text = gcnew String(team[1].name.data());
		textBox31->Text = gcnew String(team[2].name.data());
		comboBox1->Items->Clear();
		comboBox1->Items->Add(textBox30->Text);
		comboBox1->Items->Add(textBox29->Text);
		comboBox1->Items->Add(textBox31->Text);
		comboBox2->Items->Clear();
		comboBox2->Items->Add(textBox30->Text);
		comboBox2->Items->Add(textBox29->Text);
		comboBox2->Items->Add(textBox31->Text);
		comboBox3->Items->Clear();
		comboBox3->Items->Add(textBox30->Text);
		comboBox3->Items->Add(textBox29->Text);
		comboBox3->Items->Add(textBox31->Text);
		comboBox4->Items->Clear();
		comboBox4->Items->Add(textBox30->Text);
		comboBox4->Items->Add(textBox29->Text);
		comboBox4->Items->Add(textBox31->Text);
		comboBox5->Items->Clear();
		comboBox5->Items->Add(textBox30->Text);
		comboBox5->Items->Add(textBox29->Text);
		comboBox5->Items->Add(textBox31->Text);
		int y = 0;
		if (textBox30->Text != "")y++;
		if (textBox31->Text != "")y++;
		if (textBox29->Text != "")y++;
		if (y == 1) { label10->Text = "1"; label11->Text = "11"; }
		if (y == 2) { label10->Text = "2"; label11->Text = "22"; }
		if (y == 3) { label10->Text = "3"; label11->Text = "33"; }

		textBox24->Text = gcnew String(team1[0].m1.data());
		textBox22->Text = gcnew String(team1[0].r1.data());
		textBox21->Text = gcnew String(team1[0].r2.data());
		textBox23->Text = gcnew String(team1[0].m2.data());

		textBox28->Text = gcnew String(team1[1].m1.data());
		textBox26->Text = gcnew String(team1[1].r1.data());
		textBox25->Text = gcnew String(team1[1].r2.data());
		textBox27->Text = gcnew String(team1[1].m2.data());

		textBox17->Text = gcnew String(team1[2].m1.data());
		textBox11->Text = gcnew String(team1[2].r1.data());
		textBox10->Text = gcnew String(team1[2].r2.data());
		textBox16->Text = gcnew String(team1[2].m2.data());


		home->BringToFront();


	}
	private: System::Void button43_Click(System::Object^ sender, System::EventArgs^ e) {

		save();
		//save diclaimer


	}
	private: System::Void button33_Click_1(System::Object^ sender, System::EventArgs^ e) {

		//new data
		
		newdata();





		home->BringToFront();

	}


	private: System::Void textBox30_TextChanged(System::Object^ sender, System::EventArgs^ e) {


	}
	private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		//edit players
		if (team[0].name == msclr::interop::marshal_as<std::string>(comboBox2->Text)) {
			textBox42->Text = gcnew String(team[0].player[0].name.data());
			textBox41->Text = gcnew String(team[0].player[1].name.data());
			textBox40->Text = gcnew String(team[0].player[2].name.data());
			textBox39->Text = gcnew String(team[0].player[3].name.data());
			textBox38->Text = gcnew String(team[0].player[4].name.data());
			textBox37->Text = gcnew String(team[0].player[5].name.data());
			textBox36->Text = gcnew String(team[0].player[6].name.data());
			textBox35->Text = gcnew String(team[0].player[7].name.data());
			textBox34->Text = gcnew String(team[0].player[8].name.data());
			textBox33->Text = gcnew String(team[0].player[9].name.data());
			textBox32->Text = gcnew String(team[0].player[10].name.data());


		}
		else if (team[1].name == msclr::interop::marshal_as<std::string>(comboBox2->Text)) {

			textBox42->Text = gcnew String(team[1].player[0].name.data());
			textBox41->Text = gcnew String(team[1].player[1].name.data());
			textBox40->Text = gcnew String(team[1].player[2].name.data());
			textBox39->Text = gcnew String(team[1].player[3].name.data());
			textBox38->Text = gcnew String(team[1].player[4].name.data());
			textBox37->Text = gcnew String(team[1].player[5].name.data());
			textBox36->Text = gcnew String(team[1].player[6].name.data());
			textBox35->Text = gcnew String(team[1].player[7].name.data());
			textBox34->Text = gcnew String(team[1].player[8].name.data());
			textBox33->Text = gcnew String(team[1].player[9].name.data());
			textBox32->Text = gcnew String(team[1].player[10].name.data());
		}
		else if (team[2].name == msclr::interop::marshal_as<std::string>(comboBox2->Text)) {

			textBox42->Text = gcnew String(team[2].player[0].name.data());
			textBox41->Text = gcnew String(team[2].player[1].name.data());
			textBox40->Text = gcnew String(team[2].player[2].name.data());
			textBox39->Text = gcnew String(team[2].player[3].name.data());
			textBox38->Text = gcnew String(team[2].player[4].name.data());
			textBox37->Text = gcnew String(team[2].player[5].name.data());
			textBox36->Text = gcnew String(team[2].player[6].name.data());
			textBox35->Text = gcnew String(team[2].player[7].name.data());
			textBox34->Text = gcnew String(team[2].player[8].name.data());
			textBox33->Text = gcnew String(team[2].player[9].name.data());
			textBox32->Text = gcnew String(team[2].player[10].name.data());
		}


	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {


	}
	private: System::Void comboBox5_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel39_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	};
}