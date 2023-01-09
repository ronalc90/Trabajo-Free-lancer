#include <iostream>
#include <stdlib.h>
#include "libreria.h"
using namespace std;
//Funcion principal
int main() {
    int opcion;
    cConversion obj;
    //Menu de opciones
    do {
        system("cls");
        printf("\t\t\t*** Menu de Opciones ***\n");
        printf("\t\t1. Leer los datos\n");
        printf("\t\t2. Convertir los datos\n");
        printf("\t\t3. Mostrar los resultados\n");
        printf("\t\t4. Salir\n");
        printf("\t\tIngrese una opcion: ");
        cin>>opcion;
        switch (opcion) {
        case 1:
            obj.leer();
            break;
        case 2:
            obj.convertir();
            break;
        case 3:
            obj.mostrar();
            break;
        case 4:
            break;
        default:
            printf("\n\t\tLa opcion ingresada no es valida, intente de nuevo\n");
            system("pause");
            break;
        }
    } while (opcion != 4);
    return 0;
}