#include <iostream>
#include "ClaseTriangulo.h"
using namespace std;

int main() {
	int opcion;
	float valor1, valor2, valor3;

	//Pedir al usuario que elija una opcion
	while (true) {

	
	cout << "Menu: " << endl;
	cout << "1. Crear triangulo con base y altura" << endl;
	cout << "2. Crear triangulo con los tres lados" << endl;
	cout << "Ingrese una opcion: ";
	cin >> opcion;

	if (opcion == 1) {
		//Ingresar los valores de la base y la altura
		cout << "Ingrese la base: ";
		cin >> valor1;
		cout << "Ingrese la altura: ";
		cin >> valor2;

		//Crear un objeto de la clase cTriangulo
		cTriangulo triangulo(valor1, valor2);

		//Imprimir el tipo de triángulo
		triangulo.tipoTriangulo();

		//Imprimir los resultados
		triangulo.imprimirResultados();
	}
	else if (opcion == 2) {
		//Ingresar los valores de los tres lados
		cout << "Ingrese el lado 1: ";
		cin >> valor1;
		cout << "Ingrese el lado 2: ";
		cin >> valor2;
		cout << "Ingrese el lado 3: ";
		cin >> valor3;
		cTriangulo triangulo(valor1, valor2, valor3, 0.0, 0.0);
		//Validar si los valores ingresados forman un triángulo
		bool valido;
		valido= triangulo.validarTriangulo(valor1, valor2, valor3);

		if (valido) {
			//Crear un objeto de la clase cTriangulo
			cTriangulo triangulo(valor1, valor2, valor3, 0.0, 0.0);

			//Imprimir el tipo de triángulo
			triangulo.tipoTriangulo();

			//Imprimir los resultados
			triangulo.imprimirResultados();
		}
		else {
			//Mostrar un mensaje de error
			cout << "Los valores ingresados no forman un triangulo valido!" << endl;
		}
	}
	else {
		//Mostrar un mensaje de error
		cout << "Opcion incorrecta!" << endl;
	}
	}
	return 0;
}
