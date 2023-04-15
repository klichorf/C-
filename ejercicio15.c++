/*
Elaborar un algoritmo que lea la cantidad de dólares que se va a comprar y el
tipo de cambio (costo de un dólar) en: yenes, pesetas, libras esterlinas y marcos.
Calcular e imprimir la cantidad que se debe pagar en yenes, pesetas, libras
esterlinas y marcos.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    float cantida_dolar1,cantida_dolar2,cantida_dolar3,cantida_dolar4,yenes,pesetas,libras_esterlinas,marcos,cambio_yenes_dolares,cambio_pesetas_dolares,cambio_LibraEsterlina_dolares,cambio_marcos_dolares;

    cout << "Calcular la cantidad dolares que se van cambiar y tipo de cambio" << endl; 

    cout << "ingrese la cantidad de dolares que quiere comprar : ";cin >> cantida_dolar1; 
    cout << "ingrese el valor actual del yen a dolares: ";cin >> cambio_yenes_dolares;
    
    cout << "ingrese la cantidad de dolares que quiere comprar : ";cin >> cantida_dolar2; 
    cout << "ingrese el valor actual de la peseta a dolares: ";cin >> cambio_pesetas_dolares;

    cout << "ingrese la cantidad de dolares que quiere comprar : ";cin >> cantida_dolar3; 
    cout << "ingrese el valor actual de la libra esterlina a dolares: ";cin >> cambio_LibraEsterlina_dolares;


    cout << "ingrese la cantidad de dolares que quiere comprar : ";cin >> cantida_dolar4; 
    cout << "ingrese el valor actual del marco a dolares: ";cin >> cambio_marcos_dolares;





    yenes = cantida_dolar1 *cambio_yenes_dolares; 
    pesetas = cantida_dolar2 *cambio_pesetas_dolares; 
    libras_esterlinas = cantida_dolar3 *cambio_LibraEsterlina_dolares; 
    marcos = cantida_dolar4 *cambio_marcos_dolares; 

    cout << cantida_dolar1 <<" dolare equivale a :  "  << yenes  << " yenes "<<endl; 
    cout << cantida_dolar2 <<" dolare equivale a :  "  << pesetas  << " pesetas "<<endl; 
    cout << cantida_dolar3 <<" dolare equivale a :  "  << libras_esterlinas  << " libras esterninas "<<endl; 
    cout << cantida_dolar4 <<" dolare equivale a :  "  << marcos  << " marcos "<<endl; 




    system("pause");

    return 0;
}



/*

cout << "convertir dolar a pesetas: ";cin >> costo_dolar,pesetas;
cout << "convertir dolar a libras esterlinas: ";cin >> costo_dolar,libras_esterlinas;
cout << "convertir dolar a marcos: ";cin >> costo_dolar,marcos;


*/