// Almacene en una matriz de 3*2, 6 números enteros y obtenga la cantidad de pares e impares.

#include <iostream>
using namespace std;

int main() {
    int m = 3, n = 2;
    int P[m][n];
    int pares = 0, impares = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n ; j++) {
            cout << "Ingrese el elemento (" << i + 1 << ", " << j + 1 << "): ";
            cin >> P[i][j];
            if (P[i][j] % 2 == 0) {
                pares++;
            } else {
                impares++;
            }
        }
    }
    cout << "La cantidad de números pares es: " << pares << endl;
    cout << "La cantidad de números impares es: " << impares << endl;
}
