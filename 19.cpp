#include <iostream>

using namespace std;

int main()
{
  int n;
  cout << "Ingrese el tamaño del vector: ";
  cin >> n;
  int A[n];
  A[0] = 5;
  A[1] = 1;
  for (int i = 2; i < n; i++)
  {
    if (i % 2 == 0)
    {
      A[i] = A[i - 2] + 1;
    }
    else
    {
      A[i] = A[i - 2] + A[i - 1];
    }
  }
  cout << "Array A: ";
  for (int i = 0; i < n; i++)
  {
    cout << A[i] << " ";
  }

  return 0;
}
