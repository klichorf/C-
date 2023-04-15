/*Elaborar un algoritmo que lea el radio(r) de una esfera, calcule e imprima el
volumen y el área.

            4πr3
VOLUMEN = ─────── ÁREA = πr2 la formula que hace referencia es a la circunferencia la formula del area es: ÁREA = 4πr2
            3 
*/

#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
    double r, AREA,VOLUMEN, pi;
    cout << "Calcule el area y el volumen de una esfera" << endl;
    cout << "ingrese el valor del radio: ";cin >> r;
    pi = acos(-1.0); // esta formula sirve para sacar el numero pi

    AREA = 4*(pi*pow(r,2));
    VOLUMEN = (4*pi*pow(r,3))/3;
    cout << "el area de la esfera es  : " << AREA << endl;
    cout << "el volumen de la esfera es  : " << VOLUMEN << endl;


    system("pause");

    return 0;
}