#pragma once

namespace inmobiliariaVer1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ModificarCl
	/// </summary>
	public ref class ModificarCl : public System::Windows::Forms::Form
	{
	public:
		ModificarCl(void)
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
		~ModificarCl()
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
	public: System::Windows::Forms::TextBox^ txtNombre;
	public: System::Windows::Forms::TextBox^ txtApellido;
	public: System::Windows::Forms::TextBox^ txtDni;
	public: System::Windows::Forms::TextBox^ txtEmail;
	public: System::Windows::Forms::TextBox^ txtTelefono;





	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	public: System::Windows::Forms::TextBox^ txtRol;

	private: System::Windows::Forms::Label^ label6;

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
			this->txtApellido = (gcnew System::Windows::Forms::TextBox());
			this->txtDni = (gcnew System::Windows::Forms::TextBox());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtTelefono = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->txtRol = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(111, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(111, 115);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Apellido";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(111, 176);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(27, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Dni";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(111, 279);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Email";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(106, 334);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(61, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Telefono";
			this->label5->Click += gcnew System::EventHandler(this, &ModificarCl::label5_Click);
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(212, 45);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(143, 22);
			this->txtNombre->TabIndex = 5;
			// 
			// txtApellido
			// 
			this->txtApellido->Location = System::Drawing::Point(212, 109);
			this->txtApellido->Name = L"txtApellido";
			this->txtApellido->Size = System::Drawing::Size(143, 22);
			this->txtApellido->TabIndex = 6;
			// 
			// txtDni
			// 
			this->txtDni->Location = System::Drawing::Point(212, 170);
			this->txtDni->Name = L"txtDni";
			this->txtDni->Size = System::Drawing::Size(115, 22);
			this->txtDni->TabIndex = 7;
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(212, 279);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(143, 22);
			this->txtEmail->TabIndex = 8;
			// 
			// txtTelefono
			// 
			this->txtTelefono->Location = System::Drawing::Point(212, 334);
			this->txtTelefono->Name = L"txtTelefono";
			this->txtTelefono->Size = System::Drawing::Size(113, 22);
			this->txtTelefono->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(95, 394);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(88, 37);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Guardar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ModificarCl::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(259, 394);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(96, 37);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ModificarCl::button2_Click);
			// 
			// txtRol
			// 
			this->txtRol->Location = System::Drawing::Point(212, 226);
			this->txtRol->Name = L"txtRol";
			this->txtRol->Size = System::Drawing::Size(137, 22);
			this->txtRol->TabIndex = 12;
			this->txtRol->TextChanged += gcnew System::EventHandler(this, &ModificarCl::textBox6_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(111, 226);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(28, 16);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Rol";
			this->label6->Click += gcnew System::EventHandler(this, &ModificarCl::label6_Click);
			// 
			// ModificarCl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(439, 461);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtRol);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtTelefono);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->txtDni);
			this->Controls->Add(this->txtApellido);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ModificarCl";
			this->Text = L"ModificarCl";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Cliente modificado correctamente!");
	this->Close();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
