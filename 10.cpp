// Multiplicar un vector por un escalar.

#include <iostream>
using namespace std;

int main() {
    int n, escalar;
    cout << "Ingrese el tamaño del vector: ";
    cin >> n;
    int vector[n];
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> vector[i];
    }
    cout << "Ingrese el escalar: ";
    cin >> escalar;
    for (int i = 0; i < n; i++) {
        vector[i] *= escalar;
    }
    cout << "El vector resultante es: ";
    for (int i = 0; i < n; i++) {
        cout << vector[i] << " ";
    }
}