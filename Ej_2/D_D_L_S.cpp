#include "D_D_L_S.h"
#include <iostream>
#include <ostream>
using namespace std;

//Constructor de la clase para poder asignarla un codigo

D_D_L_S::D_D_L_S ()
{
    int n;
};

//Llamada de la funcion para ver a que dia de la semana corresponde el numero introducido

void D_D_L_S::operacion (int n)
{
    switch (n)
    {
        case 1:
            cout << "Lunes" << endl;
            break;
        case 2:
            cout << "Martes" << endl;
            break;
        case 3:
            cout << "Miercoles" << endl;
            break;
        case 4:
          cout << "Jueves" << endl;
            break;
        case 5:
            cout << "Viernes" << endl;
            break;
        case 6:
            cout << "Sabado" << endl;
            break;
        case 7:
            cout << "Domingo" << endl;
            break;
    }
}