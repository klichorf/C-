/*La velocidad de la luz es de 300 000 kilómetros por segundo. Elaborar un algoritmo
que lea un tiempo en segundos e imprima la distancia que recorre la luz
en dicho tiempo.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int velocidad = 300000; // kilometros por segundo
    float tiempo_segundos,distancia_recorrida_luz;

    cout << "Calcule la distancia que recorre la luz" << endl;

    cout << "ingrese el tiempo en segundos: "; cin >> tiempo_segundos;
    
    ///𝐷𝑖𝑠𝑡𝑎𝑛𝑐𝑖𝑎=𝑉𝑒𝑙𝑜𝑐𝑖𝑑𝑎𝑑 ×𝑇𝑖𝑒𝑚𝑝𝑜

    distancia_recorrida_luz = velocidad*tiempo_segundos;
    
    cout << "recorren una distancia de : " << distancia_recorrida_luz;cout << " kilometros"<< endl;
    
    


    system ("pause");
    
    return 0;




}