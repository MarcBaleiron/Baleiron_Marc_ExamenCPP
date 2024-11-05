#include <iostream>
#include "C_P_C.h"
using namespace std;

//Main donde se pide al usuario que introduzca las notas de los examenes para calcular la media

int main ()
{
    double n1;
    double n2;
    double n3;
    double n4;
    double n5;
    double n6;
    double n7;
    double n8;

    C_P_C cpc;

    cout << "Introduzca la nota del primer examen: " << "\n";
    cin >> n1;
    cout << "Introduzca la nota del segundo examen: " << "\n";
    cin >> n2;
    cout << "Introduzca la nota del tercer examen: " << "\n";
    cin >> n3;
    cout << "Introduzca la nota del cuarto examen: " << "\n";
    cin >> n4;
    cout << "Introduzca la nota del quinto examen: " << "\n";
    cin >> n5;
    cout << "Introduzca la nota del sexto examen: " << "\n";
    cin >> n6;
    cout << "Introduzca la nota del septimo examen: " << "\n";
    cin >> n7;
    cout << "Introduzca la nota del octavo examen: " << "\n";
    cin >> n8;

    cpc.operacion (n1, n2, n3, n4, n5, n6, n7, n8);
}