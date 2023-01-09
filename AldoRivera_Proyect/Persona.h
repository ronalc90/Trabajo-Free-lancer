#pragma once

using namespace System;

ref class Persona
{
private:
	String^ nombre;
	String^ apellido;
	String^ cedula;
	int edad;

public:
	Persona();
	Persona(String^ nombre, String^ apellido, String^ cedula, int edad);
	void setNombre(String^ nombre);
	void setApellido(String^ apellido);
	void setCedula(String^ cedula);
	void setEdad(int edad);
	String^ getNombre();
	String^ getApellido();
	String^ getCedula();
	int getEdad();
};
