#include "libreria.h"
void COracion::LeerFrase()
{
	cout << "Ingrese la frase/cadena: ";
	cin.getline(frase, 128);
}

void COracion::ContarCaracteres()
{
	vocales = 0;
	consonantes = 0;
	digitos = 0;
	especiales = 0;

	for (int i = 0; i < strlen(frase); i++)
	{
		if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u')
		{
			vocales++;
		}
		else if (frase[i] >= '0' && frase[i] <= '9')
		{
			digitos++;
		}
		else if ((frase[i] >= 'a' && frase[i] <= 'z') || (frase[i] >= 'A' && frase[i] <= 'Z'))
		{
			consonantes++;
		}
		else
		{
			especiales++;
		}
	}
}

void COracion::ImprimirResultado()
{
	cout << "\nCantidad de vocales: " << vocales << endl;
	cout << "Cantidad de consonantes: " << consonantes << endl;
	cout << "Cantidad de digitos: " << digitos << endl;
	cout << "Cantidad de caracteres especiales: " << especiales << endl;
}
