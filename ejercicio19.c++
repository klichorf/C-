/*
Elaborar un algoritmo que permita leer el tamaño de un ángulo en grados e
imprima el seno y coseno. Debe convertirse los grados leídos a radianes antes
de hacer los cálculos.
*/

#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{

    double grados, seno, coseno, conversion_grados_radianes;
    cout << "calcule la tangente, cotangente, secante y cosecante" << endl;
    cout << "ingrese un angulo en grados: ";
    cin >> grados;

    // 1° × π/180 = 0.01745rad grados a radianes

    conversion_grados_radianes = 0.01745 * grados;

    seno = sin(conversion_grados_radianes);   //////tangente
    coseno = cos(conversion_grados_radianes); //////cotagente

    cout << "el seno del valor ingresado es : " << seno << endl;
    cout << "el coseno del valor ingresado es : " << coseno << endl;

    system("pause");

    return 0;
}