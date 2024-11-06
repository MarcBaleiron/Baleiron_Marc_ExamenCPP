#include <iostream>
#include "T_X_D.h"
using namespace std;

//Main donde se pide al usuario que introduzca el valor ded los tres articulos para calcular la promocion

int main ()
{
    float n[3];

    T_X_D txd;

    int i;

    for (i = 0; i < 3; i++)
    {
        cout << "Introduzca el valor del articulo " << i + 1 << ": " << "\n";
        cin >> n[i];

        while (n[i] <= 0)
        {
            cout << "Introduzca un valor mayor que cero para el articulo " << i + 1 << ": " << "\n";
            cin >> n[i];
        }
    }

    txd.operacion (n[0], n[1], n[2]);

    cout << "n1: " << n[0] << "\n" << "n2: " << n[1] << "\n" << "n3: " << n[2] << endl;
}