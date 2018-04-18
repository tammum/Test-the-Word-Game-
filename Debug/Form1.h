#pragma once
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
#include<iomanip>
#include<vcclr.h>
#include <msclr\marshal_cppstd.h>
#include<algorithm>
using namespace std;
long long int i,score=0,life=3;


namespace TestTheWord {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Media;
	using namespace System::Runtime::InteropServices;
	

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  start_button;
	protected: 
	private: System::Windows::Forms::Button^  change_button;
	private: System::Windows::Forms::Button^  music_button;
	private: System::Windows::Forms::Button^  check_button;
	private: System::Windows::Forms::Button^  developer_button;
	private: System::Windows::Forms::Button^  howplay_button;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->start_button = (gcnew System::Windows::Forms::Button());
			this->change_button = (gcnew System::Windows::Forms::Button());
			this->music_button = (gcnew System::Windows::Forms::Button());
			this->check_button = (gcnew System::Windows::Forms::Button());
			this->developer_button = (gcnew System::Windows::Forms::Button());
			this->howplay_button = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// start_button
			// 
			this->start_button->Location = System::Drawing::Point(295, 363);
			this->start_button->Name = L"start_button";
			this->start_button->Size = System::Drawing::Size(163, 55);
			this->start_button->TabIndex = 0;
			this->start_button->Text = L"start";
			this->start_button->UseVisualStyleBackColor = true;
			this->start_button->Click += gcnew System::EventHandler(this, &Form1::start_button_Click);
			// 
			// change_button
			// 
			this->change_button->Location = System::Drawing::Point(467, 45);
			this->change_button->Name = L"change_button";
			this->change_button->Size = System::Drawing::Size(106, 23);
			this->change_button->TabIndex = 1;
			this->change_button->Text = L"change image";
			this->change_button->UseVisualStyleBackColor = true;
			this->change_button->Click += gcnew System::EventHandler(this, &Form1::change_button_Click);
			// 
			// music_button
			// 
			this->music_button->Location = System::Drawing::Point(46, 363);
			this->music_button->Name = L"music_button";
			this->music_button->Size = System::Drawing::Size(75, 23);
			this->music_button->TabIndex = 0;
			this->music_button->TabStop = false;
			this->music_button->Text = L"RHYMES";
			this->music_button->UseVisualStyleBackColor = true;
			this->music_button->Click += gcnew System::EventHandler(this, &Form1::music_button_Click);
			// 
			// check_button
			// 
			this->check_button->Location = System::Drawing::Point(478, 122);
			this->check_button->Name = L"check_button";
			this->check_button->Size = System::Drawing::Size(75, 23);
			this->check_button->TabIndex = 3;
			this->check_button->Text = L"check";
			this->check_button->UseVisualStyleBackColor = true;
			this->check_button->Click += gcnew System::EventHandler(this, &Form1::check_button_Click);
			// 
			// developer_button
			// 
			this->developer_button->Location = System::Drawing::Point(27, 407);
			this->developer_button->Name = L"developer_button";
			this->developer_button->Size = System::Drawing::Size(133, 23);
			this->developer_button->TabIndex = 0;
			this->developer_button->TabStop = false;
			this->developer_button->Text = L"developer\'s information";
			this->developer_button->UseVisualStyleBackColor = true;
			this->developer_button->Click += gcnew System::EventHandler(this, &Form1::developer_button_Click);
			// 
			// howplay_button
			// 
			this->howplay_button->Location = System::Drawing::Point(577, 407);
			this->howplay_button->Name = L"howplay_button";
			this->howplay_button->Size = System::Drawing::Size(75, 23);
			this->howplay_button->TabIndex = 0;
			this->howplay_button->TabStop = false;
			this->howplay_button->Text = L"how to play";
			this->howplay_button->UseVisualStyleBackColor = true;
			this->howplay_button->Click += gcnew System::EventHandler(this, &Form1::howplay_button_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->pictureBox1->Location = System::Drawing::Point(27, 28);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(389, 274);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(654, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(53, 331);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(111, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Write your word here :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(603, 28);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"SCORE :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(565, 88);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(87, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"LIFE REMAINS :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(658, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 14;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(184, 331);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 15;
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::textbox1_key);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ClientSize = System::Drawing::Size(715, 452);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->howplay_button);
			this->Controls->Add(this->developer_button);
			this->Controls->Add(this->check_button);
			this->Controls->Add(this->music_button);
			this->Controls->Add(this->change_button);
			this->Controls->Add(this->start_button);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Spelling Challenge";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		   private: int comparing(string temp)
        {
            //throw new NotImplementedException();
            if (temp == "tree")
                return 1;
            else if (temp == "car")
                return 2;
            else if (temp == "football")
                return 3;
            else if (temp == "rat"||temp=="mouse")
                return 4;
            else if (temp == "cat")
                return 5;
            else if (temp == "bear")
                return 6;
            else if (temp == "lion")
                return 7;
            else if (temp == "horse")
                return 8;
            else if (temp == "cow")
                return 9;
            else if (temp == "dog")
                return 10;
            else if (temp == "elephant")
                return 11;
            else if (temp == "tiger")
                return 12;
            else if (temp == "turtle")
                return 13;
            else if (temp == "zebra")
                return 14;
            else if (temp == "goat")
                return 15;
            else if (temp == "mango")
                return 16;
            else if (temp == "grape")
                return 17;
            else if (temp == "jackfruit")
                return 18;
            else if (temp == "banana")
                return 19;
            else if (temp == "lichi")
                return 20;
            else if (temp == "potato")
                return 21;
            else if (temp == "tomato")
                return 22;
            else if (temp == "ant")
                return 23;
            else if (temp == "louse")
                return 24;
            else if (temp == "leech")
                return 25;
            else if (temp == "cockroach")
                return 26;
            else if (temp == "bat")
                return 27;
            else if (temp == "crow")
                return 28;
            else if (temp == "owl")
                return 29;
            else if (temp == "boat"||temp=="ship")
                return 30;
            else if (temp == "snake")
                return 31;
            else if (temp == "frog")
                return 32;
            else if (temp == "caterpillar")
                return 33;
            else if (temp == "guitar")
                return 34;
            else if (temp == "flute")
                return 35;
            else if (temp == "piano")
                return 36;
            else if (temp == "violin")
                return 37;
            else if (temp == "chilli")
                return 38;
            else if (temp == "sword")
                return 39;
            else if (temp == "gun")
                return 40;
            else if (temp == "hilsha"||temp=="fish")
                return 41;
            else if (temp == "lobster"||temp=="shrimp")
                return 42;
            else if (temp == "rupchanda"||temp=="fish")
                return 43;
            else if (temp == "whale")
                return 44;
            else if (temp == "seal")
                return 45;
            else if (temp == "spade")
                return 46;
            else if (temp == "saw")
                return 47;
            else if (temp == "axe")
                return 48;
            else if (temp == "ice")
                return 49;
            else if (temp == "world"||temp=="earth")
                return 50;
            else return 0;
            
        }

	private: System::Void change_button_Click(System::Object^  sender, System::EventArgs^  e) {
				 srand(time(0));
				 i=1+rand()%50;
				 pictureBox1->Image=Image::FromFile(""+i+".png");
				 textBox1->Enabled=true;
				  textBox1->Focus();
				  textBox1->Text="";
				 change_button->Enabled=false;
				 check_button->Enabled=true;
				
				 
			 }
private: System::Void start_button_Click(System::Object^  sender, System::EventArgs^  e) {
			 pictureBox1->Image=Image::FromFile("0.png");
			 score=0;
			 life=3;
			 label1->Text=Convert::ToString(score);
			 label2->Text=Convert::ToString(life);
			 start_button->Enabled=false;
			 check_button->Enabled=false;
			 change_button->Enabled=true;
			 change_button->PerformClick();

		 }
private: System::Void check_button_Click(System::Object^  sender, System::EventArgs^  e) {
			 SoundPlayer^myplayer1=gcnew SoundPlayer();
			 String ^ string1=textBox1->Text;
			 String^ToLower (string1);
			 string mystring,valid_string;
			 mystring=managedStrToNative(string1);
			 transform(mystring.begin(),mystring.end(),mystring.begin(),tolower);
			 int result=comparing(mystring);
			 if(result==i)
			 {
				 score=score+10;
				 myplayer1->SoundLocation="victory.wav";
				 myplayer1->Play();
			 }
			 else
				 {life=life-1;
			  myplayer1->SoundLocation="failure.wav";
				 myplayer1->Play();
			 if(life<=0)
			{ 
				MessageBox::Show("GAME OVER!!!!\nSCORE :"+score,"ATTENTION PLEASE!!!!",MessageBoxButtons::OK,MessageBoxIcon::Information);
				start_button->Enabled=true;
			  change_button->Enabled=false;
			  check_button->Enabled=false;
			  start_button->Focus();
			  start_button->PerformClick();
			 }
			 }
			 label1->Text=Convert::ToString(score);
			 label2->Text=Convert::ToString(life);
			 check_button->Enabled=false;
			 change_button->Enabled=true;
			 change_button->PerformClick();
			
			 
		 }

  std::string managedStrToNative(System::String^ sysstr){

  IntPtr ip = Marshal::StringToHGlobalAnsi(sysstr);
  std::string outString = static_cast<const char*>(ip.ToPointer());
  Marshal::FreeHGlobal(ip);
  return outString;  
        }
private: System::Void music_button_Click(System::Object^  sender, System::EventArgs^  e) {
			SoundPlayer^ myplayer2=gcnew SoundPlayer();
			srand(time(0));
			int j=1+rand()%7;
				myplayer2->SoundLocation=""+j+".wav";
				myplayer2->Load();
				myplayer2->Play();
			
		 }
	
private: System::Void textbox1_key(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if(e->KeyCode==Keys::Enter)
				 check_button->PerformClick();
		 }
private: System::Void howplay_button_Click(System::Object^  sender, System::EventArgs^  e) {
			SoundPlayer^ myplayer3=gcnew SoundPlayer();
			myplayer3->SoundLocation="4.wav";
			myplayer3->Load();
			myplayer3->Play();
			myplayer3->PlayLooping();
			 MessageBox::Show("Start game\nwrite the name\npress ENTER....Thats all enjoy;","PLEASE READ..",MessageBoxButtons::OKCancel,MessageBoxIcon::Information);
		 }
private: System::Void developer_button_Click(System::Object^  sender, System::EventArgs^  e) {
			 SoundPlayer^ myplayer4=gcnew SoundPlayer();
			myplayer4->SoundLocation="3.wav";
			myplayer4->Load();
			myplayer4->Play();
			myplayer4->PlayLooping();
 
			 MessageBox::Show("Idea and developed by:\nTAMMUM ISLAM\nStudent of MBSTU\nDepartment Of Computer Science And Engineering\nEmail: tammumislam@gmail.com\nmobile:01757419116","HELLO CHILDREN !!HOPE YOU WILL ENJOY THIS..",MessageBoxButtons::OKCancel,MessageBoxIcon::Information);
		 }
};
}

