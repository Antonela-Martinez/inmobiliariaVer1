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
	/// Resumen de ModificarInm
	/// </summary>
	public ref class ModificarInm : public System::Windows::Forms::Form
	{
	public:
		ModificarInm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->data = gcnew BaseDatosInmobiliaria();
			leerclientes();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ModificarInm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Nombre;
	protected:

	private: BaseDatosInmobiliaria^ data;//creando data
	public: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	public: System::Windows::Forms::ComboBox^ comboBox2;
	public: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ label4;
	public: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	public: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	public: System::Windows::Forms::TextBox^ textBox3;
	public: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	public: System::Windows::Forms::TextBox^ textBox5;
	public: System::Windows::Forms::TextBox^ textBox6;
	public: System::Windows::Forms::TextBox^ textBox7;
	public: System::Windows::Forms::TextBox^ textBox8;
	public: System::Windows::Forms::TextBox^ textBox9;
	public: System::Windows::Forms::TextBox^ textBox10;
	public: System::Windows::Forms::TextBox^ textBox11;
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
			this->Nombre = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Nombre
			// 
			this->Nombre->AutoSize = true;
			this->Nombre->Location = System::Drawing::Point(135, 41);
			this->Nombre->Name = L"Nombre";
			this->Nombre->Size = System::Drawing::Size(56, 16);
			this->Nombre->TabIndex = 0;
			this->Nombre->Text = L"Nombre";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(237, 38);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(138, 24);
			this->comboBox1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(135, 91);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Clase";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(135, 135);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 16);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Tipo";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"Departamento", L"Campo", L"Fondo de comercio",
					L"Quinta", L"Casa", L"Local", L"Terreno o lote", L"Oficina", L"Consultorios"
			});
			this->comboBox2->Location = System::Drawing::Point(237, 83);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(138, 24);
			this->comboBox2->TabIndex = 4;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Venta", L"Alquiler", L"Venta-Alquiler" });
			this->comboBox3->Location = System::Drawing::Point(237, 127);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(137, 24);
			this->comboBox3->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(57, 199);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(38, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Calle";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(124, 196);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(261, 199);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 16);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Numero";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(334, 196);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(112, 22);
			this->textBox2->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(57, 247);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(63, 16);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Provincia";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(261, 247);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(28, 16);
			this->label7->TabIndex = 11;
			this->label7->Text = L"C.P";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(125, 245);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(98, 22);
			this->textBox3->TabIndex = 12;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(335, 245);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(110, 22);
			this->textBox4->TabIndex = 13;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(191, 295);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(132, 16);
			this->label8->TabIndex = 14;
			this->label8->Text = L"CARACTERISTICAS";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(57, 343);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(71, 16);
			this->label9->TabIndex = 15;
			this->label9->Text = L"Ambientes";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(261, 343);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(65, 16);
			this->label10->TabIndex = 16;
			this->label10->Text = L"Cocheras";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(57, 394);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(76, 16);
			this->label11->TabIndex = 17;
			this->label11->Text = L"Dormitorios";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(261, 394);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(46, 16);
			this->label12->TabIndex = 18;
			this->label12->Text = L"Baños";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(57, 446);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(84, 16);
			this->label13->TabIndex = 19;
			this->label13->Text = L"Sup.Cubierta";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(261, 446);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(68, 16);
			this->label14->TabIndex = 20;
			this->label14->Text = L"Sup. Total";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(161, 497);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(63, 16);
			this->label15->TabIndex = 21;
			this->label15->Text = L"Adicional";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(139, 340);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(83, 22);
			this->textBox5->TabIndex = 22;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(335, 340);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(105, 22);
			this->textBox6->TabIndex = 23;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(139, 391);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(80, 22);
			this->textBox7->TabIndex = 24;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(335, 391);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(105, 22);
			this->textBox8->TabIndex = 25;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(147, 443);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(72, 22);
			this->textBox9->TabIndex = 26;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(348, 443);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(91, 22);
			this->textBox10->TabIndex = 27;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(237, 494);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(102, 22);
			this->textBox11->TabIndex = 28;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(124, 556);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 37);
			this->button1->TabIndex = 29;
			this->button1->Text = L"Guardar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ModificarInm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(285, 556);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 37);
			this->button2->TabIndex = 30;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ModificarInm::button2_Click);
			// 
			// ModificarInm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(517, 616);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->Nombre);
			this->Name = L"ModificarInm";
			this->Text = L"ModificarInm";
			this->Load += gcnew System::EventHandler(this, &ModificarInm::ModificarInm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: void leerclientes() {

		try {
			this->data->abrirConexion();

			// Usar parámetros para evitar inyección SQL
			String^ sql = "SELECT nombre FROM clientes";
			MySqlCommand^ cmd = gcnew MySqlCommand(sql, this->data->getConnection());

			MySqlDataReader^ reader = cmd->ExecuteReader();

			comboBox1->Items->Clear();

			while (reader->Read()) {
				comboBox1->Items->Add(reader["nombre"]->ToString());

			}
			this->data->cerrarConexion();
		}
		catch (Exception^ ex) {
			this->data->cerrarConexion();
			MessageBox::Show("Error al verificar las credenciales: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}

	private: System::Void ModificarInm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Inmueble modificado correctamente!");
		this->Close();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
