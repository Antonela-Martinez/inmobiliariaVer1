#pragma once
using namespace std;
using namespace System::Data;
using namespace System;
using namespace MySql::Data::MySqlClient;

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
	void insertar(String^, String^,String^,String^,String^);

};


