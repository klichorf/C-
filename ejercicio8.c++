/*
Elabore un algoritmo que lea un número de pie y calcule e imprima su equivalente
en yardas, pulgadas, centímetros y metros, de acuerdo con las siguientes
equivalencias: 1 pie = 12 pulgadas, 1 yarda = 3 pie, 1 pulgada = 2.54 cm, 1
metro = 100 cm.


*/

#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main()
{
    int pie,yardas,pulgadas,centimetros,metros;

    cout << "convertir pies a yardas, pulgadas, centimetros y metros" << endl;

    cout << "ingrese numero de pie: "; cin >> pie;

    
    yardas = pie/3;
    pulgadas = pie*12;
    centimetros = pie*30,48;
    metros = pie*0,3048;
    

    cout << pie << " pie equivalen a :" <<   fixed << setprecision (2)<< yardas << " yardas"<< endl;
    cout << pie << " pie equivalen a :" <<  pulgadas << " pulgadas"<< endl;
    cout << pie << " pie equivalen a :" <<  centimetros<< " centimetros"<< endl;
    cout << pie << " pie equivalen a :" <<  metros << " metros"<< endl;
    


    system ("pause");
    
    return 0;




}
