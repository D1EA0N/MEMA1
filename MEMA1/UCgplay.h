#pragma once
#include "UCquestion.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace MEMA1 {

	/// <summary>
	/// Summary for UCgplay
	/// </summary>
	public ref class UCgplay : public System::Windows::Forms::UserControl
	{
	private:
		UCquestion^ main = gcnew UCquestion();
		int clickcount = 1;
		void StoryLine(int clickcount) 
		{
			switch (clickcount) {
			case 1:
				lbltitle->Text = "THE FIRST SETBACK";
				lbldesc->Text = "IN A GRIPPING TALE, CYBER CHALLENGE, THE VALIANT DEFENDER OF THE DIGITAL WORLD, FACES AN UNEXPECTED PROBLEM AS HE FORGETSHOW TO CREATE A STRONG PASSWORD.WITH CYBER VILLAINSCLOSING IN, HE MUST EMBARK ON A JOURNEY TO REDISCOVER THISVITAL SKILL AND REINFORCE HIS VIRTUAL FORTRESS BEFORE IT'S TOO LATE.";
				break;
			case 2:
				lbltitle->Text = "UNMASKING DECEPTIVE THREATS";
				lbldesc->Text = "What does \"phishing\" refer to ? ";
				break;
			case 3:
				lbltitle->Text = "IMPORTANCE OF LOGGING OUT";
				lbldesc->Text = "Why is it essential to log out of your accounts when using public computers?";
				break;
			case 4:
				lbltitle->Text = "SHADOWS OF DISCLOSURE";
				lbldesc->Text = "Which of the following is an example of personal information that should not be shared online?";
				break;
			case 5:
				lbltitle->Text = "SENTINELS OF DEFENSE";
				lbldesc->Text = "What is the purpose of antivirus software?";
				break;
			case 6:
				lbltitle->Text = "THE EMAIL ENIGMA";
				lbldesc->Text = "Which of the following is a secure way to handle suspicious emails?";
				break;
			case 7:
				lbltitle->Text = "FORTRESS OF ENCRYPTION";
				lbldesc->Text = "What does \"HTTPS\" stand for in a website URL?";
				break;
			case 8:
				lbltitle->Text = "DEFENDERS OF DIGITAL BASTION";
				lbldesc->Text = "Why is it important to keep software and operating systems up to date?";

				break;
			case 9:
				lbltitle->Text = "CODE NAME: 2FA";
				lbldesc->Text = "What is the purpose of two-factor authentication (2FA)?";
				break;
			case 10:
				lbltitle->Text = "THE FINAL STRETCH";
				lbldesc->Text = "What is the primary goal of cyber awareness?";
				break;
			}
		}
	public:

		UCgplay(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			StoryLine(clickcount);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UCgplay()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ lbltitle;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ lbldesc;

	private: System::Windows::Forms::Button^ continuebtn;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UCgplay::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->continuebtn = (gcnew System::Windows::Forms::Button());
			this->lbldesc = (gcnew System::Windows::Forms::Label());
			this->lbltitle = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->continuebtn);
			this->panel1->Controls->Add(this->lbldesc);
			this->panel1->Controls->Add(this->lbltitle);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(863, 455);
			this->panel1->TabIndex = 0;
			// 
			// continuebtn
			// 
			this->continuebtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->continuebtn->BackColor = System::Drawing::Color::Transparent;
			this->continuebtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"continuebtn.BackgroundImage")));
			this->continuebtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->continuebtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->continuebtn->FlatAppearance->BorderSize = 0;
			this->continuebtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->continuebtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->continuebtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->continuebtn->Location = System::Drawing::Point(602, 278);
			this->continuebtn->Margin = System::Windows::Forms::Padding(2);
			this->continuebtn->Name = L"continuebtn";
			this->continuebtn->Size = System::Drawing::Size(261, 175);
			this->continuebtn->TabIndex = 2;
			this->continuebtn->UseVisualStyleBackColor = false;
			this->continuebtn->Click += gcnew System::EventHandler(this, &UCgplay::continuebtn_Click);
			// 
			// lbldesc
			// 
			this->lbldesc->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->lbldesc->BackColor = System::Drawing::Color::Transparent;
			this->lbldesc->Font = (gcnew System::Drawing::Font(L"Colonna MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbldesc->ForeColor = System::Drawing::Color::White;
			this->lbldesc->Location = System::Drawing::Point(3, 99);
			this->lbldesc->Name = L"lbldesc";
			this->lbldesc->Size = System::Drawing::Size(857, 102);
			this->lbldesc->TabIndex = 0;
			this->lbldesc->Text = L"DESCRIPTION";
			this->lbldesc->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbltitle
			// 
			this->lbltitle->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->lbltitle->BackColor = System::Drawing::Color::Transparent;
			this->lbltitle->Font = (gcnew System::Drawing::Font(L"Colonna MT", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbltitle->ForeColor = System::Drawing::Color::White;
			this->lbltitle->Location = System::Drawing::Point(3, 53);
			this->lbltitle->Name = L"lbltitle";
			this->lbltitle->Size = System::Drawing::Size(857, 34);
			this->lbltitle->TabIndex = 0;
			this->lbltitle->Text = L"Title";
			this->lbltitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(254, 138);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(341, 282);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// UCgplay
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->panel1);
			this->Name = L"UCgplay";
			this->Size = System::Drawing::Size(863, 455);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void continuebtn_Click(System::Object^ sender, System::EventArgs^ e) {
		//main = gcnew UCquestion();
		main->Dock = System::Windows::Forms::DockStyle::Fill;
		this->Controls->Add(main);
		main->BringToFront();
		if (clickcount > 1)
			main->Show();
		clickcount++;
		StoryLine(clickcount);
	}
};
}
