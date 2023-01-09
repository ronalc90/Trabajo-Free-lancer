#include <iostream> 
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
#ifndef LIBRERIA_H
#define LIBRERIA_H

class COracion
{
private:
	char frase[128];
	int vocales, consonantes, digitos, especiales;

public:
	void LeerFrase();
	void ContarCaracteres();
	void ImprimirResultado();

};
#endif