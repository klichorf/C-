/*
Elaborar un algoritmo similar al anterior, sólo que el dato que se lee estará dado
en grados. Debe convertirse los grados leídos a radianes antes de hacer los
cálculos.

*/


#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
    
    double grados,tangente, cotangente, secante ,cosecante,conversion_grados_radianes;
    cout << "calcule la tangente, cotangente, secante y cosecante" << endl;
    cout << "ingrese un angulo en grados: ";cin >> grados;

    //1° × π/180 = 0.01745rad grados a radianes

    conversion_grados_radianes = 0.01745*grados;





    tangente =  tan(conversion_grados_radianes);//////tangente
    cotangente = atan(conversion_grados_radianes);//////cotagente
    secante = asin(conversion_grados_radianes);//////secante
    cosecante = acos(conversion_grados_radianes);//////cosecante


    cout << "la tangente del valor ingresado es : " << tangente << endl;
    cout << "la contagente del valor ingresado es : " << cotangente << endl;
    cout << "la secante del valor ingresado es : " << secante << endl;
    cout << "la cosecante del valor ingresado es : " << cosecante << endl;

    system("pause");

    return 0;
}
