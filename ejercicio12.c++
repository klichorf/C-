/*

Elaborar un algoritmo que permita leer valores para X, Y, Z y W e imprima el
valor de F.
    (4x^2y^2*2zw)^2
F = ───────────
        4x^½
        ─────
        b^¾

*/

#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
    float x, y, z, w, f, b, denominador1, resultado_denominador1, denominador2, denominador3;

    cout << "Calcule el valor de f" << endl;

    cout << "ingrese el valor de X: ";
    cin >> x;
    cout << "ingrese el valor de Y: ";
    cin >> y;
    cout << "ingrese el valor de Z: ";
    cin >> z;
    cout << "ingrese el valor de W: ";
    cin >> w;
    cout << "ingrese el valor de b: ";
    cin >> b;

    denominador1 = (4 * (pow(x, 2)) * 2 * (pow(y, 2)) * 2 * z * w);
    resultado_denominador1 = pow(denominador1, 2);

    denominador2 = 4 * pow(x, 1 / 2);

    denominador3 = pow(b, 0.75);

    f = (resultado_denominador1 * denominador3) / denominador2;

    cout << "el valor de f es : " << resultado_denominador1 << endl;
    cout << "el valor de dn2 es : " << denominador2 << endl;
    cout << "el denominador3 es: " << denominador3 << endl;
    cout << "el valor de F es : " << f << endl;

    system("pause");

    return 0;
}
