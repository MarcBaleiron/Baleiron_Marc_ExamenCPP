#include "C_P_C.h"
#include <iostream>
#include <ostream>
using namespace std;

//Constructor de la clase para poder asignarla un codigo

C_P_C::C_P_C ()
{
    double n1;
    double n2;
    double n3;
    double n4;
    double n5;
    double n6;
    double n7;
    double n8;
};

//Llamada de la funcion para calcular la nota media del alumno

void C_P_C::operacion (double n1, double n2, double n3, double n4, double n5, double n6, double n7, double n8)
{
    double media;
    media = (n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8) / 8;
    cout << "La media del alumno es: " << media << endl;
}