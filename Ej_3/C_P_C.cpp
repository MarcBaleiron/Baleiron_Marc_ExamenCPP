#include "C_P_C.h"
#include <iostream>
#include <ostream>
using namespace std;

//Constructor de la clase para poder asignarla un codigo

C_P_C::C_P_C ()
{
    float n[8];
};

//Llamada de la funcion para calcular la nota media del alumno

void C_P_C::operacion (float n1, float n2, float n3, float n4, float n5, float n6, float n7, float n8)
{
    double media;
    media = (n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8) / 8;
    cout << "La media del alumno es: " << media << endl;
}