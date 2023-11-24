// Intercambiar el segundo elemento con el penúltimo elemento de un vector, los numeros deben ser ingresados por el usuario.

#include <iostream>
using namespace std;

int main() {
    int n, aux;
    cout << "Ingrese el tamaño del vector: ";
    cin >> n;
    int vector[n];
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> vector[i];
    }
    aux = vector[1];
    vector[1] = vector[n - 2];
    vector[n - 2] = aux;
    cout << "El vector resultante es: ";
    for (int i = 0; i < n; i++) {
        cout << vector[i] << " ";
    }
}