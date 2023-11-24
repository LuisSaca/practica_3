// Ingresar números a una matriz S de dimensión M*N y obtenga la suma total de sus elementos.

#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Ingrese el número de filas: ";
    cin >> m;
    cout << "Ingrese el número de columnas: ";
    cin >> n;
    int S[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n ; j++) {
            cout << "Ingrese el elemento (" << i + 1 << ", " << j + 1 << "): ";
            cin >> S[i][j];
        }
    }
    int suma = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n ; j++) {
            suma += S[i][j];
        }
    }
    cout << "La suma total de los elementos de la matriz es: " << suma << endl;
}