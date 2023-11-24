// Llenar el vector A[], hallar y mostrar el elemento menor del vector A[] y posteriormente sumar este valor a los elementos pares del vector A[]
// A[i] = 3 8 2 6 ---- menor=2 ----> A[i] = 3 10 4 8

#include <iostream>
using namespace std;

int main() {
    int n, menor;
    cout << "Ingrese el tamaño del vector: ";
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> A[i];
    }
    menor = A[0];
    for (int i = 0; i < n; i++) {
        if (A[i] < menor) {
            menor = A[i];
        }
    }
    cout << "El elemento menor del vector es: " << menor << endl;
    for (int i = 0; i < n; i++) {
        if (A[i] % 2 == 0) {
            A[i] += menor;
        }
    }
    cout << "El vector resultante es: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
}