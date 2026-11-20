#include <iostream>
using namespace std;

const int N = 10;

void copiarMultiplicado(const int origen[], int destino[], int factor) {
    for (int i = 0; i < N; ++i)
        destino[i] = origen[i] * factor;
}

int main() {
    int original[N], copia[N], factor;
    cout << "Ingrese " << N << " elementos: ";
    for (int i = 0; i < N; ++i)
        cin >> original[i];
    cout << "Ingrese el número n (multiplicador): ";
    cin >> factor;

    copiarMultiplicado(original, copia, factor);

    cout << "Segundo vector: ";
    for (int i = 0; i < N; ++i)
        cout << copia[i] << " ";
    cout << endl;
    return 0;
}
