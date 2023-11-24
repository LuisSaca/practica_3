// Leer una matriz A de orden M x N y un número K. Multiplicar todos los elementos de la matriz por el
// número K. Mostrar la matriz resultante.

#include <iostream>
using namespace std;

int main() {
    int m, n, k;
    cout << "Ingrese el número de filas: ";
    cin >> m;
    cout << "Ingrese el número de columnas: ";
    cin >> n;
    int A[m][n];
    cout << "Ingrese el número K: ";
    cin >> k;
    for (int i = 0; i < m; i++) {
        cout << "Ingrese los elementos de la fila " << i + 1 << endl;
        for (int j = 0; j < n; j++) {
            cout << "Ingrese el elemento " << j + 1 << ": ";
            cin >> A[i][j];
            A[i][j] *= k;
        }
    }
    cout << "La matriz resultante es: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << A[i][j] << " | ";
        }
        cout << endl;
    }
    return 0;
}