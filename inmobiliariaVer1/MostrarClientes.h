#pragma once
#include "BaseDatosInmobiliaria.h"//agregando libreria 27/11
#include "ModificarCl.h"
#include "NuevoClienteForm.h"

namespace inmobiliariaVer1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MostrarClientes
	/// </summary>
	public ref class MostrarClientes : public System::Windows::Forms::Form
	{
	public:
		MostrarClientes(void)
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
		~MostrarClientes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: BaseDatosInmobiliaria^ data;//agregado 3/12
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(37, 49);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(572, 226);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MostrarClientes::dataGridView1_CellClick);
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MostrarClientes::dataGridView1_CellContentClick);
			this->dataGridView1->DoubleClick += gcnew System::EventHandler(this, &MostrarClientes::dataGridView1_DoubleClick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(61, 313);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(113, 40);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Registrar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MostrarClientes::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(207, 313);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(119, 40);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Eliminar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MostrarClientes::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(354, 325);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(112, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Seleccionando a:";
			// 
			// MostrarClientes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(648, 392);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MostrarClientes";
			this->Text = L"MostrarClientes";
			this->Load += gcnew System::EventHandler(this, &MostrarClientes::MostrarClientes_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}

	public: void leer() {
		//agregado 27/11
		this->data->abrirConexion();
		this->dataGridView1->DataSource = this->data->getDataCLientes();
		//llenando datos a la tabla
		this->data->cerrarConexion();
	}

	private: System::Void MostrarClientes_Load(System::Object^ sender, System::EventArgs^ e) {
	
		this->leer();
	}

	//para registrar clientes
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
		inmobiliariaVer1::NuevoClienteForm^ nuevoC = gcnew inmobiliariaVer1::NuevoClienteForm();
		
		this->Visible = false;
		nuevoC->ShowDialog();
		this->Visible = true;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ nombre = Convert::ToString(dataGridView1->SelectedRows[0]->Cells[0]->Value);
		
		BaseDatosInmobiliaria^ data = gcnew BaseDatosInmobiliaria();
		data->abrirConexion();
		data->eliminarCl(nombre);
		data->cerrarConexion();
		this->leer();
	}

	private: System::Void dataGridView1_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		String^ nombre = Convert::ToString(dataGridView1->SelectedRows[0]->Cells[0]->Value);
		String^ apellido = Convert::ToString(dataGridView1->SelectedRows[0]->Cells[1]->Value);
		String^ dni = Convert::ToString(dataGridView1->SelectedRows[0]->Cells[2]->Value);
		String^ rol = Convert::ToString(dataGridView1->SelectedRows[0]->Cells[3]->Value);
		String^ email = Convert::ToString(dataGridView1->SelectedRows[0]->Cells[4]->Value);
		String^ telefono = Convert::ToString(dataGridView1->SelectedRows[0]->Cells[5]->Value);

		inmobiliariaVer1::ModificarCl^ editar = gcnew inmobiliariaVer1::ModificarCl();
		editar->txtNombre->Text = nombre;
		editar->txtApellido->Text = apellido;
		editar->txtDni->Text = dni;
		editar->txtRol->Text = rol;
		editar->txtEmail->Text = email;
		editar->txtTelefono->Text = telefono;

		editar->ShowDialog();
		BaseDatosInmobiliaria^ data = gcnew BaseDatosInmobiliaria();
		data->abrirConexion();
		data->modificarCl(editar->txtNombre->Text, editar->txtApellido->Text, editar->txtDni->Text, editar->txtRol->Text, editar->txtEmail->Text, editar->txtTelefono->Text, nombre);
		data->cerrarConexion();
		this->leer();
	}
	private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

		String^ nombre = Convert::ToString(dataGridView1->SelectedRows[0]->Cells[0]->Value);
		label1->Text = "Seleccionado: " + nombre;
	}
};
}

