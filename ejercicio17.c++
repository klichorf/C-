/*
Elaborar un algoritmo que permita leer el tamaño de un ángulo en radianes e
imprima la tangente, cotangente, secante y cosecante.


*/



#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
    
    double radianes,tangente, cotangente, secante ,cosecante;
    cout << "calcule la tangente, cotangente, secante y cosecante" << endl;
    cout << "ingrese un ángulo en radianes: ";cin >> radianes;

    //1 rad × 180/π = 57.296°




    tangente =  tan(radianes);//////tangente
    cotangente = atan(radianes);//////cotagente
    secante = asin(radianes);//////secante
    cosecante = acos(radianes);//////cosecante


    cout << "la tangente del valor ingresado es : " << tangente << endl;
    cout << "la contagente del valor ingresado es : " << cotangente << endl;
    cout << "la secante del valor ingresado es : " << secante << endl;
    cout << "la cosecante del valor ingresado es : " << cosecante << endl;

    system("pause");

    return 0;
}
