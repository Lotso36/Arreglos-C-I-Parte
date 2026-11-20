#include <iostream>
using namespace std;
const int MAX = 50;

bool estaOrdenado(const int v[], int n) {
    for (int i = 0; i < n - 1; ++i)
        if (v[i] > v[i + 1]) return false;
    return true;
}
int main() {
    int v[MAX], n;
    do { cout << "Cantidad de elementos (1-" << MAX << "): "; cin >> n; }
    while (n < 1 || n > MAX);
    cout << "Ingrese los " << n << " elementos: ";
    for (int i = 0; i < n; ++i) cin >> v[i];

    cout << (estaOrdenado(v, n) ? "TRUE" : "FALSE") << endl;
    return 0;
}
