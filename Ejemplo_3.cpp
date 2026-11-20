#include <iostream>
using namespace std;

int main() {
    const int TAMANO = 10;
    int valores[TAMANO] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int sumatoria = 0;
    for (int indice = 0; indice < TAMANO; ++indice)
        sumatoria += valores[indice];
    cout << "El total de la sumatoria es: " << sumatoria << endl;
    return 0;
}
