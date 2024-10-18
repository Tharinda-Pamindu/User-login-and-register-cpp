#include"LoginForm.h"
#include"MainForm.h"
#include"RgisterForm.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array<String^>^ args) {
	
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	/*TempProject::LoginForm loginForm;
	TempProject::RgisterForm regForm;*/

	//loginForm.ShowDialog();
	//regForm.ShowDialog();

	User^ user = nullptr;

	while (true) {

		TempProject::LoginForm loginForm;
		loginForm.ShowDialog();

		if (loginForm.gotoRegisterPage) {
			TempProject::RgisterForm registerForm;
			registerForm.ShowDialog();

			if (registerForm.gotoLoginPage) {
				continue;
			}
			else {
				user = registerForm.user;
				break;
			}
		}
		else {
			user = loginForm.user;
			break;
		}
	}


	//User^ user = loginForm.user;

	if (user!=nullptr) {
		//MessageBox::Show("Successful Authentication of "+ user->Name, "Authentication", MessageBoxButtons::OK);
		TempProject::MainForm form(user);
		Application::Run(% form);
	}
	/*else
	{
		MessageBox::Show("Unsuccessful Authentication", "Authentication", MessageBoxButtons::OK);
	}*/
}