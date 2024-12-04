#pragma once
#include "BaseDatosInmobiliaria.h"

namespace inmobiliariaVer1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de NuevoClienteForm
	/// </summary>
	public ref class NuevoClienteForm : public System::Windows::Forms::Form
	{
	public:
		NuevoClienteForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->data = gcnew BaseDatosInmobiliaria();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~NuevoClienteForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ txtNombre;
	private: System::Windows::Forms::TextBox^ txtApellido;
	private: System::Windows::Forms::TextBox^ txtDni;
	private: System::Windows::Forms::TextBox^ txtEmail;
	private: System::Windows::Forms::TextBox^ txtTelefono;
	private: BaseDatosInmobiliaria^ data;//creando data




	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtRol;

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
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->txtApellido = (gcnew System::Windows::Forms::TextBox());
			this->txtDni = (gcnew System::Windows::Forms::TextBox());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtTelefono = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtRol = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(26, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Principal";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(35, 221);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 16);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Contacto";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(54, 68);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 16);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Nombre";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(54, 107);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 16);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Apellido";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(54, 139);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(27, 16);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Dni";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(54, 299);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(61, 16);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Telefono";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(54, 261);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(41, 16);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Email";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(3, 353);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(497, 68);
			this->panel1->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(92, 11);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(124, 34);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Guardar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &NuevoClienteForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(293, 11);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 34);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Cancelar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &NuevoClienteForm::button1_Click);
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(174, 66);
			this->txtNombre->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(243, 22);
			this->txtNombre->TabIndex = 3;
			// 
			// txtApellido
			// 
			this->txtApellido->Location = System::Drawing::Point(174, 102);
			this->txtApellido->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtApellido->Name = L"txtApellido";
			this->txtApellido->Size = System::Drawing::Size(243, 22);
			this->txtApellido->TabIndex = 3;
			// 
			// txtDni
			// 
			this->txtDni->Location = System::Drawing::Point(174, 134);
			this->txtDni->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtDni->Name = L"txtDni";
			this->txtDni->Size = System::Drawing::Size(243, 22);
			this->txtDni->TabIndex = 3;
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(174, 258);
			this->txtEmail->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(243, 22);
			this->txtEmail->TabIndex = 3;
			// 
			// txtTelefono
			// 
			this->txtTelefono->Location = System::Drawing::Point(174, 296);
			this->txtTelefono->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtTelefono->Name = L"txtTelefono";
			this->txtTelefono->Size = System::Drawing::Size(243, 22);
			this->txtTelefono->TabIndex = 3;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(54, 176);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(28, 16);
			this->label8->TabIndex = 4;
			this->label8->Text = L"Rol";
			// 
			// txtRol
			// 
			this->txtRol->Location = System::Drawing::Point(174, 176);
			this->txtRol->Name = L"txtRol";
			this->txtRol->Size = System::Drawing::Size(237, 22);
			this->txtRol->TabIndex = 5;
			// 
			// NuevoClienteForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(505, 420);
			this->Controls->Add(this->txtRol);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txtTelefono);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->txtDni);
			this->Controls->Add(this->txtApellido);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"NuevoClienteForm";
			this->Text = L"Formulario Alta Cliente";
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	//guardar un cliente
	this->data->abrirConexion();
	this->data->insertarCl(this->txtNombre->Text, this->txtApellido->Text, this->txtDni->Text, this->txtRol->Text, this->txtEmail->Text, this->txtTelefono->Text);
	MessageBox::Show("Cliente registrado correctamente!");
	this->data->cerrarConexion();
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
