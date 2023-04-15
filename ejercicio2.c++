/*Elaborar un algoritmo que calcule e imprima el costo de un terreno cuadrado o
rectangular, teniendo como datos la anchura y la longitud en metros y el costo
del metro cuadrado. */

#include <iostream>
#include <stdlib.h>
using namespace std;
int main ()
{

    float costo_terreno_cuadrado,anchura_metros,longitud_metros,costo_metro_cuadrado;

    cout << "calcule e imprima el costo de un terreno cuadrado o rectangular" << endl;

    cout << "ingrese la longitud del terreno en metros: "; cin >> longitud_metros;

    cout << "ingrese la anchura del terreno en metros: ";  cin >> anchura_metros;

    cout << "ingrese el costo del metro cuadrado: ";       cin >> costo_metro_cuadrado;

    costo_terreno_cuadrado = costo_metro_cuadrado*anchura_metros*longitud_metros;

    cout << "El costo del metro cuadrado es: " << costo_terreno_cuadrado;cout << " $ " << endl;
    system ("pause");
    
    return 0;

    
} 

