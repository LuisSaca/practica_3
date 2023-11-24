// dado un vector de dimension N, ingresar numeros enteros por teclado y obtener la suma de sus elementos, mostrar en pantalla

#include <iostream>
using namespace std;

int main()
{
  int n, suma = 0;
  cout << "Ingrese la dimension del vector: ";
  cin >> n;
  int vector[n];
  for (int i = 0; i < n; i++)
  {
    cout << "Ingrese el elemento " << i + 1 << ": ";
    cin >> vector[i];
    suma += vector[i];
  }
  cout << "La suma de los elementos del vector es: " << suma << endl;
}