// Almacenar en un vector los N primeros números primos

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamaño del vector: ";
    cin >> n;
    int A[n];
    int i = 0;
    int j = 2;
    while (i < n) {
        bool esPrimo = true;
        for (int k = 2; k < j; k++) {
            if (j % k == 0) {
                esPrimo = false;
                break;
            }
        }
        if (esPrimo) {
            A[i] = j;
            i++;
        }
        j++;
    }
    cout << "A: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}