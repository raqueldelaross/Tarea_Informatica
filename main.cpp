// Nombre: Angel Sebastian Pereira Fajardo  Carné: 1635521 
//Factorial de un numero
#include <iostream>
using namespace std;
int funcion_factorial(int);
int main()
{
	int n, i, factorial;

	cout << "Ingrese un numero: ";
	cin >> n;
	factorial = 1;

	for (i = 1; i <= n; i++)
		factorial = factorial * i;
	cout << endl << "Factorial = " << factorial << endl;
	return factorial;
}
