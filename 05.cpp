// serie fibonacci hasta 15
#include <iostream>
using namespace std;

int main() {
    int n = 15;
    int vector[n];
    vector[0] = 0;
    vector[1] = 1;
    for (int i = 2; i < n; i++) {
        vector[i] = vector[i - 1] + vector[i - 2];
    }
    cout << "La serie fibonacci hasta 15 es: ";
    for (int i = 0; i < n; i++) {
        cout << vector[i] << " ";
    }
    cout << endl;
}