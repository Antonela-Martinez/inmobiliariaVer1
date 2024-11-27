      #pragma once
#include "User.h"
#include "BaseDatosInmobiliaria.h"

namespace inmobiliariaVer1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Resumen de Registro
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->CenterToScreen();
			this->data = gcnew BaseDatosInmobiliaria();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbEmail;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbPhone;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbAddress;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ tbPassword;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ tbConfirmPassword;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::LinkLabel^ llLogin;
	private: BaseDatosInmobiliaria^ data;//creando data





	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbPhone = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbAddress = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tbConfirmPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->llLogin = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(11, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(581, 47);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Register";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(38, 78);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name";
			// 
			// tbName
			// 
			this->tbName->Location = System::Drawing::Point(210, 81);
			this->tbName->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(368, 22);
			this->tbName->TabIndex = 2;
			this->tbName->TextChanged += gcnew System::EventHandler(this, &RegisterForm::tbName_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(42, 116);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 25);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Email";
			// 
			// tbEmail
			// 
			this->tbEmail->Location = System::Drawing::Point(210, 116);
			this->tbEmail->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(368, 22);
			this->tbEmail->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(38, 150);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(69, 25);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Phone";
			// 
			// tbPhone
			// 
			this->tbPhone->Location = System::Drawing::Point(210, 150);
			this->tbPhone->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbPhone->Name = L"tbPhone";
			this->tbPhone->Size = System::Drawing::Size(368, 22);
			this->tbPhone->TabIndex = 2;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(42, 188);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(85, 25);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Address";
			// 
			// tbAddress
			// 
			this->tbAddress->Location = System::Drawing::Point(210, 191);
			this->tbAddress->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbAddress->Name = L"tbAddress";
			this->tbAddress->Size = System::Drawing::Size(368, 22);
			this->tbAddress->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(42, 223);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(98, 25);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Password";
			// 
			// tbPassword
			// 
			this->tbPassword->Location = System::Drawing::Point(210, 226);
			this->tbPassword->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(368, 22);
			this->tbPassword->TabIndex = 2;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(18, 259);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(171, 25);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Confirm Password";
			// 
			// tbConfirmPassword
			// 
			this->tbConfirmPassword->Location = System::Drawing::Point(210, 259);
			this->tbConfirmPassword->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbConfirmPassword->Name = L"tbConfirmPassword";
			this->tbConfirmPassword->PasswordChar = '*';
			this->tbConfirmPassword->Size = System::Drawing::Size(368, 22);
			this->tbConfirmPassword->TabIndex = 2;
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(419, 302);
			this->btnCancel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(159, 33);
			this->btnCancel->TabIndex = 3;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &RegisterForm::btnCancel_Click);
			// 
			// btnOK
			// 
			this->btnOK->Location = System::Drawing::Point(210, 302);
			this->btnOK->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(159, 33);
			this->btnOK->TabIndex = 3;
			this->btnOK->Text = L"Ok";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &RegisterForm::btnOK_Click);
			// 
			// llLogin
			// 
			this->llLogin->AutoSize = true;
			this->llLogin->Location = System::Drawing::Point(508, 349);
			this->llLogin->Name = L"llLogin";
			this->llLogin->Size = System::Drawing::Size(40, 16);
			this->llLogin->TabIndex = 4;
			this->llLogin->TabStop = true;
			this->llLogin->Text = L"Login";
			this->llLogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &RegisterForm::llLogin_LinkClicked);
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(590, 393);
			this->Controls->Add(this->llLogin);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->tbConfirmPassword);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->tbAddress);
			this->Controls->Add(this->tbPhone);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"RegisterForm";
			this->Text = L"Register Form";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	public: bool switchToLoging = false;
	private: System::Void llLogin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchToLoging = true;
		this->Close();
	}

	public: User^ user = nullptr;
	private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
		this->data->abrirConexion();

		this->data->insertar(this->tbName->Text, this->tbEmail->Text, this->tbPhone->Text, this->tbAddress->Text, this->tbPassword->Text);
		this->data->cerrarConexion();
	}
private: System::Void tbName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
