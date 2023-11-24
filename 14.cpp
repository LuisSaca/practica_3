// Dado un vector V de N elementos enteros positivos, invertir el orden de sus elementos sin utilizar vectores auxiliares.
// Si N = 5
// V[i]= 5 7 12 4 0
// Entonces el vector resultante muestra los siguientes números: 0, 4, 12, 7, 5

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamaño del vector: ";
    cin >> n;
    int V[n];
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> V[i];
    }
    cout << "El vector resultante es: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << V[i] << " ";
    }
}