#include <iostream>
#include "P_N_C.h"
using namespace std;

//Main donde se pide al usuario que introduzca un numero y luego se llama a la funcion operacion para ver si es positivo, negativo o cero

int main ()
{
    int n;

    P_N_C pnc;

    cout << "introduzca un numero: ";
    cin >> n;

    pnc.operacion (n);
}