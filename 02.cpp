// obtener la suma de los elementos pares y la suma de los elementos impares de un vector

#include <iostream>
using namespace std;
int main()
{
  int n, sumaPares = 0, sumaImpares = 0;
  cout << "Ingrese el tamaño del vector: ";
  cin >> n;
  int vector[n];
  for (int i = 0; i < n; i++)
  {
    cout << "Ingrese el elemento " << i + 1 << ": ";
    cin >> vector[i];
  }
  for (int i = 0; i < n; i++)
  {
    if (vector[i] % 2 == 0)
    {
      sumaPares += vector[i];
    }
    else
    {
      sumaImpares += vector[i];
    }
  }
  cout << "La suma de los elementos pares es: " << sumaPares << endl;
  cout << "La suma de los elementos impares es: " << sumaImpares << endl;
}