// Llenar un vector X con N elementos enteros positivos y mostrar los números iguales a Y.
// Si: N = 5; Y= 13
// X[i ]= 6 13 0 10 13
// se debe mostrar: 13,13

#include <iostream>
using namespace std;

int main() {
    int n, y;
    cout << "Ingrese el tamaño del vector: ";
    cin >> n;
    int X[n];
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> X[i];
    }
    cout << "Ingrese el valor de Y: ";
    cin >> y;
    cout << "Los numeros iguales a Y son: ";
    for (int i = 0; i < n; i++) {
        if (X[i] == y) {
            cout << X[i] << ", ";
        }
    }
}