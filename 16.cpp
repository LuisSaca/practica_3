// Almacenar la serie de Fibonacci en un vector y mostrar.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamaño del vector: ";
    cin >> n;
    int vector[n];
    vector[0] = 0;
    vector[1] = 1;
    for (int i = 2; i < n; i++) {
        vector[i] = vector[i - 1] + vector[i - 2];
    }
    cout << "La serie de Fibonacci es: ";
    for (int i = 0; i < n; i++) {
        cout << vector[i] << " ";
    }
}