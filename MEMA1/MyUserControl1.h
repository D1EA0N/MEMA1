#pragma once

namespace MEMA1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyUserControl1
	/// </summary>
	public ref class MyUserControl1 : public System::Windows::Forms::UserControl
	{
	private:
		//MyForm^ myform = gcnew MyForm();

	public:
		MyUserControl1(void)
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
		~MyUserControl1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ mainbg;
	private: System::Windows::Forms::Button^ backbtn;
	private: System::Windows::Forms::Button^ hardbtn;
	private: System::Windows::Forms::Button^ easybtn;



	protected:


	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyUserControl1::typeid));
			this->mainbg = (gcnew System::Windows::Forms::Panel());
			this->backbtn = (gcnew System::Windows::Forms::Button());
			this->easybtn = (gcnew System::Windows::Forms::Button());
			this->hardbtn = (gcnew System::Windows::Forms::Button());
			this->mainbg->SuspendLayout();
			this->SuspendLayout();
			// 
			// mainbg
			// 
			this->mainbg->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mainbg.BackgroundImage")));
			this->mainbg->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->mainbg->Controls->Add(this->hardbtn);
			this->mainbg->Controls->Add(this->easybtn);
			this->mainbg->Controls->Add(this->backbtn);
			this->mainbg->Dock = System::Windows::Forms::DockStyle::Fill;
			this->mainbg->Location = System::Drawing::Point(0, 0);
			this->mainbg->Name = L"mainbg";
			this->mainbg->Size = System::Drawing::Size(863, 455);
			this->mainbg->TabIndex = 0;
			// 
			// backbtn
			// 
			this->backbtn->BackColor = System::Drawing::Color::Transparent;
			this->backbtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backbtn.BackgroundImage")));
			this->backbtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->backbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->backbtn->FlatAppearance->BorderSize = 0;
			this->backbtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->backbtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->backbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->backbtn->Location = System::Drawing::Point(15, 16);
			this->backbtn->Margin = System::Windows::Forms::Padding(2);
			this->backbtn->Name = L"backbtn";
			this->backbtn->Size = System::Drawing::Size(60, 60);
			this->backbtn->TabIndex = 1;
			this->backbtn->UseVisualStyleBackColor = false;
			this->backbtn->Click += gcnew System::EventHandler(this, &MyUserControl1::backbtn_Click);
			// 
			// easybtn
			// 
			this->easybtn->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->easybtn->BackColor = System::Drawing::Color::Transparent;
			this->easybtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"easybtn.BackgroundImage")));
			this->easybtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->easybtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->easybtn->FlatAppearance->BorderSize = 0;
			this->easybtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->easybtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->easybtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->easybtn->Location = System::Drawing::Point(195, 255);
			this->easybtn->Margin = System::Windows::Forms::Padding(2);
			this->easybtn->Name = L"easybtn";
			this->easybtn->Size = System::Drawing::Size(200, 200);
			this->easybtn->TabIndex = 1;
			this->easybtn->UseVisualStyleBackColor = false;
			// 
			// hardbtn
			// 
			this->hardbtn->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->hardbtn->BackColor = System::Drawing::Color::Transparent;
			this->hardbtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"hardbtn.BackgroundImage")));
			this->hardbtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->hardbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->hardbtn->FlatAppearance->BorderSize = 0;
			this->hardbtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->hardbtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->hardbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->hardbtn->Location = System::Drawing::Point(469, 255);
			this->hardbtn->Margin = System::Windows::Forms::Padding(2);
			this->hardbtn->Name = L"hardbtn";
			this->hardbtn->Size = System::Drawing::Size(200, 200);
			this->hardbtn->TabIndex = 1;
			this->hardbtn->UseVisualStyleBackColor = false;
			// 
			// MyUserControl1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->mainbg);
			this->Name = L"MyUserControl1";
			this->Size = System::Drawing::Size(863, 455);
			this->mainbg->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void backbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm^ mainForm = gcnew MyForm();
		mainForm->Show();
		this->Parent->Controls->Remove(this); 
		delete this; 
	}
};
}
