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
int maximo(const int m[][MAX], int n) {
    int mayor = m[0][0];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j) if (m[i][j] > mayor) mayor = m[i][j];
    return mayor;
}
int minimo(const int m[][MAX], int n) {
    int menor = m[0][0];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j) if (m[i][j] < menor) menor = m[i][j];
    return menor;
}
int main() {
    int m[MAX][MAX];
    int n = leerOrden();
    leerMatriz(m, n);
    cout << "Valor mayor: " << maximo(m, n) << endl;
    cout << "Valor menor: " << minimo(m, n) << endl;
    return 0;
}
