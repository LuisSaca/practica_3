// Leer dos vectores A y B de N elementos, comparar y contar los elementos con respecto al primer vector, cuántos elementos son iguales, son menores o mayores. Desplegar resultados.
// Sean los vectores A y B con N= 8
// ejemplo:
// A: 5 3 54 65 2 1 11 21
// B: 2 23 54 1 88 3 9 23 
// mayor: 3
// menor: 4
// igual: 1

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamaño de los vectores: ";
    cin >> n;
    int A[n], B[n];
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el elemento " << i + 1 << " del vector A: ";
        cin >> A[i];
    }
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el elemento " << i + 1 << " del vector B: ";
        cin >> B[i];
    }
    int mayor = 0, menor = 0, igual = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] > B[i]) {
            mayor++;
        } else if (A[i] < B[i]) {
            menor++;
        } else {
            igual++;
        }
    }
    cout << "mayor: " << mayor << endl;
    cout << "menor: " << menor << endl;
    cout << "igual: " << igual << endl;
}