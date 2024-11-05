#include "P_N_C.h"
#include <iostream>
#include <ostream>
using namespace std;

//Constructor de la clase para poder asignarla un codigo

P_N_C::P_N_C ()
{
    int n;
}

//Llamada de la funcion para ver si el numero es positivo, negativo o cero

void P_N_C::operacion (int n)
{
    if (n > 0)
    {
        cout << "El numero es positivo" << endl;
    }
    else if (n < 0)
    {
        cout << "El numero es negativo" << endl;
    }
    else
    {
        cout << "El numero es cero" << endl;
    }
}