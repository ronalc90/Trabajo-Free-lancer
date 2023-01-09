#ifndef CLASETRIANGULO_H
#define CLASETRIANGULO_H

const float PI = 3.1416;

class cTriangulo {

private:
	float base;
	float altura;
	float lado1;
	float lado2;
	float lado3;

public:
	cTriangulo();
	cTriangulo(float, float);
	cTriangulo(float, float, float, float, float);
	bool validarTriangulo(float, float, float);
	void tipoTriangulo();
	float calcularArea();
	float calcularPerimetro();
	void imprimirResultados();
};

#endif