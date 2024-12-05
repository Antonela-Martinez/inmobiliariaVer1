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
	DataTable^ getData();//muestra empleados
	DataTable^ getDataCLientes();//muestra clientes
	DataTable^ getDataInmueble();//muestra inmuebles
	MySqlConnection^ getConnection();
	void abrirConexion();
	void cerrarConexion();
	void insertar(String^, String^,String^,String^,String^);
	void insertarCl(String^, String^, String^, String^, String^, String^);
	void insertarIn(String^, String^, String^, String^, String^, String^, String^, String^, String^, String^, String^, String^, String^, String^);
	void modificar(String^, String^, String^, String^, String^, String^);
	void modificarCl(String^, String^, String^, String^, String^, String^, String^);
	void modificarIn(String^, String^, String^, String^, String^, String^, String^, String^, String^, String^, String^, String^, String^, String^, String^);
	void eliminar(String^);
	void eliminarCl(String^);
	void eliminarIn(String^);
};


