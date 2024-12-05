#pragma once
#include "BaseDatosInmobiliaria.h"
#include "NuevoInmuebleForm.h"
#include "ModificarInm.h"

namespace inmobiliariaVer1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MostrarInmuebles
	/// </summary>
	public ref class MostrarInmuebles : public System::Windows::Forms::Form
	{
	public:
		MostrarInmuebles(void)
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
		~MostrarInmuebles()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: BaseDatosInmobiliaria^ data;//agregado 3/12

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(39, 39);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(643, 227);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MostrarInmuebles::dataGridView1_CellClick);
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MostrarInmuebles::dataGridView1_CellContentClick);
			this->dataGridView1->DoubleClick += gcnew System::EventHandler(this, &MostrarInmuebles::dataGridView1_DoubleClick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(88, 311);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 40);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Registrar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MostrarInmuebles::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(239, 311);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(111, 40);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Eliminar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MostrarInmuebles::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(382, 323);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Seleccionando  a:";
			// 
			// MostrarInmuebles
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(720, 389);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MostrarInmuebles";
			this->Text = L"MostrarInmuebles";
			this->Load += gcnew System::EventHandler(this, &MostrarInmuebles::MostrarInmuebles_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		public: void leer() {
			//agregado 27/11
			this->data->abrirConexion();
			this->dataGridView1->DataSource = this->data->getDataInmueble();
			//llenando datos a la tabla
			this->data->cerrarConexion();
		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
		inmobiliariaVer1::NuevoInmuebleForm^ nuevoIn = gcnew inmobiliariaVer1::NuevoInmuebleForm();

		this->Visible = false;
		nuevoIn->ShowDialog();
		this->Visible = true;
	}
private: System::Void MostrarInmuebles_Load(System::Object^ sender, System::EventArgs^ e) {
	this->leer();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nombre = Convert::ToString(dataGridView1->SelectedRows[0]->Cells[0]->Value);

	BaseDatosInmobiliaria^ data = gcnew BaseDatosInmobiliaria();
	data->abrirConexion();
	data->eliminarIn(nombre);
	data->cerrarConexion();
	this->leer();
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	String^ nombre = Convert::ToString(dataGridView1->SelectedRows[0]->Cells[0]->Value);
	label1->Text = "Seleccionado: " + nombre;
}
private: System::Void dataGridView1_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
	
	String^ nombre = Convert::ToString(dataGridView1->SelectedRows[0]->Cells[1]->Value);
	String^ clase = Convert::ToString(dataGridView1->SelectedRows[0]->Cells[2]->Value);
	String^ tipo = Convert::ToString(dataGridView1->SelectedRows[0]->Cells[3]->Value);
	String^ calle = Convert::ToString(dataGridView1->SelectedRows[0]->Cells[4]->Value);
	String^ numero = Convert::ToString(dataGridView1->SelectedRows[0]->Cells[5]->Value);
	String^ provincia = Convert::ToString(dataGridView1->SelectedRows[0]->Cells[6]->Value);
	String^ cp = Convert::ToString(dataGridView1->SelectedRows[0]->Cells[7]->Value);
	String^ ambientes = Convert::ToString(dataGridView1->SelectedRows[0]->Cells[8]->Value);
	String^ cocheras = Convert::ToString(dataGridView1->SelectedRows[0]->Cells[9]->Value);
	String^ dormitorios = Convert::ToString(dataGridView1->SelectedRows[0]->Cells[10]->Value);
	String^ baños = Convert::ToString(dataGridView1->SelectedRows[0]->Cells[11]->Value);
	String^ spcubierta = Convert::ToString(dataGridView1->SelectedRows[0]->Cells[12]->Value);
	String^ sptotal = Convert::ToString(dataGridView1->SelectedRows[0]->Cells[13]->Value);
	String^ adicional = Convert::ToString(dataGridView1->SelectedRows[0]->Cells[14]->Value);
	
	inmobiliariaVer1::ModificarInm^ editar = gcnew inmobiliariaVer1::ModificarInm();

	
	editar->textBox1->Text = calle;
	editar->textBox2->Text = numero;
	editar->textBox3->Text = provincia;
	editar->textBox4->Text = cp;
	editar->textBox5->Text = ambientes;
	editar->textBox6->Text = cocheras;
	editar->textBox7->Text = dormitorios;
	editar->textBox8->Text = baños;
	editar->textBox9->Text = spcubierta;
	editar->textBox10->Text = sptotal;
	editar->textBox11->Text = adicional;

	//editar->comboBox1->SelectedItem->ToString();
	editar->ShowDialog();
	BaseDatosInmobiliaria^ data = gcnew BaseDatosInmobiliaria();
	data->abrirConexion();
	data->modificarIn(editar->comboBox1->SelectedItem->ToString(),editar->comboBox2->SelectedItem->ToString(),editar->comboBox3->SelectedItem->ToString(), editar->textBox1->Text, editar->textBox2->Text, editar->textBox3->Text, editar->textBox4->Text, editar->textBox5->Text, editar->textBox6->Text, editar->textBox7->Text, editar->textBox8->Text, editar->textBox9->Text, editar->textBox10->Text, editar->textBox11->Text, nombre);
	data->cerrarConexion();
	this->leer();
}
};
}
