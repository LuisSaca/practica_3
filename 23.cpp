// Dado un vector V de tamaño N, leer un elemento T, eliminar los elementos del vector que son iguales a T; no debe existir espacios vacíos.
// ejemplo
// Si N=9
// B[i]= 3 4 5 2 1 7 4 2 4
// T = 4 entonces el vector nuevo será:
// B[i]= 3 5 2 1 7 2

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
    int t;
    cout << "Ingrese el elemento a eliminar: ";
    cin >> t;
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (V[i] != t) {
            V[j] = V[i];
            j++;
        }
    }
    n = j;
    cout << "El vector nuevo es: ";
    for (int i = 0; i < n; i++) {
        cout << V[i] << " ";
    }
    cout << endl;
}