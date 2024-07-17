#include <iostream>
using namespace std;

int main() {
    const int N = 5; 
    int matriz[N][N];

    cout << "Ingrese los elementos de la matriz " << N << "x" << N << ":" << endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> matriz[i][j];
        }
    }

    cout << "Matriz ingresada:" << endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Recorrido en espiral:" << endl;
    int fila_inicio = 0, fila_fin = N - 1;
    int col_inicio = 0, col_fin = N - 1;

    while (fila_inicio <= fila_fin && col_inicio <= col_fin) {
        for (int j = col_inicio; j <= col_fin; ++j) {
            cout << matriz[fila_inicio][j] << " ";
        }
        fila_inicio++;

        for (int i = fila_inicio; i <= fila_fin; ++i) {
            cout << matriz[i][col_fin] << " ";
        }
        col_fin--;

        if (fila_inicio <= fila_fin) {
            for (int j = col_fin; j >= col_inicio; --j) {
                cout << matriz[fila_fin][j] << " ";
            }
            fila_fin--;
        }

        if (col_inicio <= col_fin) {
            for (int i = fila_fin; i >= fila_inicio; --i) {
                cout << matriz[i][col_inicio] << " ";
            }
            col_inicio++;
        }
    }

    cout << endl;

    return 0;
}

