#include <iostream>
using namespace std;
const int MAX = 6;

int leerOrden() {
    int n;
    do { cout << "Orden n de la matriz (2-" << MAX << "): "; cin >> n; }
    while (n < 2 || n > MAX);
    return n;
}
void leerMatriz(int m[][MAX], int n) {
    for (int i = 0; i < n; ++i) {
        cout << "Fila " << i + 1 << ": ";
        for (int j = 0; j < n; ++j) cin >> m[i][j];
    }
}
bool esSimetrica(const int m[][MAX], int n) {
    for (int i = 0; i < n; ++i)
        for (int j = i + 1; j < n; ++j)
            if (m[i][j] != m[j][i]) return false;
    return true;
}
int main() {
    int m[MAX][MAX];
    int n = leerOrden();
    leerMatriz(m, n);
    if (esSimetrica(m, n)) cout << "La matriz es simétrica." << endl;
    else cout << "La matriz NO es simétrica." << endl;
    return 0;
}
