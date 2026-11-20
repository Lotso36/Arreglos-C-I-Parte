#include <iostream>
using namespace std;
const int MAX = 50;

int leerVector(int v[]) {
    int n;
    do { cout << "Cantidad de elementos (1-" << MAX << "): "; cin >> n; }
    while (n < 1 || n > MAX);
    cout << "Ingrese los " << n << " elementos: ";
    for (int i = 0; i < n; ++i) cin >> v[i];
    return n;
}
int posicionMaximo(const int v[], int n) {
    int pos = 0;
    for (int i = 1; i < n; ++i) if (v[i] > v[pos]) pos = i;
    return pos;
}
int posicionMinimo(const int v[], int n) {
    int pos = 0;
    for (int i = 1; i < n; ++i) if (v[i] < v[pos]) pos = i;
    return pos;
}
int main() {
    int v[MAX];
    int n = leerVector(v);
    int pMax = posicionMaximo(v, n), pMin = posicionMinimo(v, n);
    cout << "Valor máximo: " << v[pMax] << " (posición " << pMax << ")\n";
    cout << "Valor mínimo: " << v[pMin] << " (posición " << pMin << ")\n";
    return 0;
}
