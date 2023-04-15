/*
Elaborar un algoritmo que lea la cantidad de dólares que se va a comprar y el
tipo de cambio en pesos (costo de un dólar en pesos). Calcular e imprimir la
cantidad que se debe pagar en pesos por la cantidad de dólares indicada.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    float dolar, pesos, cambio_dolar_pesos;

    cout << "Conversion de dolares a pesos" << endl;

    cout << "ingrese la cantidad de dolares: ";cin >> dolar;

    cout << "ingrese el valor actual del dolar a pesos: ";cin >> cambio_dolar_pesos;

    pesos = dolar * cambio_dolar_pesos;

    cout << "el dolar equivale a :" <<" $" << pesos  <<endl;

    system("pause");

    return 0;
}