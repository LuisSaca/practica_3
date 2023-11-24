// Generar y desplegar un vector A de N elementos que tenga la forma siguiente:
// Sea N=10
// 1 10 3 20 5 30 7 40 9 50 

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamaño del vector: ";
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            A[i] = i + 1;
        } else {
            A[i] = 10 * (i / 2 + 1);
        }
    }
    cout << "El vector resultante es: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
}