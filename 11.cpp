// Obtener el producto escalar de dos vectores

#include <iostream>
using namespace std;

int main() {
    int n, producto = 0;
    cout << "Ingrese el tamaño de los vectores: ";
    cin >> n;
    int A[n], B[n];
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el elemento " << i + 1 << " del vector A: ";
        cin >> A[i];
    }
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el elemento " << i + 1 << " del vector B: ";
        cin >> B[i];
    }
    for (int i = 0; i < n; i++) {
        producto += A[i] * B[i];
    }
    cout << "El producto escalar de los vectores es: " << producto << endl;
}