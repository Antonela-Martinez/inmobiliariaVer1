#include "LoginForm.h"
#include "MainForm.h"
#include "RegisterForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	User^ user = nullptr;
	while (true)
	{
		inmobiliariaVer1::LoginForm loginForm;
		loginForm.ShowDialog();

		if (loginForm.switchToRegister) {
			//Mostramos el formulario de registro
			inmobiliariaVer1::RegisterForm registerForm;
			registerForm.ShowDialog();

			if (registerForm.switchToLoging) {
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
	//(Eliminar)
	//inmobiliariaVer1::LoginForm loginForm;
	//loginForm.ShowDialog();
	//User^ user = loginForm.user;

	if (user != nullptr) {
		inmobiliariaVer1::MainForm mainForm(user);
		Application::Run(% mainForm);
	}
	else {
		MessageBox::Show("Authentication Canceled ",
			"Program.cpp", MessageBoxButtons::OK);
	}

}