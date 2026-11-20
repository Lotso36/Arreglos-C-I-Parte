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
bool existeSumaDeLosDemas(const int v[], int n, int &valor) {
    int total = 0;
    for (int i = 0; i < n; ++i) total += v[i];
    for (int i = 0; i < n; ++i)
        if (v[i] == total - v[i]) {   // elemento = suma de los demás
            valor = v[i];
            return true;
        }
    return false;
}
int main() {
    int v[MAX], valor;
    int n = leerVector(v);
    if (existeSumaDeLosDemas(v, n, valor))
        cout << "Elemento igual a la suma de los demás: " << valor << endl;
    else
        cout << "Ningún elemento cumple la propiedad." << endl;
    return 0;
}
