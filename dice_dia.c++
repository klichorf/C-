
#include <iostream>

using namespace std;

/*
1: Imprimir “Domingo”
2: Imprimir “Lunes”
3: Imprimir “Martes”
4: Imprimir “Miércoles”
5: Imprimir “Jueves”
6: Imprimir “Viernes”
7: Imprimir “Sábado”
*/

int main()
{

    int day = 4;

    cout << "ingrese el numero del dia: "; cin >> day;

    if (day>0 & day<=7) {

    

    switch (day) {
    case 1:
        cout << "domindo";
        break;
    case 2:
        cout << "lunes";
        break;
    case 3:
        cout << "martes";
        break;
    case 4:
        cout << "miercoles";
        break;
    case 5:
        cout << "jueves";
        break;
    case 6:
        cout << "vierne";
        break;
    case 7:
        cout << "sabado";
        break;
    }
  

    }else{

        cout << "opcion invalida";

    }


    return 0;
}

