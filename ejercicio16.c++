/*
Elaborar un algoritmo que permita leer un valor e imprima el logaritmo natural,
el exponencial, el valor absoluto y la raíz cuadrada.

*/



#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
    
    double numero,exponencial, logaritmo_natural, valorAbsoluto,raiz_cuadrada;
    cout << "Calcule el valor de un  logaritmo natural, su exponencial, su valor absoluto y rair cuadrada" << endl;
    cout << "ingrese un numero: ";cin >> numero;



    exponencial =  exp( numero);//////el exponencial
    logaritmo_natural = log10(numero);//////el logaritmo natural
    valorAbsoluto = abs(numero);//////el valor absoluto
    raiz_cuadrada = sqrt(numero);//////el valor absoluto


    cout << "el logtritmo natural del valor ingresado es : " << logaritmo_natural << endl;
    cout << "el exponencial del valor ingresado es : " << exponencial << endl;
    cout << "valor absoluto del valor ingresado es : " << valorAbsoluto << endl;
    cout << "la raiz cuadra del valor ingresado es : " << raiz_cuadrada << endl;

    system("pause");

    return 0;
}
