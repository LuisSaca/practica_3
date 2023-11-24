// Leer N pares de números Q y R, el mayor entre Q y R almacenar como elemento de un vector A y si es menor o igual como elemento del vector B. desplegar los vectores.
// Sean los pares de números: N=5
// 5,9; 54,3; 6,2; 3,3; 3,7
// A: 9 54 6 3 7
// B: 5 3 2 3 3

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamaño de los vectores: ";
    cin >> n;
    int A[n], B[n];
    for (int i = 0; i < n; i++) {
        int q, r;
        cout << "Ingrese el par de números " << i + 1 << ": ";
        cin >> q >> r;
        if (q > r) {
            A[i] = q;
            B[i] = r;
        } else {
            A[i] = r;
            B[i] = q;
        }
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
}
