#pragma once
#include "BaseDatosInmobiliaria.h"//agregando libreria 27/11

namespace inmobiliariaVer1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ModificarEm
	/// </summary>
	public ref class ModificarEm : public System::Windows::Forms::Form
	{
	public:
		ModificarEm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ModificarEm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	public: System::Windows::Forms::TextBox^ txtNombre;
	public: System::Windows::Forms::TextBox^ txtEmail;

	public: System::Windows::Forms::TextBox^ txtTelefono;
	public: System::Windows::Forms::TextBox^ txtDireccion;
	public: System::Windows::Forms::TextBox^ txtContraseña;





	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtTelefono = (gcnew System::Windows::Forms::TextBox());
			this->txtDireccion = (gcnew System::Windows::Forms::TextBox());
			this->txtContraseña = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(115, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(115, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Email";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(115, 156);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Telefono";
			this->label3->Click += gcnew System::EventHandler(this, &ModificarEm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(115, 206);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Direccion";
			this->label4->Click += gcnew System::EventHandler(this, &ModificarEm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(115, 258);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Contraseña";
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(270, 50);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(116, 22);
			this->txtNombre->TabIndex = 5;
			this->txtNombre->TextChanged += gcnew System::EventHandler(this, &ModificarEm::txtnombre_TextChanged);
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(270, 99);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(146, 22);
			this->txtEmail->TabIndex = 6;
			this->txtEmail->TextChanged += gcnew System::EventHandler(this, &ModificarEm::txt_Email_TextChanged);
			// 
			// txtTelefono
			// 
			this->txtTelefono->Location = System::Drawing::Point(270, 153);
			this->txtTelefono->Name = L"txtTelefono";
			this->txtTelefono->Size = System::Drawing::Size(116, 22);
			this->txtTelefono->TabIndex = 7;
			// 
			// txtDireccion
			// 
			this->txtDireccion->Location = System::Drawing::Point(270, 206);
			this->txtDireccion->Name = L"txtDireccion";
			this->txtDireccion->Size = System::Drawing::Size(146, 22);
			this->txtDireccion->TabIndex = 8;
			// 
			// txtContraseña
			// 
			this->txtContraseña->Location = System::Drawing::Point(270, 258);
			this->txtContraseña->Name = L"txtContraseña";
			this->txtContraseña->Size = System::Drawing::Size(116, 22);
			this->txtContraseña->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(131, 337);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 35);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Guardar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ModificarEm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(280, 336);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(92, 36);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ModificarEm::button2_Click);
			// 
			// ModificarEm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(513, 414);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtContraseña);
			this->Controls->Add(this->txtDireccion);
			this->Controls->Add(this->txtTelefono);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ModificarEm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ModificarEm";
			this->Load += gcnew System::EventHandler(this, &ModificarEm::ModificarEm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtnombre_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_Email_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ModificarEm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	MessageBox::Show("Usuario modificado correctamente!");
	this->Close();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	this->Close();
}
};
}
