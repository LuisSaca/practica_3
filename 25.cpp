// Definir dimensión del vector e ingresar números naturales para:
// • a). mostrar vector ingresado.
// • b). mostrar vector ordenado de forma Ascendente.
// • c). mostrar vector ordenado de forma descendente


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
    cout << "El vector ingresado es: ";
    for (int i = 0; i < n; i++) {
        cout << V[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (V[j] < V[min]) {
                min = j;
            }
        }
        int aux = V[i];
        V[i] = V[min];
        V[min] = aux;
    }
    cout << "El vector ordenado de forma ascendente es: ";
    for (int i = 0; i < n; i++) {
        cout << V[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n - 1; i++) {
        int max = i;
        for (int j = i + 1; j < n; j++) {
            if (V[j] > V[max]) {
                max = j;
            }
        }
        int aux = V[i];
        V[i] = V[max];
        V[max] = aux;
    }
    cout << "El vector ordenado de forma descendente es: ";
    for (int i = 0; i < n; i++) {
        cout << V[i] << " ";
    }
    cout << endl;
}