// Ingresar números enteros a una matriz de dimensión M*N y mostrar la cantidad de impares de la matriz.

#include <iostream>
using namespace std;

int main()
{
    int m, n, cont = 0;
    cout << "Ingrese el número de filas: ";
    cin >> m;
    cout << "Ingrese el número de columnas: ";
    cin >> n;
    int matriz[m][n];
    for (int i = 0; i < m; i++)
    {
        cout << "Ingrese los elementos de la fila " << i + 1 << endl;
        for (int j = 0; j < n; j++)
        {
            cout << "Ingrese el elemento " << j + 1 << ": ";
            cin >> matriz[i][j];
            if (matriz[i][j] % 2 != 0)
            {
                cont++;
            }
        }
    }
    cout << "La cantidad de números impares es: " << cont << endl;
    return 0;
}
