#include <iostream>
#include <iomanip>
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
void transponer(const int m[][MAX], int t[][MAX], int n) {
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j) t[j][i] = m[i][j];
}
int main() {
    int m[MAX][MAX], t[MAX][MAX];
    int n = leerOrden();
    leerMatriz(m, n);
    transponer(m, t, n);
    cout << "Matriz transpuesta:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) cout << setw(4) << t[i][j];
        cout << endl;
    }
    return 0;
}
