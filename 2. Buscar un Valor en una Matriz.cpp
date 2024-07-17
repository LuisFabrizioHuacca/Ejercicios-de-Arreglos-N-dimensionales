#include <iostream>
using namespace std;

int main() {
    int matriz[3][3];
    int valor;

    // Ingresar elementos de la matriz
    cout << "Ingrese los elementos de la matriz (3x3):" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matriz[i][j];
        }
    }

    // Ingresar el valor a buscar
    cout << "Ingrese el valor a buscar: ";
    cin >> valor;

    // Buscar el valor en la matriz
    cout << "El valor " << valor << " se encuentra en:" << endl;
    bool encontrado = false;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] == valor) {
                cout << "Fila " << i << ", Columna " << j << endl;
                encontrado = true;
            }
        }
    }

    if (!encontrado) {
        cout << "El valor " << valor << " no se encuentra en la matriz." << endl;
    }

    return 0;
}

