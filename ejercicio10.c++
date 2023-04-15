/*
Elaborar un algoritmo que lea el radio de un círculo e imprima el área.
ÁREA = PIr²

*/
#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define PI 3.141592

int main()
{
    float area, radio;

    printf( "\n   Introduzca radio: " );
    scanf( "%f", &radio );

    area = PI * pow( radio, 2 );

    printf( "\n   El %crea de la circunferencia es: %.3f",160, area );

    printf( "\n\n   Pulse una tecla para salir..." );
    getch(); 
    
    
    system("pause");



    return 0;
}