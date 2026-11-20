#include <iostream>
using namespace std;
const int MAX = 50;

int extraerImpares(const int v[], int n, int impares[]) {
    int cantidad = 0;
    for (int i = 0; i < n; ++i)
        if (v[i] % 2 != 0) impares[cantidad++] = v[i];
    return cantidad;
}
int main() {
    int v[MAX], impares[MAX], n;
    do { cout << "Cantidad de elementos (1-" << MAX << "): "; cin >> n; }
    while (n < 1 || n > MAX);
    cout << "Ingrese los " << n << " elementos: ";
    for (int i = 0; i < n; ++i) cin >> v[i];

    int k = extraerImpares(v, n, impares);

    cout << "Vector de impares (" << k << " elementos): ";
    for (int i = 0; i < k; ++i) cout << impares[i] << " ";
    cout << endl;
    return 0;
}
