#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char const *argv[])

{
    string nombreAlum; // nombreAlum: Cadena
    int promedio, promCal1, totAlumnos = 0, calif1 = 0, calif2 = 0, calif3 = 0, calif4 = 0, totprom = 0,
                            promCal2, promCal3, promCal4, promProm, totCal1,
                            totCal2, totCal3, totCal4; // totAlumnos: Entero

    double totProm; // totProm: Real

    char desea; // desea: caracter}

    cout << " CALIFICACIONES DE ALUMNOS  "; // Imprimir encabezado

    totAlumnos = 0, calif1 = 0, calif2 = 0, calif3 = 0, calif4 = 0, totprom = 0; // contador

    do
    {
        cout << "Ingrese el  nombre del alumno : ";
        cin >> nombreAlum; // solicitar nombre del alumno y leer nombre
        cout << "Ingrese calificacion 1 :";
        cin >> calif1;
        cout << "Ingrese calificacion 2 :";
        cin >> calif2;
        cout << "Ingrese calificacion 3 :";
        cin >> calif3;
        cout << "Ingrese calificacion 4 :";
        cin >> calif4;

        promedio = (calif1 + calif2 + calif3 + calif4) / 4;

        /// Imprimir nombreAlum, calif1, calif2, calif3,calif4, promedio

        cout << "Nombre :" << nombreAlum << endl;
        cout << "calificacion 1 :" << calif1 << endl;
        cout << "calificacion 2 :" << calif2 << endl;
        cout << "calificacion 3 :" << calif3 << endl;
        cout << "calificacion 4 :" << calif4 << endl;
        cout << "calificacion promedio :" << promedio << endl;

        /// acumulador
        totAlumnos = totAlumnos + 1; /// se puede escribir de esta forma tambien totAlumnos++;
        totCal1 = totCal1 + calif1;
        totCal2 = totCal2 + calif2;
        totCal3 = totCal3 + calif3;
        totCal4 = totCal4 + calif4;
        totProm = totProm + promedio;

        cout << "¿Desea procesar otro alumno (S/N)?";
        cin >> desea;

    } while (desea == 'S');

    promCal1 = totCal1 / totAlumnos;
    promCal2 = totCal2 / totAlumnos;
    promCal3 = totCal3 / totAlumnos;
    promCal4 = totCal4 / totAlumnos;
    promProm = totProm / totAlumnos;

    // Imprimir promCal1, promCal2, promCal3, promCal4, promProm

    cout << "Calificacion 1 promedio :" << promCal1 << endl;
    cout << "Calificacion 2 promedio :" << promCal2 << endl;
    cout << "Calificacion 3 promedio :" << promCal3 << endl;
    cout << "Calificacion 4 promedio :" << promCal4 << endl;
    cout << "Calificacion promedio :" << promProm << endl;

    system("pause");

    return 0;
}
