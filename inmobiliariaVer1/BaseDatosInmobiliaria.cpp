
#include "BaseDatosInmobiliaria.h"

BaseDatosInmobiliaria::BaseDatosInmobiliaria() {
	//metodo constructor para iniciar la base de datos
	this->connectionString = "datasource=localhost; username=root; password=barza20vmg10/; database=inmobiliaria;  ";
	this->conn = gcnew MySqlConnection(this->connectionString);
}


void BaseDatosInmobiliaria::abrirConexion() {
	this->conn->Open();
}

void BaseDatosInmobiliaria::cerrarConexion() {
	this->conn->Close();
}

DataTable^ BaseDatosInmobiliaria::getData() {

	String^ sql = "select * from empleados";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);//llenando datos a tabla
	return tabla;
}

void BaseDatosInmobiliaria::insertar(String^ n,String^ e,String^ t,String^ d,String^ c){
	
	String^ sql = "insert into empleados(id_nombre, email, telefono, direccion, contraseña) values ('" + n + "','" + e + "', " + t + ", '" + d + "', '" + c + "')";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);

	try
	{
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		MessageBox::Show(e->Message);
	}
}


