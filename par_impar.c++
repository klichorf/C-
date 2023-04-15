/*
Algoritmo DICE PAR O IMPAR
Clase DiceParImpar
1. Método principal()
a. Declarar variables
num: Entero
b. Solicitar número entero (0-9)
c. Leer num
d. switch num
0,2,4,6,8: Imprimir num, “es par”
1,3,5,7,9: Imprimir num, “es impar”
e. default
1. Imprimir num, “No está en el rango 0-9”
f. endswitch
g. Fin Método principal
Fin Clase DiceParImpar
Fin


*/

#include <iostream>

using namespace std;

int main()
{
    int numero;

    cout << "ingrese el numero del 0 al 9 para indicar si es par o impar ";
    cin >> numero;

    if (numero > 0 & numero <= 9)
    {

        switch (numero)
        {
        case 0:
            cout << "par";
            break;
        case 2:
            cout << "par";
            break;
        case 4:
            cout << "par";
            break;
        case 6:
            cout << "par";
            break;
        case 8:
            cout << "par";
            ;
            break;

        case 1:
            cout << "impar";
            break;
        case 3:
            cout << "impar";
            break;
        case 5:
            cout << "impar";
            break;
        case 7:
            cout << "impar";
            break;
        case 9:
            cout << "impar";
            ;
            break;
        }
    }
    else
    {
        cout << "opcion invalida";
    }
}

