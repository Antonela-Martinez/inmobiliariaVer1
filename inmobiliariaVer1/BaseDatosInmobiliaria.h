#pragma once
using namespace std;
using namespace System::Data;
using namespace System;
using namespace MySql::Data::MySqlCliente;

ref class BaseDatosInmobiliaria
{
private:
	String^ connectionString;
	MySqlConnection^ conn;

public:
	BaseDatosInmobiliaria();
	DataTable^ getData();
	void abrirConexion();
	void cerrarConexion();
};
