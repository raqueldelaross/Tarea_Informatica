// Keneth Kanek López Pérez 1649121
#include <iostream>

using namespace std;

int main()
{
   int numero;
   int sumatoria,sumatoria1;
   int contador, contador1;
   int resultado,resultado1;
   int nada;
    cout << "ingrese un numero" << endl;
   cin >> numero;
   sumatoria =1;
   contador=1;
   do {
    contador =contador+1;
    sumatoria = contador +sumatoria;
   cout << contador << endl;
   } while (contador < numero);
   cout << "la suma de todos es; " << sumatoria << endl;
   resultado = sumatoria *sumatoria;
   cout << "el cuadrado de la suma es: " << resultado << endl;
   sumatoria1=1;
   contador1=1;
   nada=1;
   do {
    contador1= contador1+1;
   nada = contador1 *contador1;
    sumatoria1 = nada+sumatoria1;
   } while (contador1 < numero);
   cout << "la suma de cuadrados es:" << sumatoria1 << endl;

  resultado1 = resultado - sumatoria1;
  cout << "la diferencia de cuadrados es: "<< resultado1 << endl;
}
