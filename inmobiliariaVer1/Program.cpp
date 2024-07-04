#include "LoginForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ arg)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	inmobiliariaVer1::LoginForm loginForm;

	loginForm.ShowDialog();
	User^ user loginForm.user;

	if (user != nullptr) {
		MessageBox::Show("Successfull Authentication of " + user->name,
			"Program.cpp", MessageBoxButtons::OK);
	}
	else {
		MessageBox::Show("Authentication Canceled ",
			"Program.cpp", MessageBoxButtons::OK);
	}

}