// Leer un vector A de N elementos mayores a 10 y determinar cuántos de ellos son múltiplos de 3 desplegar el resultado.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de elementos del vector: ";
    cin >> n;
    int vector[n];
    for (int i = 0; i < n; i++) {
        cout << "Ingrese un numero: ";
        cin >> vector[i];
    }
    int contador = 0;
    for (int i = 0; i < n; i++) {
        if (vector[i] > 10 && vector[i] % 3 == 0) {
            contador++;
        }
    }
    cout << "La cantidad de numeros mayores a 10 y multiplos de 3 es: " << contador << endl;
}