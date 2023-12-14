#include <iostream>
using namespace std;

int main()
{
  // Lea dos matrices de orden M x N y genere una tercera con la suma de ambas
  int M, N;
  cout << "Ingrese el número de filas: ";
  cin >> M;
  cout << "Ingrese el número de columnas: ";
  cin >> N;
  int A[M][N];
  int B[M][N];
  int C[M][N];
  cout << "Ingrese los elementos de la matriz A: " << endl;
  for (int i = 0; i < M; i++)
  {
    cout << "Fila " << i + 1 << endl;
    for (int j = 0; j < N; j++)
    {
      cout << "Columna " << j + 1 << ": ";
      cin >> A[i][j];
    }
  }
  cout << "Ingrese los elementos de la matriz B: " << endl;
  for (int i = 0; i < M; i++)
  {
    cout << "Fila " << i + 1 << endl;
    for (int j = 0; j < N; j++)
    {
      cout << "Columna " << j + 1 << ": ";
      cin >> B[i][j];
    }
  }
  // Sumar las matrices
  for (int i = 0; i < M; i++)
  {
    for (int j = 0; j < N; j++)
    {
      C[i][j] = A[i][j] + B[i][j];
    }
  }
  // Imprimir la matriz resultante
  cout << "La matriz resultante es: " << endl;
  for (int i = 0; i < M; i++)
  {
    cout << "| ";
    for (int j = 0; j < N; j++)
    {
      cout << C[i][j] << " | ";
    }
    cout << endl;
  }
}