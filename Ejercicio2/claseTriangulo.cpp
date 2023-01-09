#include "ClaseTriangulo.h"
#include <iostream>
#include <math.h>
using namespace std;

cTriangulo::cTriangulo() {
	base = 0.0;
	altura = 0.0;
	lado1 = 0.0;
	lado2 = 0.0;
	lado3 = 0.0;
}

cTriangulo::cTriangulo(float base, float altura) {
	this->base = base;
	this->altura = altura;
	lado1 = 0.0;
	lado2 = 0.0;
	lado3 = 0.0;
}

cTriangulo::cTriangulo(float lado1, float lado2, float lado3, float base, float altura) {
	this->lado1 = lado1;
	this->lado2 = lado2;
	this->lado3 = lado3;
	//Se calculara el area y con esto se dira la base del triangulo y su altura
	//la base sera el primer lado
	this->base = base;
	this->altura = altura;

}

bool cTriangulo::validarTriangulo(float lado1, float lado2, float lado3) {
	//Validar que los lados del triángulo cumplan con la regla de que la suma de dos lados
	//debe ser mayor al tercer lado
	if (lado1 + lado2 > lado3) {
		return true;
	}
	else {
		return false;
	}
}

void cTriangulo::tipoTriangulo() {
	//Verificar que tipo de triángulo es
	if (lado1 == lado2 && lado2 == lado3) {
		cout << "Triangulo equilatero" << endl;
	}
	else if (lado1 == lado2 || lado2 == lado3) {
		cout << "Triangulo isósceles" << endl;
	}
	else {
		cout << "Triangulo escaleno" << endl;
	}
}

float cTriangulo::calcularArea() {
	//se valida si se tiene la base como 0 y si es asi se calcula el area mediante los 3 lados
	if (base == 0) {
		float s = (lado1 + lado2 + lado3) / 2;
		return sqrt(s * (s - lado1) * (s - lado2) * (s - lado3));
	}
	//caso contrario, se calcula el area con la base y altura
	else {
		return (base * altura) / 2;
	}
}
float cTriangulo::calcularPerimetro() {
	//se valida si se tiene los lados como 0 y si es asi se calcula el perimetro mediante la base
	if (lado1 == 0) {
		return 2 * base + 2 * altura;
	}
	//caso contrario, se calcula el perimetro con los 3 lados
	else {
		return lado1 + lado2 + lado3;
	}
}

void cTriangulo::imprimirResultados() {
	//Imprimir el área y perímetro del triángulo
	cout << "Area del triangulo: " << calcularArea() << endl;
	cout << "Perimetro del triangulo: " << calcularPerimetro() << endl;
}
