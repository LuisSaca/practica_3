// Leer un vector A de N elementos, hacer rotar hacia la izquierda en K elementos y desplegar el vector obtenido.
// Sea el vector A, con N=7, y K=3
// ejemplo
//  A: 7 11 2 9 33 4 23
//  A: 9 33 4 23 7 11 2

#include <iostream>
using namespace std;

int main() {
    int n, k;
    cout << "Ingrese el tamaño del vector: ";
    cin >> n;
    cout << "Ingrese el número de rotaciones: ";
    cin >> k;
    int A[n];
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> A[i];
    }
    int B[n];
    for (int i = 0; i < n; i++) {
        B[i] = A[(i + k) % n];
    }
    cout << "A: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    cout << "B: ";
    for (int i = 0; i < n; i++) {
        cout << B[i] << " ";
    }
    cout << endl;
}