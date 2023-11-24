// Dado un vector de tamaño N, ingresar números enteros por teclado y reemplazar los valores pares por ceros.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la dimension del vector: ";
    cin >> n;
    int vector[n];
    for (int i = 0; i < n; i++) {
        cout << "Ingrese un numero: ";
        cin >> vector[i];
        if (vector[i] % 2 == 0) {
            vector[i] = 0;
        }
    }
    cout << "El vector resultante es: ";
    for (int i = 0; i < n; i++) {
        cout << vector[i] << " ";
    }
    cout << endl;
}