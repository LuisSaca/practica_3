// Llenar un vector V, con la siguiente serie: 2 ,2² ,2³ ,2⁴,…….2^n
// Si N=5
// S[i]= 2 4 8 16 32
// Entonces el vector resultante muestra los siguientes números: 2, 4, 8, 16, 32

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamaño del vector: ";
    cin >> n;
    int V[n];
    for (int i = 0; i < n; i++) {
        V[i] = 1;
        for (int j = 0; j < i + 1; j++) {
            V[i] *= 2;
        }
    }
    cout << "El vector resultante es: ";
    for (int i = 0; i < n; i++) {
        cout << V[i] << " ";
    }
}