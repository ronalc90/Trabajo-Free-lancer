
#include <iostream>
#include <stdlib.h>
#include "libreria.h"
#define PI 3.1416
using namespace std;
//Definicion del constructor
cConversion::cConversion() {
    c = 0;
    k = 0;
    f = 0;
}

//Metodo para leer los datos
void cConversion::leer() {
    int opcion;
    float data;
    //Menu para leer los datos
    do {
        system("cls");
        printf("\t\t\t*** Menu de Opciones ***\n");
        printf("\t\t1. Leer los datos en Celsius\n");
        printf("\t\t2. Leer los datos en Kelvin\n");
        printf("\t\t3. Leer los datos en Fahrenheit\n");
        printf("\t\t4. Salir\n");
        printf("\t\tIngrese una opcion: ");
        cin >> opcion;
        switch (opcion) {
        case 1:
            printf("\n\t\tIngrese una temperatura en Celsius: ");
            cin >> data;
            c = data;
            break;
        case 2:
            printf("\n\t\tIngrese una temperatura en Kelvin: ");
            cin >> data;
            k = data;
            break;
        case 3:
            printf("\n\t\tIngrese una temperatura en Fahrenheit: ");
            cin >> data;
            f = data;
            break;
        case 4:
            break;
        default:
            printf("\n\t\tLa opcion ingresada no es valida, intente de nuevo\n");
            system("pause");
            break;
        }
    } while (opcion != 4);
    system("cls");
}

//Metodo para convertir las temperaturas
void cConversion::convertir() {
    //Calculando los valores en Celsius
    if (c != 0) {
        k = c + 273.15;
        f = (c * 1.8) + 32;
    }
    //Calculando los valores en Kelvin
    else if (k != 0) {
        c = k - 273.15;
        f = ((k - 273.15) * 1.8) + 32;
    }
    //Calculando los valores en Fahrenheit
    else if (f != 0) {
        c = (f - 32) / 1.8;
        k = ((f - 32) / 1.8) + 273.15;
    }
}

//Metodo para mostrar los resultados
void cConversion::mostrar() {
    printf("\n\t\tLos resultados de la conversion son:\n");
    printf("\n\t\tCelsius: %.2f", c);
    printf("\n\t\tKelvin: %.2f", k);
    printf("\n\t\tFahrenheit: %.2f\n", f);
    system("pause");
}