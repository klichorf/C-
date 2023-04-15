/*
Elaborar un algoritmo que permita leer valores para A y B e imprima Y, Z y W.
Y = 3a^2b^2 raiz_cuadrarda (2*a) 
W = 4 raiz_cuadrarda(2a^a) (3a^2b^2 - raiz_cuadrarda(2a) )


        12a½
Z = ──────────
        b¾
*/

#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{

    float valor_A,valor_B,Y,Z,W,a,b;
    cout << "Calcule varias ecuaciones" << endl;
    cout << "ingrese el valor de A: ";cin >> valor_A;
    cout << "ingrese el valor de B: ";cin >> valor_B;

    //Y = 3a^2b^2 raiz_cuadrarda (2*a) 

    Y= 3*pow(a,2)*pow(b,2)*sqrt(2*a);

    //W = 4 raiz_cuadrarda(2a^a) (3a^2b^2 - raiz_cuadrarda(2a) )
    W = 4*sqrt(pow(2,a))*(3*pow(a,2)*pow(b,2)-sqrt(2*a));

    /*
        12a½
Z = ──────────
        b¾ 
   */

    Z= 12*pow(a,1/2)/(pow(b,3/4)),


    cout << "el valor de Y es  : " << Y << endl;
    cout << "el valor de W es  : " << W << endl;
    cout << "el valor de Z es  : " << Z << endl;
    system("pause");

    return 0;
}