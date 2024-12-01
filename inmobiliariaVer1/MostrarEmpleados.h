#pragma once
#include "BaseDatosInmobiliaria.h"//agregando libreria 27/11
#include "ModificarEm.h"

namespace inmobiliariaVer1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MostrarEmpleados
	/// </summary>
	public ref class MostrarEmpleados : public System::Windows::Forms::Form
	{
	public:
		MostrarEmpleados(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->data = gcnew BaseDatosInmobiliaria();//agregado 27/11
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MostrarEmpleados()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: BaseDatosInmobiliaria^ data;//agregado 27/11
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(29, 70);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(715, 247);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MostrarEmpleados::dataGridView1_CellClick);
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MostrarEmpleados::dataGridView1_CellContentClick);
			this->dataGridView1->DoubleClick += gcnew System::EventHandler(this, &MostrarEmpleados::dataGridView1_DoubleClick);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(191, 346);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 44);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Eliminar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MostrarEmpleados::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(364, 353);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(169, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Seleccionando a: ";
			this->label1->Click += gcnew System::EventHandler(this, &MostrarEmpleados::label1_Click);
			// 
			// MostrarEmpleados
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(770, 416);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MostrarEmpleados";
			this->Text = L"MostrarEmpleados";
			this->Load += gcnew System::EventHandler(this, &MostrarEmpleados::MostrarEmpleados_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MostrarEmpleados_Load(System::Object^ sender, System::EventArgs^ e) {
		this->leer();//agregado 27/11
	}

	public: void leer() {
		//agregado 27/11
		this->data->abrirConexion();
		this->dataGridView1->DataSource = this->data->getData();
		//llenando datos a la tabla
		this->data->cerrarConexion();
	}

	private: System::Void dataGridView1_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		//accediendo a primera fila y celda
		String^ nombre = Convert::ToString(dataGridView1->SelectedRows[0]->Cells[0]->Value);
		String^ email = Convert::ToString(dataGridView1->SelectedRows[0]->Cells[1]->Value);
		String^ telefono = Convert::ToString(dataGridView1->SelectedRows[0]->Cells[2]->Value);
		String^ direccion = Convert::ToString(dataGridView1->SelectedRows[0]->Cells[3]->Value);
		String^ contraseña = Convert::ToString(dataGridView1->SelectedRows[0]->Cells[4]->Value);

		inmobiliariaVer1::ModificarEm^ editar = gcnew inmobiliariaVer1::ModificarEm();
		editar->txtNombre->Text = nombre;
		editar->txtEmail->Text = email;
		editar->txtTelefono->Text = telefono;
		editar->txtDireccion->Text = direccion;
		editar->txtContraseña->Text = contraseña;

		editar->ShowDialog();
		//MessageBox::Show(nombre);
		BaseDatosInmobiliaria^ data = gcnew BaseDatosInmobiliaria();
		data->abrirConexion();
		data->modificar(editar->txtNombre->Text, editar->txtEmail->Text, editar->txtTelefono->Text, editar->txtDireccion->Text, editar->txtContraseña->Text, nombre);
		data->cerrarConexion();
		this->leer();
	}

	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {  
		
		String^ nombre = Convert::ToString(dataGridView1->SelectedRows[0]->Cells[0]->Value);
		
		BaseDatosInmobiliaria^ data = gcnew BaseDatosInmobiliaria();
		data->abrirConexion();
		data->eliminar(nombre);
		data->cerrarConexion();
		this->leer();
	}
	private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	
		String^ nombre = Convert::ToString(dataGridView1->SelectedRows[0]->Cells[0]->Value);
		label1->Text = "Seleccionado: " + nombre;
	}
};
}
