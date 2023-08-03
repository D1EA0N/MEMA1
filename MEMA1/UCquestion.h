#pragma once

namespace MEMA1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for UCquestion
	/// </summary>
	public ref class UCquestion : public System::Windows::Forms::UserControl
	{
	private:
		int correctans;
		int qnum = 1;
		int shield;

		void askQuestion(int qnum)
		{
			switch (qnum) {
				case 1:
					lbltitle->Text = "THE FIRST SETBACK";
					lblquestion->Text = "What is a strong password?";
					//btnA
					//btnB
					//btnC

					correctans = 3;
					break;
				case 2:
					lbltitle->Text = "UNMASKING DECEPTIVE THREATS";
					lblquestion->Text = "What does \"phishing\" refer to ? ";
					//btnA
					//btnB
					//btnC

					correctans = 2;
					break;
				case 3:
					lbltitle->Text = "IMPORTANCE OF LOGGING OUT";
					lblquestion->Text = "Why is it essential to log out of your accounts when using public computers?";
					//btnA
					//btnB
					//btnC

					correctans = 2;
					break;
				case 4:
					lbltitle->Text = "SHADOWS OF DISCLOSURE";
					lblquestion->Text = "Which of the following is an example of personal information that should not be shared online?";
					//btnA
					//btnB
					//btnC

					correctans = 3;
					break;
				case 5:
					lbltitle->Text = "SENTINELS OF DEFENSE";
					lblquestion->Text = "What is the purpose of antivirus software?";
					//btnA
					//btnB
					//btnC

					correctans = 3;
					break;
				case 6:
					lbltitle->Text = "THE EMAIL ENIGMA";
					lblquestion->Text = "Which of the following is a secure way to handle suspicious emails?";
					//btnA
					//btnB
					//btnC

					correctans = 1;
					break;
				case 7:
					lbltitle->Text = "FORTRESS OF ENCRYPTION";
					lblquestion->Text = "What does \"HTTPS\" stand for in a website URL?";
					//btnA
					//btnB
					//btnC

					correctans = 1;
					break;
				case 8:
					lbltitle->Text = "DEFENDERS OF DIGITAL BASTION";
					lblquestion->Text = "Why is it important to keep software and operating systems up to date?";
					//btnA
					//btnB
					//btnC

					correctans = 3;
					break;
				case 9:
					lbltitle->Text = "CODE NAME: 2FA";
					lblquestion->Text = "What is the purpose of two-factor authentication (2FA)?";
					//btnA
					//btnB
					//btnC

					correctans = 2;
					break;
				case 10:
					lbltitle->Text = "THE FINAL STRETCH";
					lblquestion->Text = "What is the primary goal of cyber awareness?";
					//btnA
					//btnB
					//btnC

					correctans = 3;
					break;
			}
		}
	public:
		UCquestion(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			askQuestion(qnum);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UCquestion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btnA;
	protected:

	private: System::Windows::Forms::Label^ lblquestion;

	private: System::Windows::Forms::Label^ lbltitle;
	private: System::Windows::Forms::Button^ btnC;



	private: System::Windows::Forms::Button^ btnB;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UCquestion::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnC = (gcnew System::Windows::Forms::Button());
			this->btnB = (gcnew System::Windows::Forms::Button());
			this->btnA = (gcnew System::Windows::Forms::Button());
			this->lblquestion = (gcnew System::Windows::Forms::Label());
			this->lbltitle = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->btnC);
			this->panel1->Controls->Add(this->btnB);
			this->panel1->Controls->Add(this->btnA);
			this->panel1->Controls->Add(this->lblquestion);
			this->panel1->Controls->Add(this->lbltitle);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(863, 455);
			this->panel1->TabIndex = 1;
			// 
			// btnC
			// 
			this->btnC->BackColor = System::Drawing::Color::Transparent;
			this->btnC->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnC->FlatAppearance->BorderSize = 0;
			this->btnC->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btnC->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btnC->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btnC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnC->Location = System::Drawing::Point(545, 248);
			this->btnC->Name = L"btnC";
			this->btnC->Size = System::Drawing::Size(210, 80);
			this->btnC->TabIndex = 1;
			this->btnC->Tag = L"3";
			this->btnC->Text = L"button1";
			this->btnC->UseVisualStyleBackColor = false;
			this->btnC->Click += gcnew System::EventHandler(this, &UCquestion::CheckerClickEvent);
			// 
			// btnB
			// 
			this->btnB->BackColor = System::Drawing::Color::Transparent;
			this->btnB->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnB->FlatAppearance->BorderSize = 0;
			this->btnB->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btnB->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btnB->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btnB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnB->Location = System::Drawing::Point(316, 248);
			this->btnB->Name = L"btnB";
			this->btnB->Size = System::Drawing::Size(210, 80);
			this->btnB->TabIndex = 1;
			this->btnB->Tag = L"2";
			this->btnB->Text = L"button1";
			this->btnB->UseVisualStyleBackColor = false;
			this->btnB->Click += gcnew System::EventHandler(this, &UCquestion::CheckerClickEvent);
			// 
			// btnA
			// 
			this->btnA->BackColor = System::Drawing::Color::Transparent;
			this->btnA->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnA->FlatAppearance->BorderSize = 0;
			this->btnA->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btnA->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btnA->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btnA->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnA->Location = System::Drawing::Point(83, 248);
			this->btnA->Name = L"btnA";
			this->btnA->Size = System::Drawing::Size(210, 80);
			this->btnA->TabIndex = 1;
			this->btnA->Tag = L"1";
			this->btnA->Text = L"button1";
			this->btnA->UseVisualStyleBackColor = false;
			this->btnA->Click += gcnew System::EventHandler(this, &UCquestion::CheckerClickEvent);
			// 
			// lblquestion
			// 
			this->lblquestion->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->lblquestion->BackColor = System::Drawing::Color::Transparent;
			this->lblquestion->Font = (gcnew System::Drawing::Font(L"Colonna MT", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblquestion->ForeColor = System::Drawing::Color::White;
			this->lblquestion->Location = System::Drawing::Point(6, 113);
			this->lblquestion->Name = L"lblquestion";
			this->lblquestion->Size = System::Drawing::Size(857, 102);
			this->lblquestion->TabIndex = 0;
			this->lblquestion->Text = L"Question";
			this->lblquestion->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbltitle
			// 
			this->lbltitle->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->lbltitle->BackColor = System::Drawing::Color::Transparent;
			this->lbltitle->Font = (gcnew System::Drawing::Font(L"Colonna MT", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbltitle->ForeColor = System::Drawing::Color::White;
			this->lbltitle->Location = System::Drawing::Point(3, 64);
			this->lbltitle->Name = L"lbltitle";
			this->lbltitle->Size = System::Drawing::Size(857, 34);
			this->lbltitle->TabIndex = 0;
			this->lbltitle->Text = L"Title";
			this->lbltitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// UCquestion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->panel1);
			this->Name = L"UCquestion";
			this->Size = System::Drawing::Size(863, 455);
			this->Load += gcnew System::EventHandler(this, &UCquestion::UCquestion_Load);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void UCquestion_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void CheckerClickEvent(System::Object^ sender, System::EventArgs^ e) {
		Button^ senderButton = safe_cast<Button^>(sender);
		int buttonTag = System::Convert::ToInt32(senderButton->Tag);

		if (buttonTag == correctans)
		{
			shield++;
			qnum++;
			askQuestion(qnum);
			this->Hide();
		}

	}
};
}
