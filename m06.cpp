// Cargue una matriz de MxN y halle la suma de elementos de cada fila.

#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Ingrese el número de filas: ";
    cin >> m;
    cout << "Ingrese el número de columnas: ";
    cin >> n;
    int matriz[m][n];
    for (int i = 0; i < m; i++) {
        cout << "Ingrese los elementos de la fila " << i + 1 << endl;
        for (int j = 0; j < n; j++) {
            cout << "Ingrese el elemento " << j + 1 << ": ";
            cin >> matriz[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        int suma = 0;
        for (int j = 0; j < n; j++) {
            suma += matriz[i][j];
        }
        cout << "La suma de los elementos de la fila " << i + 1 << " es: " << suma << endl;
    }
    return 0;
}