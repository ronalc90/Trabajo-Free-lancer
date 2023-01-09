#include "libreria.h"
#include <math.h>

Serie::Serie(int v) {
    valor = v;
}

float Serie::Seno(float valor) {
    float resultado;
    int i, posicion, precision;

    resultado = valor;
    precision = 45;

    for (i = 1; i <= precision; i++) {
        posicion = i * 2 + 1;
        if (i % 2 == 0)
            resultado += pow(valor, posicion) / factorial(posicion);
        else
            resultado -= pow(valor, posicion) / factorial(posicion);
    }
    return resultado;
}

float Serie::factorial(int valor) {
    int factor, i;
    factor = 1;
    for (i = 1; i <= valor; i++) { factor = factor * i; }
    return (factor);
}

float Serie::radian(float grados) {
    float rad;
    rad = grados * (3.1415 / 180);
    return rad;
}

Trapecio::Trapecio(float a, float b) {
    this->a = a;
    this->b = b;
}

float Trapecio::integral(float x) {
    float fx;
    fx = (pow(x, 3) - pow(x, 2) + sqrt(x + 3));
    return fx;
}