// Hacer un programa que almacene un vector con los primeros 5 numeros enteros y mostrar en antalla en orden ascendente.
// vector original: 5 6 9 2 4 
// vector resultante: 2 4 5 6 9

#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int vector[n];
    for (int i = 0; i < n; i++) {
        cout << "Ingrese un numero: ";
        cin >> vector[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n - 1; j++) {
            if (vector[i] > vector[j + 1]) {
                int aux = vector[i];
                vector[i] = vector[j + 1];
                vector[j + 1] = aux;
            }
        }
    }
    cout << "El vector resultante es: ";
    for (int i = 0; i < n; i++) {
        cout << vector[i] << " ";
    }
    cout << endl;
}