// Llenar un vector D, con los primeros N números impares, en orden descendente.
// Si N=5
// D[i]= 9 7 5 3 1
// Entonces el vector resultante muestra los siguientes números: 9, 7, 5, 3, 1

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamaño del vector: ";
    cin >> n;
    int D[n];
    for (int i = 0; i < n; i++) {
        D[i] = 2 * i + 1;
    }
    cout << "El vector resultante es: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << D[i] << " ";
    }
}