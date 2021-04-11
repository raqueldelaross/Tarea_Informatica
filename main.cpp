// Mario Daniel Sajvin Gomez 1612921
#include <iostream>

using namespace std;

int main()
{
    cout << "¡Hola estudiantes!" << endl;

//PROGRAMA PARA REALIZAR ECUACIONES DE TIPO CUADRATICA


	float a, b, c, res, x1, x2;

	cout << "Ingrese el valor de a: " << endl;
	cin >> a;
	cout << endl;

	cout << "Ingrese el valor de b: " << endl;
	cin >> b;
	cout << endl;

	cout << "Ingrese el valor de c: " << endl;
	cin >> c;
	cout << endl;

	//VOY A RESTAR EL VALOR DE b ELEVADO AL CUADRADO POR 4*a*c
	res = (b * b) - (4 * a * c);
	//APLICANDO LA FORMULA
	x1 = (-b + sqrt(res)) / (2 * a);
	x2 = (-b - sqrt(res)) / (2 * a);

	//RESULTADO
	cout << "Los resultadoe son :" << endl;
	cout << "x1: " << x1 << endl;
	cout << "x2: " << x2 << endl;

	cout << endl;
	system("pause");
	cout << endl << endl;

    return 0;
}
