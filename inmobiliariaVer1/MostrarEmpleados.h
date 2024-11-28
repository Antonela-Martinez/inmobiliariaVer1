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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(29, 70);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(715, 247);
			this->dataGridView1->TabIndex = 0;
			// 
			// MostrarEmpleados
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(770, 329);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MostrarEmpleados";
			this->Text = L"MostrarEmpleados";
			this->Load += gcnew System::EventHandler(this, &MostrarEmpleados::MostrarEmpleados_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

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

	};
}
