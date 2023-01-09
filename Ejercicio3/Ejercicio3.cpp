//main.cpp
#include "libreria.h"
#include <iostream>

using namespace std;

int main()
{
    Serie s(0);
    float x, a, b, resultado;
    cout << "Ingrese un valor para x: ";
    cin >> x;
    cout << "Ingrese el valor para a: ";
    cin >> a;
    cout << "Ingrese el valor para b: ";
    cin >> b;

    x = s.radian(x);

    Trapecio t(a, b);
    resultado = t.integral(x);

    cout << "El resultado es: " << resultado << endl;
    cout << "El seno de x es: " << s.Seno(x) << endl;

    return 0;
}