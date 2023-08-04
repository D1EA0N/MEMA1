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
		int shield = 0;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ lblcount;


		void askQuestion(int qnum)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UCquestion::typeid));

			switch (qnum) {
				case 1:
					lbltitle->Text = "THE FIRST SETBACK";
					lblquestion->Text = "What is a strong password?";

					pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
					//pictureBox1->Image = gcnew Bitmap(this->GetType(), "");
					btnA->Text = "a) A password that uses only lowercase letters";
					btnB->Text = "b) A password that uses common words or phrases ";
					btnC->Text = "c) A password that includes a mix of uppercase letters, lowercase letters, numbers, and special characters";

					correctans = 3;
					break;
				case 2:
					lbltitle->Text = "UNMASKING DECEPTIVE THREATS";
					lblquestion->Text = "What does \"phishing\" refer to ? ";
					pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"progress 2")));
					//btnA
					//btnB
					//btnC

					correctans = 2;
					break;
				case 3:
					lbltitle->Text = "IMPORTANCE OF LOGGING OUT";
					lblquestion->Text = "Why is it essential to log out of your accounts when using public computers?";
					pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"progress 3")));
					//btnA
					//btnB
					//btnC

					correctans = 2;
					break;
				case 4:
					lbltitle->Text = "SHADOWS OF DISCLOSURE";
					lblquestion->Text = "Which of the following is an example of personal information that should not be shared online?";
					pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"progress 4")));
					//btnA
					//btnB
					//btnC

					correctans = 3;
					break;
				case 5:
					lbltitle->Text = "SENTINELS OF DEFENSE";
					lblquestion->Text = "What is the purpose of antivirus software?";
					pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"progress 5")));
					//btnA
					//btnB
					//btnC

					correctans = 3;
					break;
				case 6:
					lbltitle->Text = "THE EMAIL ENIGMA";
					lblquestion->Text = "Which of the following is a secure way to handle suspicious emails?";
					pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"progress 6")));
					//btnA
					//btnB
					//btnC

					correctans = 1;
					break;
				case 7:
					lbltitle->Text = "FORTRESS OF ENCRYPTION";
					lblquestion->Text = "What does \"HTTPS\" stand for in a website URL?";
					pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"progress 7")));
					//btnA
					//btnB
					//btnC

					correctans = 1;
					break;
				case 8:
					lbltitle->Text = "DEFENDERS OF DIGITAL BASTION";
					lblquestion->Text = "Why is it important to keep software and operating systems up to date?";
					pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"progress 8")));
					//btnA
					//btnB
					//btnC

					correctans = 3;
					break;
				case 9:
					lbltitle->Text = "CODE NAME: 2FA";
					lblquestion->Text = "What is the purpose of two-factor authentication (2FA)?";
					pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"progress 9")));
					//btnA
					//btnB
					//btnC

					correctans = 2;
					break;
				case 10:
					lbltitle->Text = "THE FINAL STRETCH";
					lblquestion->Text = "What is the primary goal of cyber awareness?";
					pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"progress 10")));
					//btnA
					//btnB
					//btnC

					correctans = 3;
					break;
			}
			lblcount->Text = "X " + shield;
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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnC = (gcnew System::Windows::Forms::Button());
			this->btnB = (gcnew System::Windows::Forms::Button());
			this->btnA = (gcnew System::Windows::Forms::Button());
			this->lblquestion = (gcnew System::Windows::Forms::Label());
			this->lbltitle = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->lblcount = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->lblcount);
			this->panel1->Controls->Add(this->lblquestion);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->btnC);
			this->panel1->Controls->Add(this->btnB);
			this->panel1->Controls->Add(this->btnA);
			this->panel1->Controls->Add(this->lbltitle);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(863, 455);
			this->panel1->TabIndex = 1;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(304, 54);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(248, 40);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// btnC
			// 
			this->btnC->BackColor = System::Drawing::Color::Transparent;
			this->btnC->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnC.BackgroundImage")));
			this->btnC->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnC->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnC->FlatAppearance->BorderSize = 0;
			this->btnC->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btnC->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btnC->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btnC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnC->Font = (gcnew System::Drawing::Font(L"Code Light", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(77)));
			this->btnC->Location = System::Drawing::Point(576, 299);
			this->btnC->Name = L"btnC";
			this->btnC->Size = System::Drawing::Size(210, 80);
			this->btnC->TabIndex = 1;
			this->btnC->Tag = L"3";
			this->btnC->Text = L"BUTTON 1";
			this->btnC->UseVisualStyleBackColor = false;
			this->btnC->Click += gcnew System::EventHandler(this, &UCquestion::CheckerClickEvent);
			// 
			// btnB
			// 
			this->btnB->BackColor = System::Drawing::Color::Transparent;
			this->btnB->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnB.BackgroundImage")));
			this->btnB->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnB->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnB->FlatAppearance->BorderSize = 0;
			this->btnB->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btnB->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btnB->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btnB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnB->Font = (gcnew System::Drawing::Font(L"Code Light", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(77)));
			this->btnB->Location = System::Drawing::Point(327, 299);
			this->btnB->Name = L"btnB";
			this->btnB->Size = System::Drawing::Size(210, 80);
			this->btnB->TabIndex = 1;
			this->btnB->Tag = L"2";
			this->btnB->Text = L"BUTTON 1";
			this->btnB->UseVisualStyleBackColor = false;
			this->btnB->Click += gcnew System::EventHandler(this, &UCquestion::CheckerClickEvent);
			// 
			// btnA
			// 
			this->btnA->BackColor = System::Drawing::Color::Transparent;
			this->btnA->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnA.BackgroundImage")));
			this->btnA->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnA->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnA->FlatAppearance->BorderSize = 0;
			this->btnA->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btnA->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btnA->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btnA->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnA->Font = (gcnew System::Drawing::Font(L"Code Light", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(77)));
			this->btnA->Location = System::Drawing::Point(72, 299);
			this->btnA->Name = L"btnA";
			this->btnA->Size = System::Drawing::Size(210, 80);
			this->btnA->TabIndex = 1;
			this->btnA->Tag = L"1";
			this->btnA->Text = L"BUTTON 1";
			this->btnA->UseVisualStyleBackColor = false;
			this->btnA->Click += gcnew System::EventHandler(this, &UCquestion::CheckerClickEvent);
			// 
			// lblquestion
			// 
			this->lblquestion->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->lblquestion->BackColor = System::Drawing::Color::Transparent;
			this->lblquestion->Font = (gcnew System::Drawing::Font(L"Code Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(77)));
			this->lblquestion->ForeColor = System::Drawing::Color::White;
			this->lblquestion->Location = System::Drawing::Point(3, 158);
			this->lblquestion->Name = L"lblquestion";
			this->lblquestion->Size = System::Drawing::Size(857, 129);
			this->lblquestion->TabIndex = 0;
			this->lblquestion->Text = L"Question";
			this->lblquestion->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbltitle
			// 
			this->lbltitle->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->lbltitle->BackColor = System::Drawing::Color::Transparent;
			this->lbltitle->Font = (gcnew System::Drawing::Font(L"Code Light", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(77)));
			this->lbltitle->ForeColor = System::Drawing::Color::White;
			this->lbltitle->Location = System::Drawing::Point(0, 116);
			this->lbltitle->Name = L"lbltitle";
			this->lbltitle->Size = System::Drawing::Size(857, 42);
			this->lbltitle->TabIndex = 0;
			this->lbltitle->Text = L"Title";
			this->lbltitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(706, 43);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(80, 80);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// lblcount
			// 
			this->lblcount->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->lblcount->BackColor = System::Drawing::Color::Transparent;
			this->lblcount->Font = (gcnew System::Drawing::Font(L"Code Light", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(77)));
			this->lblcount->ForeColor = System::Drawing::Color::White;
			this->lblcount->Location = System::Drawing::Point(792, 56);
			this->lblcount->Name = L"lblcount";
			this->lblcount->Size = System::Drawing::Size(60, 60);
			this->lblcount->TabIndex = 0;
			this->lblcount->Text = L"count";
			this->lblcount->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void UCquestion_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void CheckerClickEvent(System::Object^ sender, System::EventArgs^ e) {
		Button^ senderButton = safe_cast<Button^>(sender);
		int buttonTag = System::Convert::ToInt32(senderButton->Tag);

		if (buttonTag == correctans && correctans < 10)
		{
			shield++;
			qnum++;
			askQuestion(qnum);
			this->Hide();
		}

	}
};
}
