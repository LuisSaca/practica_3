// Obtener el producto escalar de dos vectores
// A[i]= 8 5 9 5 1
// B[i]= 5 4 7 2 2
// S= 8*5 + 5*4 + 9*7 + 5*2 + 1*2

#include <iostream>
using namespace std;

int main() {
    int n, escalar;
    cout << "Ingrese el tamaño del vector: ";
    cin >> n;
    int A[n], B[n], S = 0;
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el elemento " << i + 1 << " del vector A: ";
        cin >> A[i];
    }
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el elemento " << i + 1 << " del vector B: ";
        cin >> B[i];
    }
    for (int i = 0; i < n; i++) {
        S += A[i] * B[i];
    }
    cout << "El producto escalar de los vectores es: " << S << endl;
}