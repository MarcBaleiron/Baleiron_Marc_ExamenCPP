#include <iostream>
#include "D_D_L_S.h"
using namespace std;

//Main donde se pide al usuario que introduzca un numero para ver a que dia de la semana corresponde

int main ()
{
    int n;
    D_D_L_S ddls;
    cout << "introduzca un numero del 1 al 7: ";
    cin >> n;
    ddls.operacion (n);
}