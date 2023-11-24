// Dada la matriz A[ n ][ m ] introducir n, m (n>0, m>0) y los elementos de la matriz, posteriormente encontrar el mayor de sus elementos y mostrarla.

#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Ingrese el número de filas: ";
    cin >> n;
    cout << "Ingrese el número de columnas: ";
    cin >> m;
    int A[n][m];
    for (int i = 0; i < n; i++) {
        cout << "Ingrese los elementos de la fila " << i + 1 << endl;
        for (int j = 0; j < m; j++) {
            cout << "Ingrese el elemento " << j + 1 << ": ";
            cin >> A[i][j];
        }
    }
    int mayor = A[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m ; j++) {
            if (A[i][j] > mayor) {
                mayor = A[i][j];
            }
        }
    }
    cout << "El mayor elemento de la matriz es: " << mayor << endl;
    return 0;
}