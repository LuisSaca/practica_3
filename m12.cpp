
#include <iostream>
using namespace std;

int main()
{

  // generar la matriz:
  // 1 1 1 1 1
  // 0 1 1 1 0
  // 0 0 1 0 0
  // 0 1 1 1 0
  // 1 1 1 1 1

  int n;
  cout << "Ingrese el número de filas y columnas: ";
  cin >> n;
  int A[n][n];
  int i = 0;
  int j = 0;
  int limite = n;
  int limite2 = n;
  int limite3 = 0;
  int limite4 = 0;
  while (limite3 < limite2)
  {
    // llenar la fila superior
    for (j = limite4; j < limite; j++)
    {
      A[limite3][j] = 1;
    }
    limite3++;
    // llenar la columna derecha
    for (i = limite3; i < limite2; i++)
    {
      A[i][limite - 1] = 1;
    }
    limite--;
    // llenar la fila inferior
    for (j = limite - 1; j >= limite4; j--)
    {
      A[limite2 - 1][j] = 1;
    }
    limite2--;
    // llenar la columna izquierda
    for (i = limite2 - 1; i >= limite3; i--)
    {
      A[i][limite4] = 1;
    }
    limite4++;
  }

  cout << "La matriz resultante es: " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << "| ";
    for (int j = 0; j < n; j++)
    {
      cout << A[i][j] << " | ";
    }
    cout << endl;
  }
}