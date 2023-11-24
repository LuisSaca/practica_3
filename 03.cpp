// Dado un vector de dimensión N, ingresar números enteros por teclado y sumar solamente sus elementos múltiplos de 3, mostrar por pantalla.

#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;
    cout << "Ingrese la dimension del vector: ";
    cin >> n;
    int vector[n];
    for (int i = 0; i < n; i++) {
        cout << "Ingrese un numero: ";
        cin >> vector[i];
        if (vector[i] % 3 == 0) {
            suma += vector[i];
        }
    }
    cout << "La suma de los elementos multiplos de 3 es: " << suma << endl;
}
