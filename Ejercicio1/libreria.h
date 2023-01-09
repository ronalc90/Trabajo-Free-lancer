//libreria.h

#ifndef LIBRERIA_H_INCLUDED
#define LIBRERIA_H_INCLUDED

//Declaracion de la clase
class cConversion {
    //Atributos privados
private:
    float c;
    float k;
    float f;
    //Metodos publicos
public:
    //Constructor
    cConversion();
    //Metodos
    void leer();
    void convertir();
    void mostrar();
};

#endif // LIBRERIA_H_INCLUDED