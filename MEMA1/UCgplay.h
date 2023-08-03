#pragma once

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
	public:
		UCgplay(void)
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
		~UCgplay()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->continuebtn = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->continuebtn);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(863, 455);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Colonna MT", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(279, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(301, 34);
			this->label1->TabIndex = 0;
			this->label1->Text = L"THE FIRST SETBACK";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(239, 138);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(341, 282);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Colonna MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(61, 99);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(746, 102);
			this->label2->TabIndex = 0;
			this->label2->Text = resources->GetString(L"label2.Text");
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// continuebtn
			// 
			this->continuebtn->BackColor = System::Drawing::Color::Transparent;
			this->continuebtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"continuebtn.BackgroundImage")));
			this->continuebtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->continuebtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->continuebtn->FlatAppearance->BorderSize = 0;
			this->continuebtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->continuebtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->continuebtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->continuebtn->Location = System::Drawing::Point(600, 280);
			this->continuebtn->Margin = System::Windows::Forms::Padding(2);
			this->continuebtn->Name = L"continuebtn";
			this->continuebtn->Size = System::Drawing::Size(261, 175);
			this->continuebtn->TabIndex = 2;
			this->continuebtn->UseVisualStyleBackColor = false;
			this->continuebtn->Click += gcnew System::EventHandler(this, &UCgplay::continuebtn_Click);
			// 
			// UCgplay
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->panel1);
			this->Name = L"UCgplay";
			this->Size = System::Drawing::Size(863, 455);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void continuebtn_Click(System::Object^ sender, System::EventArgs^ e) {

	}
};
}
