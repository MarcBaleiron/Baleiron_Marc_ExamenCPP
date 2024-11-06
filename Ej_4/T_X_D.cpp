#include "T_X_D.h"
#include <iostream>
#include <ostream>
using namespace std;

//Constructor de la clase para poder asignarla un codigo

T_X_D::T_X_D ()
{
    float n[3];
};

//Llamada de la funcion para calcular la suma de los dos articulos mas caros

void T_X_D::operacion (float n1, float n2, float n3)
{
    double promocion;

    if (n1 <= n2 && n1 <= n3)
    {
        promocion = n2 + n3;
        cout << "El total a pagar es de: " << promocion << endl;
    }
    else if (n2 <= n1 && n2 <= n3)
    {
        promocion = n1 + n3;
        cout << "El total a pagar es de: " << promocion << endl;
    }
    else if (n3 <= n1 && n3 <= n2)
    {
        promocion = n1 + n2;
        cout << "El total a pagar es de: " << promocion << endl;
    }
}