#include <iostream>
using namespace std;

int main() {
    int matriz[4][4];
    int max_valor = INT_MIN, min_valor = INT_MAX;
    int max_fila, max_columna, min_fila, min_columna;

    cout << "Ingrese los elementos de la matriz (4x4):" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> matriz[i][j];
            if (matriz[i][j] > max_valor) {
                max_valor = matriz[i][j];
                max_fila = i;
                max_columna = j;
            }
            if (matriz[i][j] < min_valor) {
                min_valor = matriz[i][j];
                min_fila = i;
                min_columna = j;
            }
        }
    }

    cout << "Matriz ingresada:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    cout << "El valor maximo es " << max_valor << " y se encuentra en: "
         << "Fila " << max_fila << ", Columna " << max_columna << endl;

    cout << "El valor minimo es " << min_valor << " y se encuentra en: "
         << "Fila " << min_fila << ", Columna " << min_columna << endl;

    return 0;
}


