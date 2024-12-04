
#include "BaseDatosInmobiliaria.h"

BaseDatosInmobiliaria::BaseDatosInmobiliaria() {
	//metodo constructor para iniciar la base de datos
	this->connectionString = "datasource=localhost; username=root; password=barza20vmg10/; database=inmobiliaria;  ";
	this->conn = gcnew MySqlConnection(this->connectionString);
}

MySqlConnection^ BaseDatosInmobiliaria::getConnection() {
	return this->conn;  // Retorna la conexiÃ³n MySQL
}

void BaseDatosInmobiliaria::abrirConexion() {
	//this->conn->Open();
	getConnection()->Open();
}

void BaseDatosInmobiliaria::cerrarConexion() {
	//this->conn->Close();
	getConnection()->Close();
}

DataTable^ BaseDatosInmobiliaria::getData() {

	String^ sql = "select * from empleados";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, getConnection());
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);//llenando datos a tabla
	return tabla;
}

DataTable^ BaseDatosInmobiliaria::getDataCLientes() {
	String^ sql = "select * from clientes";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, getConnection());
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);//llenando datos a tabla
	return tabla;
}

void BaseDatosInmobiliaria::insertar(String^ n,String^ e,String^ t,String^ d,String^ c){
	
	String^ sql = "insert into empleados(nombre, email, telefono, direccion, contraseña) values ('" + n + "','" + e + "', " + t + ", '" + d + "', '" + c + "')";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, getConnection());

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

void BaseDatosInmobiliaria::insertarCl(String^ n, String^ a, String^ dn, String^ r, String^ e, String^ t) {

	String^ sql = "insert into clientes(nombre, apellido, dni, rol, email, telefono) values ('" + n + "','" + a + "', " + dn + ", '" + r + "', '" + e + "', " + t + ")";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, getConnection());

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

void BaseDatosInmobiliaria::modificar(String^ n, String^ e, String^ t, String^ d, String^ c, String^ nomre){ 

	String^ sql = "update empleados set nombre = '"+ n +"', email = '"+ e +"', telefono = '"+ t + "',  direccion = '"+ d +"', contraseña = '"+ c + "' where nombre = '"+ nomre +"'";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, getConnection());
	
	try
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
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

void BaseDatosInmobiliaria::modificarCl(String^ n, String^ a, String^ dn, String^ r, String^ e, String^ t, String^ nomre) {

	String^ sql = "update clientes set nombre = '" + n + "', apellido = '" + a + "', dni = '" + dn + "',  rol = '" + r + "', email = '" + e + "', telefono = '" + t + "' where nombre = '" + nomre + "'";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, getConnection());

	try
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
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


void BaseDatosInmobiliaria::eliminar(String^ nombre) {
	String^ sql = "delete from empleados where nombre = '" + nombre + "'";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, getConnection());

	try
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		cursor->ExecuteNonQuery();
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Eliminado correctamente !");

	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);

	}
}

void BaseDatosInmobiliaria::eliminarCl(String^ nombre) {
	String^ sql = "delete from clientes where nombre = '" + nombre + "'";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, getConnection());

	try
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		cursor->ExecuteNonQuery();
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Eliminado correctamente !");

	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);

	}
}