#include <iostream>
using namespace std;

const int FILAS = 2;
const int COLUMNAS = 3;

void mostrarMatriz(const int m[][COLUMNAS], int nrofilas, int nrocols);
void cuadradoMatriz(int m[][COLUMNAS], int nrofilas, int nrocols);

int main() {
    int matriz[FILAS][COLUMNAS] = {{1, 2, 3}, {4, 5, 6}};
    mostrarMatriz(matriz, FILAS, COLUMNAS);
    cuadradoMatriz(matriz, FILAS, COLUMNAS);
    mostrarMatriz(matriz, FILAS, COLUMNAS);
    return 0;
}

void mostrarMatriz(const int m[][COLUMNAS], int nrofilas, int nrocols) {
    cout << "Mostrando matriz: \n";
    for (int fila = 0; fila < nrofilas; ++fila) {
        for (int col = 0; col < nrocols; ++col)
            cout << m[fila][col] << " ";
        cout << "\n";
    }
    cout << "\n";
}

void cuadradoMatriz(int m[][COLUMNAS], int nrofilas, int nrocols) {
    for (int fila = 0; fila < nrofilas; ++fila) {
        for (int col = 0; col < nrocols; ++col)
            m[fila][col] *= m[fila][col];
    }
}
