#include "pch.h"
#include "BaseDatosInmobiliaria.h"

BaseDatosInmobiliaria::BaseDatosInmobiliaria() {
	//metodo constructor para iniciar la base de datos
	this->connectionString = "datasource=localhost; username=root; password=""; database=inmobiliaria; ";
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

