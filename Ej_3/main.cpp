#include <iostream>
#include "C_P_C.h"
using namespace std;

//Main donde se pide al usuario que introduzca las notas de los examenes para calcular la media

int main ()
{
    float n[8];

    C_P_C cpc;

    for (int i = 0; i < 8; i++)
    {
        cout << "Introduzca la nota del examen numero: " << i + 1 << "\n";
        cin >> n[i];

        while (n[i] < 0 || n[i] > 10)
        {
            cout << "Introduzca una nota valida entre 0 y 10 para la nota del examen numero: " << i + 1 << "\n";
            cin >> n[i];
        }
    }

    cpc.operacion (n[0], n[1], n[2], n[3], n[4], n[5], n[6], n[7]);
}