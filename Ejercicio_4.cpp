#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
const int MAX = 10;

int leerDimension(const char nombre[]) {
    int d;
    do { cout << "Número de " << nombre << " (1-" << MAX << "): "; cin >> d; }
    while (d < 1 || d > MAX);
    return d;
}
void llenarMatriz(int m[][MAX], int filas, int cols) {
    for (int i = 0; i < filas; ++i)
        for (int j = 0; j < cols; ++j)
            m[i][j] = rand() % 101;          // rango [0, 100]
}
void mostrarMatriz(const int m[][MAX], int filas, int cols) {
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < cols; ++j) cout << setw(4) << m[i][j];
        cout << endl;
    }
}
int main() {
    int m[MAX][MAX];
    srand(time(0));
    int filas = leerDimension("filas"), cols = leerDimension("columnas");
    llenarMatriz(m, filas, cols);
    cout << "Matriz generada:\n";
    mostrarMatriz(m, filas, cols);
    return 0;
}
