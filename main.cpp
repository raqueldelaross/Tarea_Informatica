// Francisco Javier Sánchez Tasej 2012421
#include <iostream>

using namespace std;

//Calcular el area de un circulo
void circulo(){
	float radio, resultado;
	cout<<"Ingrese el radio del circulo: ";cin>>radio;
	resultado = 3.1416 * (radio*radio);
	cout<<"El area del circulo es de: "<<resultado<<endl;
}
//Conocer si una persona es mayor de edad 
void edad(){
	int edad;
	cout<<"Ingrese la edad del usuario: ";cin>>edad;
	if (edad >= 18 && edad <= 130){
		cout<<"La persona es mayor de edad"<<endl;
	}
	else if (edad < 18 && edad >=1){
		cout<<"La persona no es mayor de edad"<<endl;
	}
	else{
		cout<<"Esta edad no existe"<<endl;
	}
}
//Multiplos de 5 entre 0 a 200 de forma descendente 
void multiplos(){
	int num;
	cout<<"Los multiplos de 5 son:"<<endl;
	for (int i=200; i >= 5; i--){
		if (i%5==0){
			cout<<i<<endl;
		}
	}
}
//Programa principal
int main(){
	int opcion;
	do{
	cout<<"MENU"<<endl;
	cout<<"-------------------------------------"<<endl;
	cout<<"1. Calcular el area de un circulo"<<endl;
	cout<<"2. Conocer si una persona es mayor de edad"<<endl;
	cout<<"3. Multiplos e 5 entre 0 a 200 de forma DESCENDENTE"<<endl;
	cout<<"4. Salir"<<endl;
	cout<<"Opcion: ";cin>>opcion;
	switch (opcion){
	case 1:
		cout<<endl;
		circulo();
		cout<<endl;
		system ("pause");
		system ("cls");
		break;
	case 2:
		cout<<endl;
		edad();
		cout<<endl;
		system ("pause");
		system ("cls");
		break;
	case 3:
		cout<<endl;
		multiplos();
		cout<<endl;
		system ("pause");
		system ("cls");
		break;
	case 4:
		cout<<endl;
		cout<<"Gracias por utilizar el programa"<<endl;
		cout<<"Programador: Francisco Javier Sánchez Tasej"<<endl<<endl;
		system ("pause");
		system ("cls");
		break;
	default:
		cout<<endl;
		cout<<"Esta opcion no existe entre el menu"<<endl<<endl;
		system ("pause");
		system ("cls");
		break;
	}
	}while(opcion != 4);
}