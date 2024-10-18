#pragma once
#include"DBConnection.h"
#include "User.h"

namespace TempProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblLogin;
	protected:
	private: System::Windows::Forms::Label^ lblEmail;
	private: System::Windows::Forms::TextBox^ txtEmail;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::Label^ lblPassword;
	private: System::Windows::Forms::Button^ btnLogin;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::LinkLabel^ linkRegister;




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
			this->lblLogin = (gcnew System::Windows::Forms::Label());
			this->lblEmail = (gcnew System::Windows::Forms::Label());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->lblPassword = (gcnew System::Windows::Forms::Label());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->linkRegister = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// lblLogin
			// 
			this->lblLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblLogin->Location = System::Drawing::Point(12, 13);
			this->lblLogin->Name = L"lblLogin";
			this->lblLogin->Size = System::Drawing::Size(585, 69);
			this->lblLogin->TabIndex = 0;
			this->lblLogin->Text = L"LOGIN";
			this->lblLogin->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblEmail
			// 
			this->lblEmail->AutoSize = true;
			this->lblEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEmail->Location = System::Drawing::Point(31, 105);
			this->lblEmail->Name = L"lblEmail";
			this->lblEmail->Size = System::Drawing::Size(70, 30);
			this->lblEmail->TabIndex = 1;
			this->lblEmail->Text = L"Email";
			// 
			// txtEmail
			// 
			this->txtEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtEmail->Location = System::Drawing::Point(148, 97);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(420, 38);
			this->txtEmail->TabIndex = 2;
			// 
			// txtPassword
			// 
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPassword->Location = System::Drawing::Point(148, 169);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(420, 38);
			this->txtPassword->TabIndex = 4;
			// 
			// lblPassword
			// 
			this->lblPassword->AutoSize = true;
			this->lblPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPassword->Location = System::Drawing::Point(31, 177);
			this->lblPassword->Name = L"lblPassword";
			this->lblPassword->Size = System::Drawing::Size(111, 30);
			this->lblPassword->TabIndex = 3;
			this->lblPassword->Text = L"Password";
			// 
			// btnLogin
			// 
			this->btnLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogin->Location = System::Drawing::Point(96, 278);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(129, 44);
			this->btnLogin->TabIndex = 5;
			this->btnLogin->Text = L"Login";
			this->btnLogin->UseVisualStyleBackColor = true;
			this->btnLogin->Click += gcnew System::EventHandler(this, &LoginForm::btnLogin_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->Location = System::Drawing::Point(354, 278);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(129, 44);
			this->btnCancel->TabIndex = 6;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &LoginForm::btnCancel_Click);
			// 
			// linkRegister
			// 
			this->linkRegister->AutoSize = true;
			this->linkRegister->Location = System::Drawing::Point(263, 340);
			this->linkRegister->Name = L"linkRegister";
			this->linkRegister->Size = System::Drawing::Size(69, 20);
			this->linkRegister->TabIndex = 7;
			this->linkRegister->TabStop = true;
			this->linkRegister->Text = L"Register";
			this->linkRegister->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::linkRegister_LinkClicked);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(611, 388);
			this->Controls->Add(this->linkRegister);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnLogin);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->lblPassword);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->lblEmail);
			this->Controls->Add(this->lblLogin);
			this->Name = L"LoginForm";
			this->Text = L"Login Form";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	public: User^ user = nullptr;

	private: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ email = this->txtEmail->Text;
		String^ password = this->txtPassword->Text;

		if (email->Length == 0 || password->Length == 0) {
			MessageBox::Show("Please enter email and password", "Login error", MessageBoxButtons::OK);
			return;
		}

		try {
			DBConnection^ dbConnection = DBConnection::GetInstance();
			dbConnection->OpenConnection();

			String^ query = "SELECT * FROM users WHERE email=@Email AND password=@Password";
			SqlCommand^ command = gcnew SqlCommand(query, dbConnection->getConnection());

			command->Parameters->AddWithValue("@Email", email);
			command->Parameters->AddWithValue("@Password", password);

			SqlDataReader^ reader = command->ExecuteReader();
			if (reader->Read()) {
				user = gcnew User();
				user->Id = reader->GetInt32(0);
				user->Name = reader->GetString(1);
				user->Email = reader->GetString(2);
				user->Phone = reader->GetString(3);
				user->Address = reader->GetString(4);
				user->Password = reader->GetString(5);
				this->Close();
			}
			else {
				MessageBox::Show("Email or password incorrect", "Email or Password Error", MessageBoxButtons::OK);
			}


		}
		catch (Exception^ ex) {
			Console::WriteLine("Error {0}", ex->Message);
		}
	}

	public: bool gotoRegisterPage = false;
	private: System::Void linkRegister_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->gotoRegisterPage = true;
		this->Close();
	}
};
}
