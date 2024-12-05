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
	/// Resumen de NuevoInmuebleForm
	/// </summary>
	public ref class NuevoInmuebleForm : public System::Windows::Forms::Form
	{
	public:
		NuevoInmuebleForm(void)
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
		~NuevoInmuebleForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::GroupBox^ groupBox1;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtCalle;
	private: System::Windows::Forms::TextBox^ txtNum;
	private: System::Windows::Forms::TextBox^ txtPro;
	private: System::Windows::Forms::TextBox^ txtCp;




	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;






	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ txtAmb;
	private: System::Windows::Forms::TextBox^ txtSupTo;


	private: System::Windows::Forms::TextBox^ txtSupC;

	private: System::Windows::Forms::TextBox^ txtbañ;

	private: System::Windows::Forms::TextBox^ txtDorm;

	private: System::Windows::Forms::TextBox^ txtCoch;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private: BaseDatosInmobiliaria^ data;//creando data
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ txtAdic;

	private: System::Windows::Forms::ComboBox^ comboBox2;


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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtCalle = (gcnew System::Windows::Forms::TextBox());
			this->txtNum = (gcnew System::Windows::Forms::TextBox());
			this->txtPro = (gcnew System::Windows::Forms::TextBox());
			this->txtCp = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->txtAmb = (gcnew System::Windows::Forms::TextBox());
			this->txtSupTo = (gcnew System::Windows::Forms::TextBox());
			this->txtSupC = (gcnew System::Windows::Forms::TextBox());
			this->txtbañ = (gcnew System::Windows::Forms::TextBox());
			this->txtDorm = (gcnew System::Windows::Forms::TextBox());
			this->txtCoch = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->txtAdic = (gcnew System::Windows::Forms::TextBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(29, 67);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(105, 25);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Propietario";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(29, 346);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(51, 25);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Tipo";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Mariano Rodriguez", L"Maria Elena Suarez", L"Mayra nuñez" });
			this->comboBox1->Location = System::Drawing::Point(167, 70);
			this->comboBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(264, 24);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &NuevoInmuebleForm::comboBox1_SelectedIndexChanged);
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"Departamento", L"Campo", L"Fondo de comercio",
					L"Quinta", L"Casa", L"Local", L"Terreno o lote", L"Oficina", L"Consultorios"
			});
			this->checkedListBox1->Location = System::Drawing::Point(13, 27);
			this->checkedListBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(392, 179);
			this->checkedListBox1->TabIndex = 2;
			this->checkedListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &NuevoInmuebleForm::checkedListBox1_SelectedIndexChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->checkedListBox1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(20, 102);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(411, 230);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Clase";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(11, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(243, 31);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Datos Principales";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(9, 391);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(133, 31);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Inmueble";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(613, 437);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 25);
			this->label4->TabIndex = 6;
			this->label4->Text = L"C.P.";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(397, 436);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(92, 25);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Provincia";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(193, 434);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(81, 25);
			this->label9->TabIndex = 10;
			this->label9->Text = L"Numero";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(29, 434);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(57, 25);
			this->label10->TabIndex = 11;
			this->label10->Text = L"Calle";
			// 
			// txtCalle
			// 
			this->txtCalle->Location = System::Drawing::Point(86, 436);
			this->txtCalle->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtCalle->Name = L"txtCalle";
			this->txtCalle->Size = System::Drawing::Size(89, 22);
			this->txtCalle->TabIndex = 12;
			// 
			// txtNum
			// 
			this->txtNum->Location = System::Drawing::Point(275, 437);
			this->txtNum->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtNum->Name = L"txtNum";
			this->txtNum->Size = System::Drawing::Size(89, 22);
			this->txtNum->TabIndex = 12;
			// 
			// txtPro
			// 
			this->txtPro->Location = System::Drawing::Point(491, 439);
			this->txtPro->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtPro->Name = L"txtPro";
			this->txtPro->Size = System::Drawing::Size(89, 22);
			this->txtPro->TabIndex = 12;
			// 
			// txtCp
			// 
			this->txtCp->Location = System::Drawing::Point(658, 437);
			this->txtCp->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtCp->Name = L"txtCp";
			this->txtCp->Size = System::Drawing::Size(89, 22);
			this->txtCp->TabIndex = 12;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(504, 18);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(211, 31);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Caracteristicas";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(530, 269);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(102, 25);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Sup. Total";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(530, 65);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(105, 25);
			this->label11->TabIndex = 14;
			this->label11->Text = L"Ambientes";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(540, 103);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(97, 25);
			this->label12->TabIndex = 14;
			this->label12->Text = L"Cocheras";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(574, -126);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(51, 25);
			this->label13->TabIndex = 14;
			this->label13->Text = L"Tipo";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(525, 143);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(110, 25);
			this->label14->TabIndex = 14;
			this->label14->Text = L"Dormitorios";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(562, 185);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(68, 25);
			this->label15->TabIndex = 14;
			this->label15->Text = L"Baños";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(574, -273);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(51, 25);
			this->label16->TabIndex = 14;
			this->label16->Text = L"Tipo";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(501, 226);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(132, 25);
			this->label18->TabIndex = 21;
			this->label18->Text = L"Sup. Cubierta";
			// 
			// txtAmb
			// 
			this->txtAmb->Location = System::Drawing::Point(658, 67);
			this->txtAmb->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtAmb->Name = L"txtAmb";
			this->txtAmb->Size = System::Drawing::Size(106, 22);
			this->txtAmb->TabIndex = 22;
			this->txtAmb->TextChanged += gcnew System::EventHandler(this, &NuevoInmuebleForm::textBox5_TextChanged);
			// 
			// txtSupTo
			// 
			this->txtSupTo->Location = System::Drawing::Point(658, 269);
			this->txtSupTo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtSupTo->Name = L"txtSupTo";
			this->txtSupTo->Size = System::Drawing::Size(106, 22);
			this->txtSupTo->TabIndex = 23;
			// 
			// txtSupC
			// 
			this->txtSupC->Location = System::Drawing::Point(658, 228);
			this->txtSupC->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtSupC->Name = L"txtSupC";
			this->txtSupC->Size = System::Drawing::Size(106, 22);
			this->txtSupC->TabIndex = 24;
			// 
			// txtbañ
			// 
			this->txtbañ->Location = System::Drawing::Point(658, 188);
			this->txtbañ->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtbañ->Name = L"txtbañ";
			this->txtbañ->Size = System::Drawing::Size(106, 22);
			this->txtbañ->TabIndex = 25;
			// 
			// txtDorm
			// 
			this->txtDorm->Location = System::Drawing::Point(658, 146);
			this->txtDorm->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtDorm->Name = L"txtDorm";
			this->txtDorm->Size = System::Drawing::Size(106, 22);
			this->txtDorm->TabIndex = 26;
			// 
			// txtCoch
			// 
			this->txtCoch->Location = System::Drawing::Point(658, 105);
			this->txtCoch->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtCoch->Name = L"txtCoch";
			this->txtCoch->Size = System::Drawing::Size(106, 22);
			this->txtCoch->TabIndex = 27;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Wheat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(131, 544);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(161, 44);
			this->button1->TabIndex = 28;
			this->button1->Text = L"Guardar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &NuevoInmuebleForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(467, 544);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(160, 44);
			this->button2->TabIndex = 29;
			this->button2->Text = L"Imagen";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &NuevoInmuebleForm::button2_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(538, 310);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(92, 25);
			this->label17->TabIndex = 31;
			this->label17->Text = L"Adicional";
			// 
			// txtAdic
			// 
			this->txtAdic->Location = System::Drawing::Point(657, 310);
			this->txtAdic->Name = L"txtAdic";
			this->txtAdic->Size = System::Drawing::Size(107, 22);
			this->txtAdic->TabIndex = 32;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Venta", L"Alquiler", L"Venta-Alquiler" });
			this->comboBox2->Location = System::Drawing::Point(183, 346);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(220, 24);
			this->comboBox2->TabIndex = 33;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &NuevoInmuebleForm::comboBox2_SelectedIndexChanged);
			// 
			// NuevoInmuebleForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(802, 594);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->txtAdic);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtCoch);
			this->Controls->Add(this->txtDorm);
			this->Controls->Add(this->txtbañ);
			this->Controls->Add(this->txtSupC);
			this->Controls->Add(this->txtSupTo);
			this->Controls->Add(this->txtAmb);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtCp);
			this->Controls->Add(this->txtPro);
			this->Controls->Add(this->txtNum);
			this->Controls->Add(this->txtCalle);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label3);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"NuevoInmuebleForm";
			this->Text = L"Alta Inmueble";
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

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

private: System::Void VentaAlquiler_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->data->abrirConexion();
	this->data->insertarIn(this->comboBox1->SelectedItem->ToString(),this->checkedListBox1->SelectedItem->ToString(), this->comboBox2->SelectedItem->ToString(), this->txtCalle->Text, this->txtNum->Text, this->txtPro->Text, this->txtCp->Text, this->txtAmb->Text, this->txtCoch->Text, this->txtDorm->Text, this->txtbañ->Text, this->txtSupC->Text, this->txtSupTo->Text, this->txtAdic->Text);
	MessageBox::Show("Inmueble registrado correctamente!");
	this->data->cerrarConexion();
}
private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
