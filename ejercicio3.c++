/*Elaborar un algoritmo que lea una cantidad de horas e imprima su equivalente
en minutos, segundos y días.*/

#include <iostream>
#include <stdlib.h>

using namespace std;
int main ()
{
    float horas,minutos,segundos,dias;

    cout << "lee la cantidad de horas" << endl;

    cout << "ingrese la cantidad de horas: "; cin >> horas;

    minutos = horas*60;
    segundos = horas*3600;
    dias = horas/24;

    cout << horas;cout << " horas equivalen a : " << minutos;cout << " minutos"<< endl;
    cout << horas;cout << " horas equivalen a : " << segundos; cout << " segundos" << endl;
    cout << horas;cout << " horas equivalen a : " << dias; cout << " dias" << endl;
    


    system ("pause");
    
    return 0;


    

}