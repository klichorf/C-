/*Elaborar un algoritmo que calcule e imprima el costo de producción de un
artículo, teniendo como datos la descripción y el número de unidades producidas.
El costo se calcula multiplicando el número de unidades producidas por
un factor de costo de materiales de 3.5 y sumándole al producto un costo fi jo
de 10 700 */

#include <iostream>
#include <stdlib.h>

using namespace std;
int main ()
{

    float costo_produccion,numero_unidades_producidas,costo_fijo_producto,costo_materiales;
    cout << "El costo de produccion de un articulo:" << endl;
    cout << "El numero de unidades producidas: "; cin >> numero_unidades_producidas;

    
    costo_fijo_producto = 10700;
    costo_materiales = 3.5;

    costo_produccion = numero_unidades_producidas*costo_materiales+costo_fijo_producto;

    cout << "El costo de produccion es:" << costo_produccion;cout << "  $" << endl; //
    system ("pause");
    
    return 0;


}