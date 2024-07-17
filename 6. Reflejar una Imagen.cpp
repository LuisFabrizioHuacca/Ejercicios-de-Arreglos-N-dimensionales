#include <iostream>
using namespace std;

int main() {
    const int N = 6; 
    int matriz[N][N];

    cout << "Ingrese los elementos de la matriz " << N << "x" << N << ":" << endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> matriz[i][j];
        }
    }

    cout << "Matriz original      | Matriz reflejada horizontalmente:" << endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << "   |   ";
        for (int j = N - 1; j >= 0; --j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


