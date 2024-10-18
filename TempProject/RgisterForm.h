#pragma once
#include"DBConnection.h"
#include"User.h"

namespace TempProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for RgisterForm
	/// </summary>
	public ref class RgisterForm : public System::Windows::Forms::Form
	{
	public:
		RgisterForm(void)
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
		~RgisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblRegister;
	private: System::Windows::Forms::Label^ lblName;
	private: System::Windows::Forms::Label^ lblAddress;
	private: System::Windows::Forms::Label^ lblEmail;
	private: System::Windows::Forms::Label^ lblPhone;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::TextBox^ txtAddress;
	private: System::Windows::Forms::TextBox^ txtEmail;
	private: System::Windows::Forms::TextBox^ txtPhone;
	private: System::Windows::Forms::Button^ btnOk;









	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::Label^ lblPassword;
	private: System::Windows::Forms::LinkLabel^ linkLogin;

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
			this->lblRegister = (gcnew System::Windows::Forms::Label());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->lblAddress = (gcnew System::Windows::Forms::Label());
			this->lblEmail = (gcnew System::Windows::Forms::Label());
			this->lblPhone = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtAddress = (gcnew System::Windows::Forms::TextBox());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtPhone = (gcnew System::Windows::Forms::TextBox());
			this->btnOk = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->lblPassword = (gcnew System::Windows::Forms::Label());
			this->linkLogin = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// lblRegister
			// 
			this->lblRegister->Font = (gcnew System::Drawing::Font(L"MingLiU_HKSCS-ExtB", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRegister->Location = System::Drawing::Point(12, 13);
			this->lblRegister->Name = L"lblRegister";
			this->lblRegister->Size = System::Drawing::Size(454, 58);
			this->lblRegister->TabIndex = 0;
			this->lblRegister->Text = L"Register";
			this->lblRegister->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblName->Location = System::Drawing::Point(18, 77);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(77, 30);
			this->lblName->TabIndex = 1;
			this->lblName->Text = L"Name";
			// 
			// lblAddress
			// 
			this->lblAddress->AutoSize = true;
			this->lblAddress->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAddress->Location = System::Drawing::Point(18, 129);
			this->lblAddress->Name = L"lblAddress";
			this->lblAddress->Size = System::Drawing::Size(97, 30);
			this->lblAddress->TabIndex = 2;
			this->lblAddress->Text = L"Address";
			// 
			// lblEmail
			// 
			this->lblEmail->AutoSize = true;
			this->lblEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEmail->Location = System::Drawing::Point(18, 181);
			this->lblEmail->Name = L"lblEmail";
			this->lblEmail->Size = System::Drawing::Size(70, 30);
			this->lblEmail->TabIndex = 3;
			this->lblEmail->Text = L"Email";
			// 
			// lblPhone
			// 
			this->lblPhone->AutoSize = true;
			this->lblPhone->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPhone->Location = System::Drawing::Point(18, 231);
			this->lblPhone->Name = L"lblPhone";
			this->lblPhone->Size = System::Drawing::Size(81, 30);
			this->lblPhone->TabIndex = 4;
			this->lblPhone->Text = L"Phone";
			// 
			// txtName
			// 
			this->txtName->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtName->Location = System::Drawing::Point(135, 74);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(312, 38);
			this->txtName->TabIndex = 5;
			// 
			// txtAddress
			// 
			this->txtAddress->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtAddress->Location = System::Drawing::Point(135, 126);
			this->txtAddress->Name = L"txtAddress";
			this->txtAddress->Size = System::Drawing::Size(312, 38);
			this->txtAddress->TabIndex = 6;
			// 
			// txtEmail
			// 
			this->txtEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtEmail->Location = System::Drawing::Point(135, 178);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(312, 38);
			this->txtEmail->TabIndex = 7;
			// 
			// txtPhone
			// 
			this->txtPhone->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPhone->Location = System::Drawing::Point(135, 228);
			this->txtPhone->Name = L"txtPhone";
			this->txtPhone->Size = System::Drawing::Size(312, 38);
			this->txtPhone->TabIndex = 8;
			// 
			// btnOk
			// 
			this->btnOk->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOk->Location = System::Drawing::Point(23, 352);
			this->btnOk->Name = L"btnOk";
			this->btnOk->Size = System::Drawing::Size(194, 46);
			this->btnOk->TabIndex = 9;
			this->btnOk->Text = L"Register";
			this->btnOk->UseVisualStyleBackColor = true;
			this->btnOk->Click += gcnew System::EventHandler(this, &RgisterForm::btnOk_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->Location = System::Drawing::Point(253, 352);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(194, 46);
			this->btnCancel->TabIndex = 10;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &RgisterForm::btnCancel_Click);
			// 
			// txtPassword
			// 
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPassword->Location = System::Drawing::Point(135, 281);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(312, 38);
			this->txtPassword->TabIndex = 12;
			// 
			// lblPassword
			// 
			this->lblPassword->AutoSize = true;
			this->lblPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPassword->Location = System::Drawing::Point(18, 284);
			this->lblPassword->Name = L"lblPassword";
			this->lblPassword->Size = System::Drawing::Size(111, 30);
			this->lblPassword->TabIndex = 11;
			this->lblPassword->Text = L"Password";
			// 
			// linkLogin
			// 
			this->linkLogin->AutoSize = true;
			this->linkLogin->Location = System::Drawing::Point(208, 417);
			this->linkLogin->Name = L"linkLogin";
			this->linkLogin->Size = System::Drawing::Size(48, 20);
			this->linkLogin->TabIndex = 13;
			this->linkLogin->TabStop = true;
			this->linkLogin->Text = L"Login";
			this->linkLogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &RgisterForm::linkLogin_LinkClicked);
			// 
			// RgisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(478, 456);
			this->ControlBox = false;
			this->Controls->Add(this->linkLogin);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->lblPassword);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOk);
			this->Controls->Add(this->txtPhone);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->txtAddress);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->lblPhone);
			this->Controls->Add(this->lblEmail);
			this->Controls->Add(this->lblAddress);
			this->Controls->Add(this->lblName);
			this->Controls->Add(this->lblRegister);
			this->Name = L"RgisterForm";
			this->Text = L"Rgister Form";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	public : User^ user = nullptr; 

	private: System::Void btnOk_Click(System::Object^ sender, System::EventArgs^ e) {

		//String^ name = txtName->Text;
		//String^ address = txtAddress->Text;
		//String^ email = txtEmail->Text;
		//String^ phone = txtPhone->Text;
		//String^ password = txtPassword->Text;

		try {
			DBConnection^ connection = DBConnection::GetInstance();
			connection->OpenConnection();

			String^ sql = "INSERT INTO users (name, address, email, phone, password) VALUES (@name, @address, @email, @phone, @password)";
			SqlCommand^ command = gcnew SqlCommand(sql, connection->getConnection());

			command->Parameters->AddWithValue("@name", txtName->Text);
			command->Parameters->AddWithValue("@address", txtAddress->Text);
			command->Parameters->AddWithValue("@email", txtEmail->Text);
			command->Parameters->AddWithValue("@phone", txtPhone->Text);
			command->Parameters->AddWithValue("@password", txtPassword->Text);

			if (command->ExecuteNonQuery()) {
				MessageBox::Show("User Register Successfully","User Register",MessageBoxButtons::OK);
			}
			else {
				MessageBox::Show("User Register Unsuccessfully", "User Register", MessageBoxButtons::OK);
			}

			user = gcnew User();

			user->Name = txtName->Text;
			user->Address = txtAddress->Text;
			user->Email = txtEmail->Text;
			user->Phone = txtPhone->Text;
			user->Password = txtPassword->Text;

			txtName->Text = "";
			txtAddress->Text = "";
			txtEmail->Text = "";
			txtPassword->Text = "";
			txtPhone->Text = "";

			this->gotoLoginPage = true;
			this->Close();

		}
		catch (Exception^ e) {
			MessageBox::Show("DB not connected","Connection Error",MessageBoxButtons::OK);
		}


	}
	public: bool gotoLoginPage = false;
	private: System::Void linkLogin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->gotoLoginPage = true;
		this->Close();
	}
};
}
