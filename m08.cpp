// Realice un algoritmo para obtener una matriz como el resultado de la suma de dos matrices de orden MxN.
#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Ingrese el número de filas: ";
    cin >> m;
    cout << "Ingrese el número de columnas: ";
    cin >> n;
    int A[m][n], B[m][n], C[m][n];
    cout << "Ingrese los elementos de la matriz A" << endl;
    for (int i = 0; i < m; i++) {
        cout << "Ingrese los elementos de la fila " << i + 1 << endl;
        for (int j = 0; j < n; j++) {
            cout << "Ingrese el elemento " << j + 1 << ": ";
            cin >> A[i][j];
        }
    }
    cout << "Ingrese los elementos de la matriz B" << endl;
    for (int i = 0; i < m; i++) {
        cout << "Ingrese los elementos de la fila " << i + 1 << endl;
        for (int j = 0; j < n; j++) {
            cout << "Ingrese el elemento " << j + 1 << ": ";
            cin >> B[i][j];
        }
    }
    cout << "La matriz resultante es: " << endl;
    for (int i = 0; i < m; i++) {
        cout << "| ";
        for (int j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
            cout << C[i][j] << " | ";
        }
        cout << endl;
    }
    return 0;
}