// Juan Antonio Marroquin Reyes 1510521
#include <iostream>

using namespace std;

int main() {
	int opcion;

	cout << "Bienvenido al Laboratorio No. 9" << endl;
	cout << "1. Numeros impares desde un numero N hasta un numero M." << endl;
	cout << "2. Calculo del factorial de un numero en N." << endl;
	cout << "3. A divido B sin utilizar operadores de division y modulo." << endl;
	cout << "4. Cambio de color de fondo y fuente de la consola." << endl;
	cout << "5. Salir." << endl;
	cout << "Por favor, seleccione uno de los siguientes programas: ";
	cin >> opcion;
	system("cls");

	//Programa 1
	if (opcion == 1) {
		int i,N, M;
		cout << "Programa 1: Numeros impares desde un numero N hasta un numero M." << endl;
		cout << "Por favor, ingrese un número N: ";
		cin >> N;
		cout << "Por favor, ingrese un número M: ";
		cin >> M;

		for (i = 1; i <= M; i+=2) {
			cout << i << endl;
		}
		system("pause");
		system("cls");
		return main();
	}

	//Programa 2
	else if (opcion == 2) {
		int numero, factorial = 1;
		cout << "Programa 2: Calculo del factorial de un numero en N" << endl;
		cout << "Ingrese numero a calcular: ";
		cin >> numero;

		for (int i = 1; i <= numero; i++) {
			factorial = factorial * i;
		}

		cout << "El factorial del numero es: " << endl;
		cout << numero << "! = " << factorial << endl << endl;

		system("pause");
		system("cls");
		return main();
	}

	//Programa 3
	else if (opcion == 3) {
		int A, B, cociente = 0, residuo;
		cout << "Programa 3: A divido B sin utilizar operadores de division y modulo." << endl;
		cout << "Ingrese el valor de A: ";
		cin >> A;
		cout << "Ingrese el valor de B: ";
		cin >> B;

		while (A >= B) {
			cociente++;
			A = A - B;
		}
		cout << "El cociente es: " << cociente << endl;
		cout << "El residuo es: " << A << endl;
		system("pause");
		system("cls");
		return main();
	}

	//Programa 4
	else if (opcion == 4) {
		int interfaz;
		cout << "Programa 4: Cambio de color de fondo y fuente de la consola." << endl;
		cout << "1. Interfaz predeterminada 1" << endl;
		cout << "2. Interfaz predeterminada 2" << endl;
		cout << "3. Interfaz predeterminada 3" << endl;
		cout << "4. Salir" << endl;
		cout << "Seleccione una interfaz: ";
		cin >> interfaz;

		if (interfaz == 1) {
			system("color 0A");
			system("pause");
			system("cls");
			return main();
		}
		else if (interfaz == 2) {
			system("color 4F");
			system("pause");
			system("cls");
			return main();
		}
		else if (interfaz == 3) {
			system("color 2F");
			system("pause");
			system("cls");
			return main();
		}
		else {
			system("cls");
			return main();
		}

	}
	else if (opcion == 5) {
		cout << "Saliendo del programa..." << endl;
		return 0;
	}
	else {
		cout << "Opcion incorrecta" << endl;
		return main();
	}
}
