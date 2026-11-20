#include <iostream>
using namespace std;

int main() {
    const int FILAS = 5;
    const int COLUMNAS = 5;
    int matriz[FILAS][COLUMNAS] = {
        {1, 3, 6, 7, 8},
        {9, 11, 17, 19, 20},
        {20, 12, 21, 13, 14},
        {14, 11, 5, 31, 45},
        {15, 1, 3, 41, 51}
    };
    cout << "Diagonal principal de la matriz:\n";
    for (int fila = 0; fila < FILAS; ++fila)
        cout << matriz[fila][fila] << endl;
    return 0;
}
