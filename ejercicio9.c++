/*
Elaborar un algoritmo que lea el artículo y su costo. La utilidad es el 150% y el
impuesto es el 15%. Calcular e imprimir artículo, utilidad, impuesto y precio de
venta.


*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    string articulo;
    float costo_venta, precio_venta, utilidad = 0.9,ganancia,impuesto = 0.15;
    
    cout << "Calcular e imprimir articulo, utilidad, impuesto y precio de venta. " << endl;

    cout << "ingrese el nombre del articulo: ";cin >> articulo;
    cout << "ingrese el costo de ventas en pesos: ";cin >> costo_venta;

    precio_venta = costo_venta / (1 - utilidad) * 0.25;
    ganancia = precio_venta - impuesto*precio_venta;//ganacia es la utilidad del producto
    impuesto = impuesto*precio_venta;

    cout << "el precio de venta del ariculo  :" << articulo << " es :" << precio_venta << " pesos" << endl;
    cout << "la ganacia del articulo: " << articulo << " es :" << ganancia << " pesos" << endl;
    cout << "el impuesto del articulo: " << articulo << " es :" << impuesto << " pesos" << endl;

    system("pause");

    return 0;
}