#include <iostream>
#include <iomanip>
using namespace std;
const int MAX = 6;

void leerMatriz(int m[][MAX], int n, char nombre) {
    for (int i = 0; i < n; ++i) {
        cout << nombre << ", fila " << i + 1 << ": ";
        for (int j = 0; j < n; ++j) cin >> m[i][j];
    }
}
void multiplicar(const int a[][MAX], const int b[][MAX], int c[][MAX], int n) {
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j) {
            c[i][j] = 0;
            for (int k = 0; k < n; ++k) c[i][j] += a[i][k] * b[k][j];
        }
}
int main() {
    int a[MAX][MAX], b[MAX][MAX], c[MAX][MAX], n;
    do { cout << "Orden n (2-" << MAX << "): "; cin >> n; }
    while (n < 2 || n > MAX);
    leerMatriz(a, n, 'A');
    leerMatriz(b, n, 'B');
    multiplicar(a, b, c, n);
    cout << "Producto A x B:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) cout << setw(5) << c[i][j];
        cout << endl;
    }
    return 0;
}
