// Ingresar números enteros a una matriz P de dimensión M*N y mostrar los números pares de la matriz.

#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Ingrese el número de filas: ";
    cin >> m;
    cout << "Ingrese el número de columnas: ";
    cin >> n;
    int P[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n ; j++) {
            cout << "Ingrese el elemento (" << i + 1 << ", " << j + 1 << "): ";
            cin >> P[i][j];
        }
    }
    cout << "Los números pares de la matriz son: ";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n ; j++) {
            if (P[i][j] % 2 == 0) {
                cout << P[i][j] << " ";
            }
        }
    }
    cout << endl;
}