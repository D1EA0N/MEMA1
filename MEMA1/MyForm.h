#pragma once
#include "MyUserControl1.h"

namespace MEMA1 {

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
	private:
		MyUserControl1^ main = gcnew MyUserControl1();

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
	public: System::Windows::Forms::Button^ exitbtn;
	protected:
	public: System::Windows::Forms::Button^ playbtn;
	public: System::Windows::Forms::Button^ settingbtn;
	public: System::Windows::Forms::Button^ infobtn;







	private: System::Windows::Forms::Panel^ mainbg;
	private: System::Windows::Forms::PictureBox^ pictureBox1;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->exitbtn = (gcnew System::Windows::Forms::Button());
			this->playbtn = (gcnew System::Windows::Forms::Button());
			this->settingbtn = (gcnew System::Windows::Forms::Button());
			this->infobtn = (gcnew System::Windows::Forms::Button());
			this->mainbg = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->mainbg->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// exitbtn
			// 
			this->exitbtn->BackColor = System::Drawing::Color::Transparent;
			this->exitbtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"exitbtn.BackgroundImage")));
			this->exitbtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->exitbtn->FlatAppearance->BorderSize = 0;
			this->exitbtn->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->exitbtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->exitbtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->exitbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exitbtn->Location = System::Drawing::Point(11, 11);
			this->exitbtn->Margin = System::Windows::Forms::Padding(2);
			this->exitbtn->Name = L"exitbtn";
			this->exitbtn->Size = System::Drawing::Size(60, 60);
			this->exitbtn->TabIndex = 0;
			this->exitbtn->UseVisualStyleBackColor = false;
			this->exitbtn->Click += gcnew System::EventHandler(this, &MyForm::exitbtn_Click);
			// 
			// playbtn
			// 
			this->playbtn->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->playbtn->BackColor = System::Drawing::Color::Transparent;
			this->playbtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"playbtn.BackgroundImage")));
			this->playbtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->playbtn->FlatAppearance->BorderSize = 0;
			this->playbtn->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->playbtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->playbtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->playbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->playbtn->Location = System::Drawing::Point(398, 326);
			this->playbtn->Margin = System::Windows::Forms::Padding(2);
			this->playbtn->Name = L"playbtn";
			this->playbtn->Size = System::Drawing::Size(60, 60);
			this->playbtn->TabIndex = 0;
			this->playbtn->UseVisualStyleBackColor = false;
			this->playbtn->Click += gcnew System::EventHandler(this, &MyForm::playbtn_Click);
			// 
			// settingbtn
			// 
			this->settingbtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->settingbtn->BackColor = System::Drawing::Color::Transparent;
			this->settingbtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"settingbtn.BackgroundImage")));
			this->settingbtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->settingbtn->FlatAppearance->BorderSize = 0;
			this->settingbtn->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->settingbtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->settingbtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->settingbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->settingbtn->Location = System::Drawing::Point(792, 11);
			this->settingbtn->Margin = System::Windows::Forms::Padding(2);
			this->settingbtn->Name = L"settingbtn";
			this->settingbtn->Size = System::Drawing::Size(60, 60);
			this->settingbtn->TabIndex = 0;
			this->settingbtn->UseVisualStyleBackColor = false;
			// 
			// infobtn
			// 
			this->infobtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->infobtn->BackColor = System::Drawing::Color::Transparent;
			this->infobtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"infobtn.BackgroundImage")));
			this->infobtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->infobtn->FlatAppearance->BorderSize = 0;
			this->infobtn->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->infobtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->infobtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->infobtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->infobtn->Location = System::Drawing::Point(792, 75);
			this->infobtn->Margin = System::Windows::Forms::Padding(2);
			this->infobtn->Name = L"infobtn";
			this->infobtn->Size = System::Drawing::Size(60, 60);
			this->infobtn->TabIndex = 0;
			this->infobtn->UseVisualStyleBackColor = false;
			// 
			// mainbg
			// 
			this->mainbg->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mainbg.BackgroundImage")));
			this->mainbg->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->mainbg->Controls->Add(this->exitbtn);
			this->mainbg->Controls->Add(this->playbtn);
			this->mainbg->Controls->Add(this->infobtn);
			this->mainbg->Controls->Add(this->settingbtn);
			this->mainbg->Controls->Add(this->pictureBox1);
			this->mainbg->Dock = System::Windows::Forms::DockStyle::Fill;
			this->mainbg->Location = System::Drawing::Point(0, 0);
			this->mainbg->Margin = System::Windows::Forms::Padding(2);
			this->mainbg->Name = L"mainbg";
			this->mainbg->Size = System::Drawing::Size(863, 455);
			this->mainbg->TabIndex = 1;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(128, 59);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(633, 372);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(863, 455);
			this->Controls->Add(this->mainbg);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CyberSmart Challenge";
			this->mainbg->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void exitbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm::Close();
	}
	private: System::Void playbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		main = gcnew MyUserControl1();
		main->Dock = System::Windows::Forms::DockStyle::Fill;
		this->Controls->Add(main);
		main->BringToFront();
	}
};
}
