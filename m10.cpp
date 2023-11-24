// Llenar automaticamente la triangular superior de una matriz A(n,n) con los multiplos de 3
// ejemplo si n = 5
// 3 6 9 12 15
// 0 18 21 24 27
// 0 0 30 33 36
// 0 0 0 39 42
// 0 0 0 0 45
//

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el número de filas y columnas: ";
    cin >> n;
    int A[n][n];
    int contador = 1;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            A[i][j] = contador * 3;
            contador++;
        }
    }
    cout << "La matriz resultante es: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "| ";
        for (int j = 0; j < n; j++) {
            cout << A[i][j] << " | ";
        }
        cout << endl;
    }
    return 0;
}