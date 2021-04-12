// <Heidi Raquel De la Rosa Quiñonez: 1601321>
#include <iostream>

using namespace std;
int main()
{
	int numero, a, b, c, d, pro, sumapares, sumaimpares, a1, b1, c1, d1;
	cout << "Ingrese un número de cuatro dígitos\n";
	cin >> numero;
	if (numero > 9999 || numero < 999) {
		cout << "El número que ingresó es inválido\n";
	}
	else
	{

		a = (numero % 10000) / 1000;
		b = (numero % 10000) % 1000 / 100;
		c = ((numero % 10000) % 1000) % 100 / 10;
		d = (((numero % 10000) % 1000) % 100) % 10;
		cout << "Los dígitos del número ingresado son: \n";
		cout << a << "\n";
		cout << b << "\n";
		cout << c << "\n";
		cout << d << "\n";
		pro = (a + b + c + d) / 4;
		cout << "El promedio de los dígitos anteriores es: " << pro << "\n";
		sumapares = (b + d);
		sumaimpares = (a + c);
		if (sumapares < sumaimpares) {
			cout << "La suma de los dígitos: " << a << " + " << c << " = " << sumaimpares << "\n";
			cout << "La suma de los dígitos: " << b << " + " << d << " = " << sumapares << "\n";
			cout << "La suma mayor es: " << sumaimpares << "\n";
		}
		else
		{
			if (sumapares > sumaimpares) {
				cout << "La suma de los dígitos: " << a << " + " << c << " = " << sumaimpares << "\n";
				cout << "La suma de los dígitos: " << b << " + " << d << " = " << sumapares << "\n";
				cout << "La suma mayor es: " << sumapares << "\n";
			}
			else
			{
				cout << "La suma de los dígitos: " << a << " + " << c << " = " << sumaimpares << "\n";
				cout << "La suma de: " << a << " + " << c << " es igual a la suma de: " << b << " + " << d << "\n";
			}
		}
		a1 == a % 2;
		b1 == b % 2;
		c1 == c % 2;
		d1 == d % 2;
		if (a % 2 == 0) {
			cout << a << " Es un número par \n";
		}
		else {
			cout << a << " Es un número impar \n";
		}
		if (b % 2 == 0) {
			cout << b << " Es un número par \n";
		}
		else {
			cout << b << " Es un número impar \n";
		}
		if (c % 2 == 0) {
			cout << c << " Es un número par \n";
		}
		else {
			cout << c << " Es un número impar \n";
		}
		if (d % 2 == 0) {
			cout << d << " Es un número par \n";
		}
		else {
			cout << d << " Es un número impar \n";
		}
	}
}
