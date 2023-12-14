#include  <iostream>
using namespace std;

int main () {
  // hallar la transpuesta de una matriz cuadrada
  // ejemplo:
  // 1 2 3
  // 4 5 6
  // 7 8 9

  // 1 4 7
  // 2 5 8
  // 3 6 9

  int n;
  cout << "Ingrese el número de filas y columnas: ";
  cin >> n;
  int A[n][n];
  int B[n][n];
  int i = 0;
  int j = 0;
  int contador = 1;
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      A[i][j] = contador;
      contador++;
    }
  }
  cout << "La matriz original es: " << endl;
  for (int i = 0; i < n; i++) {
    cout << "| ";
    for (int j = 0; j < n; j++) {
      cout << A[i][j] << " | ";
    }
    cout << endl;
  }
  cout << "La matriz transpuesta es: " << endl;
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      B[i][j] = A[j][i];
    }
  }
  for (int i = 0; i < n; i++) {
    cout << "| ";
    for (int j = 0; j < n; j++) {
      cout << B[i][j] << " | ";
    }
    cout << endl;
  }
  
}