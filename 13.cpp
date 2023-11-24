// Invertir un vector y mostrar ambos vectores. los numeros y el tamaño deben ser ingresados por el usuario.

#include <iostream>
using namespace std;

int main() {
    int n, aux;
    cout << "Ingrese el tamaño del vector: ";
    cin >> n;
    int vector[n], vectorInvertido[n];
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> vector[i];
    }
    for (int i = 0; i < n; i++) {
        vectorInvertido[i] = vector[n - i - 1];
    }
    cout << "El vector original es: ";
    for (int i = 0; i < n; i++) {
        cout << vector[i] << " ";
    }
    cout << endl;
    cout << "El vector invertido es: ";
    for (int i = 0; i < n; i++) {
        cout << vectorInvertido[i] << " ";
    }
}