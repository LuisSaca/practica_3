// Llenar una matriz A de f filas y c columnas, almacenando los elementos en casillas intercaladas. 
// Por ejemplo, si f = 3 y c = 4, la matriz resultante sería:
// 1 0 2 0 3
// 0 4 0 5 0
// 6 0 7 0 8
//

#include <iostream>
using namespace std;

int main() {
    int f, c;
    cout << "Ingrese el número de filas: ";
    cin >> f;
    cout << "Ingrese el número de columnas: ";
    cin >> c;
    int A[f][c];
    int contador = 1;
    for (int i = 0; i < f; i++) {
        for (int j = 0; j < c; j += 2) {
            A[i][j] = contador;
            contador++;
        }
        for (int j = 1; j < c; j += 2) {
            A[i][j] = 0;
        }
    }
    cout << "La matriz resultante es: " << endl;
    for (int i = 0; i < f; i++) {
        for (int j = 0; j < c; j++) {
            cout << A[i][j] << " | ";
        }
        cout << endl;
    }
    return 0;
}