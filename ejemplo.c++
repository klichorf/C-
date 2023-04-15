//#include <iostream>es una biblioteca de archivos de cabecera que nos permite trabajar con objetos de entrada y salida,

#include <iostream>
#include <stdlib.h>

// significa que podemos usar nombres para objetos y variables de la Biblioteca estándar.using namespace std,std significa estandar
using namespace std;

int main() 
{
	
	float a, b, area, perimetro;

	cout << "Calculo del area y perimetro de un rectangulo: " << endl;
	cout << "ingrese la base: ";   cin >> a ;  //  cin >> lee la variable a 
	cout << "ingrese la altura: "; cin >> b;  //  cin >> lee la variable b


	area = a * b;
	perimetro = 2 * (a + b);
	
	cout << "El area del rectangulo es: " << area << endl;
	cout << "El perimetro del rectagulo es: " << perimetro << endl; 
	system ("pause");


	return 0;
}
