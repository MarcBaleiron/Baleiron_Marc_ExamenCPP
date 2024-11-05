#include <iostream>
#include "T_X_D.h"
using namespace std;

//Main donde se pide al usuario que introduzca el valor ded los tres articulos para calcular la promocion

int main ()
{
    double n1;
    double n2;
    double n3;

    T_X_D txd;

    cout << "Introduzca el valor del primer articulo: " << "\n";
    cin >> n1;
    cout << "Introduzca el valor del segundo articulo: " << "\n";
    cin >> n2;
    cout << "Introduzca el valor del tercer articulo: " << "\n";
    cin >> n3;

    txd.operacion (n1, n2, n3);
}