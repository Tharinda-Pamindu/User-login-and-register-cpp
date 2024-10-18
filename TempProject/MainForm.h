#pragma once
#include"User.h"

namespace TempProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(User^ user)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			lblSetName->Text = user->Name;
			lblSetAddress->Text = user->Address;
			lblSetEmail->Text = user->Email;
			lblSetPhone->Text = user->Phone;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblMain;
	protected:
	private: System::Windows::Forms::Label^ lblName;
	private: System::Windows::Forms::Label^ lblAddress;
	private: System::Windows::Forms::Label^ lblEmail;
	private: System::Windows::Forms::Label^ lblPhone;
	private: System::Windows::Forms::Label^ lblSetName;
	private: System::Windows::Forms::Label^ lblSetAddress;
	private: System::Windows::Forms::Label^ lblSetEmail;
	private: System::Windows::Forms::Label^ lblSetPhone;


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
			this->lblMain = (gcnew System::Windows::Forms::Label());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->lblAddress = (gcnew System::Windows::Forms::Label());
			this->lblEmail = (gcnew System::Windows::Forms::Label());
			this->lblPhone = (gcnew System::Windows::Forms::Label());
			this->lblSetName = (gcnew System::Windows::Forms::Label());
			this->lblSetAddress = (gcnew System::Windows::Forms::Label());
			this->lblSetEmail = (gcnew System::Windows::Forms::Label());
			this->lblSetPhone = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lblMain
			// 
			this->lblMain->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMain->Location = System::Drawing::Point(12, 13);
			this->lblMain->Name = L"lblMain";
			this->lblMain->Size = System::Drawing::Size(485, 57);
			this->lblMain->TabIndex = 0;
			this->lblMain->Text = L"label1";
			this->lblMain->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblName->Location = System::Drawing::Point(18, 100);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(81, 31);
			this->lblName->TabIndex = 1;
			this->lblName->Text = L"Name";
			// 
			// lblAddress
			// 
			this->lblAddress->AutoSize = true;
			this->lblAddress->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAddress->Location = System::Drawing::Point(18, 165);
			this->lblAddress->Name = L"lblAddress";
			this->lblAddress->Size = System::Drawing::Size(106, 31);
			this->lblAddress->TabIndex = 2;
			this->lblAddress->Text = L"Address";
			// 
			// lblEmail
			// 
			this->lblEmail->AutoSize = true;
			this->lblEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEmail->Location = System::Drawing::Point(18, 231);
			this->lblEmail->Name = L"lblEmail";
			this->lblEmail->Size = System::Drawing::Size(76, 31);
			this->lblEmail->TabIndex = 3;
			this->lblEmail->Text = L"Email";
			// 
			// lblPhone
			// 
			this->lblPhone->AutoSize = true;
			this->lblPhone->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPhone->Location = System::Drawing::Point(18, 298);
			this->lblPhone->Name = L"lblPhone";
			this->lblPhone->Size = System::Drawing::Size(86, 31);
			this->lblPhone->TabIndex = 4;
			this->lblPhone->Text = L"Phone";
			// 
			// lblSetName
			// 
			this->lblSetName->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSetName->Location = System::Drawing::Point(156, 100);
			this->lblSetName->Name = L"lblSetName";
			this->lblSetName->Size = System::Drawing::Size(328, 31);
			this->lblSetName->TabIndex = 5;
			// 
			// lblSetAddress
			// 
			this->lblSetAddress->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSetAddress->Location = System::Drawing::Point(156, 165);
			this->lblSetAddress->Name = L"lblSetAddress";
			this->lblSetAddress->Size = System::Drawing::Size(328, 31);
			this->lblSetAddress->TabIndex = 6;
			// 
			// lblSetEmail
			// 
			this->lblSetEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSetEmail->Location = System::Drawing::Point(156, 231);
			this->lblSetEmail->Name = L"lblSetEmail";
			this->lblSetEmail->Size = System::Drawing::Size(328, 31);
			this->lblSetEmail->TabIndex = 7;
			// 
			// lblSetPhone
			// 
			this->lblSetPhone->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSetPhone->Location = System::Drawing::Point(156, 298);
			this->lblSetPhone->Name = L"lblSetPhone";
			this->lblSetPhone->Size = System::Drawing::Size(328, 31);
			this->lblSetPhone->TabIndex = 8;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(509, 493);
			this->Controls->Add(this->lblSetPhone);
			this->Controls->Add(this->lblSetEmail);
			this->Controls->Add(this->lblSetAddress);
			this->Controls->Add(this->lblSetName);
			this->Controls->Add(this->lblPhone);
			this->Controls->Add(this->lblEmail);
			this->Controls->Add(this->lblAddress);
			this->Controls->Add(this->lblName);
			this->Controls->Add(this->lblMain);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
