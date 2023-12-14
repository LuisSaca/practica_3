#include <iostream>
using namespace std;

int main () {
  // generar la matriz
  // 1 2 3 4 5 6
  // 18 0 0 0 0 7
  // 17 0 0 0 0 8
  // 16 0 0 0 0 9
  // 15 14 13 12 11 10

  int n;
  cout << "Ingrese el número de filas y columnas: ";
  cin >> n;
  int A[n][n];
  int contador = 1;
  int i = 0;
  int j = 0;
  int limite = n;
  int limite2 = n;
  int limite3 = 0;
  int limite4 = 0;
  while (contador <= n * n) {
    // llenar la fila superior
    for (j = limite4; j < limite; j++) {
      A[limite3][j] = contador;
      contador++;
    }
    limite3++;
    // llenar la columna derecha
    for (i = limite3; i < limite2; i++) {
      A[i][limite - 1] = contador;
      contador++;
    }
    limite--;
    // llenar la fila inferior
    for (j = limite - 1; j >= limite4; j--) {
      A[limite2 - 1][j] = contador;
      contador++;
    }
    limite2--;
    // llenar la columna izquierda
    for (i = limite2 - 1; i >= limite3; i--) {
      A[i][limite4] = contador;
      contador++;
    }
    limite4++;
  }

  cout << "La matriz resultante es: " << endl;
  for (int i = 0; i < n; i++) {
    cout << "| ";
    for (int j = 0; j < n; j++) {
      cout << A[i][j] << " | ";
    }
    cout << endl;
  }
 
}