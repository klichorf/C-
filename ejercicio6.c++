/*Hacer un algoritmo que obtenga e imprima el valor de Y a partir de la ecuación
Y = 3X² + 7X - 15
solicitando como dato de entrada el valor de X.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int X,Y;

    cout << "Calcule el valor de Y" << endl;

    cout << "ingrese el valor de X: "; cin >> X;
    

    Y = 3*X^2 + 7*X - 15;
    
    cout << "Y es igual a : " << Y << endl;
    
    


    system ("pause");
    
    return 0;




}

