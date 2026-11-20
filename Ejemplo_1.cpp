#include <iostream>
using namespace std;

void elevarAlCuadrado(int numeros[], int cantidadNumeros) {
    for (int i = 0; i < cantidadNumeros; ++i) {
        numeros[i] *= numeros[i];
    }
}

void mostrarNumeros(const int numeros[], int cantidadNumeros) {
    for (int i = 0; i < cantidadNumeros; ++i) {
        cout << numeros[i] << " ";
    }
    cout << endl;
}

int main() {
    const int TAMANO_VECTOR = 5;
    int numeros[TAMANO_VECTOR] = {3, 7, 12, 15, 25};
    elevarAlCuadrado(numeros, TAMANO_VECTOR);
    mostrarNumeros(numeros, TAMANO_VECTOR);
    return 0;
}
