/*

Elaborar un algoritmo que lea el valor de W e imprima el valor de Z.
        1
Z =   ─────── *e^W^2/2 =   
    (2 π)^1/2


*/

#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main()
{
    double w, z,potencia1, potencia2, raiz_cuadrada_pi,numero_euler,pi,raiz_cuadrada_euler;
    cout << "Calcule el valor de z" << endl;
    cout << "ingrese el valor de w: ";cin >> w;
    pi = acos(-1.0); // esta formula sirve para sacar el numero pi
    potencia1 = pow(w,2);
    numero_euler= exp(potencia1);
    raiz_cuadrada_euler = sqrt(numero_euler);
    raiz_cuadrada_pi = sqrt(2*pi);
    z = raiz_cuadrada_euler/raiz_cuadrada_pi;
    cout << "el valor de z es : " << z << endl;
    /*cout << "el valor de pi es : " << pi  << endl;
    cout << "el valor de w a la 2 es : " << potencia1  << endl;
    cout << "el valor de numero_euler : " << numero_euler  << endl;
    cout << "el valor de numero_euler : " << raiz_cuadrada_euler  << endl;*/

    system("pause");

    return 0;
}
