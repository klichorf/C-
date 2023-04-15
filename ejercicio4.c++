/*Similar al del alumno (Ejercicio 3.5.2), con la diferencia de que en lugar del
promedio se obtiene una califi cación fi nal multiplicando las califi caciones 1,2,3
y 4 por los porcentajes 30, 20,10 y 40 %, respectivamente, y sumando los
productos.*/

#include <iostream>
#include <stdlib.h>

using namespace std;
// 30/100=0.3 20/100=0.2 10/100=0.1 40/100=0.4

int main()
{
    float  calificacion_1, calificacion_2, calificacion_3, calificacion_4, calificaciontotal;
    string nombre;

    cout << "mostrar calificacion final" << endl;

    cout << "ingrese nombre: ";cin >> nombre;
    cout << "ingrese calificacion 1: ";cin >> calificacion_1;
    cout << "ingrese calificacion 2: ";cin >> calificacion_2;
    cout << "ingrese calificacion 3: ";cin >> calificacion_3;
    cout << "ingrese calificacion 4: ";cin >> calificacion_4;
    

    calificaciontotal = calificacion_1 * 0.3 + calificacion_2 * 0.2 + calificacion_3 * 0.1 + calificacion_4 * 0.4;


    cout << "hola " << nombre << " su calificacion es " << calificaciontotal << endl;

    system("pause");

    return calificaciontotal;
}