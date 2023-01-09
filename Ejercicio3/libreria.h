#include <iostream>
#ifndef LIBRERIA_H
#define LIBRERIA_H
class Serie
{
private:
    int valor;
public:
    Serie(int);
    float Seno(float);
    float factorial(int);
    float radian(float);
};

class Trapecio
{
private:
    float a, b;
public:
    Trapecio(float, float);
    float integral(float);
};

#endif // LIBRERIA_H