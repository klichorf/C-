/*
Una temperatura en grados Celsius (C) se puede convertir a su equivalente
Fahrenheit (F) con la fórmula:
      9
F = ───── C + 32
      5
De Fahrenheit a Celsius con la fórmula:
             5
C =  F - 32 ────
             9
Elaborar un algoritmo que lea una temperatura en grados Celsius y obtenga e
imprima la temperatura Fahrenheit equivalente.

*/
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
      int C, F;

      cout << "Calcule la temperatura Fahrenheit" << endl;

      cout << "ingrese el valor de temperatura en grados Celsius: ";
      cin >> C;

      F = (9 / 5) * C + 32;

      cout << C << " grados centigrados equevalen a :" << endl << F << " grados Fahrenheit" << endl;

      system("pause");

      return 0;
}
