#include "pch.h"
#include "Persona.h"

Persona::Persona() {
	nombre = "";
	apellido = "";
	cedula = "";
	edad = 0;
}

Persona::Persona(String^ nombre, String^ apellido, String^ cedula, int edad) {
	this->nombre = nombre;
	this->apellido = apellido;
	this->cedula = cedula;
	this->edad = edad;
}

void Persona::setNombre(String^ nombre) {
	this->nombre = nombre;
}

void Persona::setApellido(String^ apellido) {
	this->apellido = apellido;
}

void Persona::setCedula(String^ cedula) {
	this->cedula = cedula;
}

void Persona::setEdad(int edad) {
	this->edad = edad;
}

String^ Persona::getNombre() {
	return nombre;
}

String^ Persona::getApellido() {
	return apellido;
}

String^ Persona::getCedula() {
	return cedula;
}

int Persona::getEdad() {
	return edad;
}