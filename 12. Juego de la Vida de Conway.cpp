#include <iostream>
#include <cstdlib>   

using namespace std;

const int N = 10; 

void inicializarTablero(int tablero[N][N]) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            tablero[i][j] = rand() % 2; 
        }
    }
}

void imprimirTablero(int tablero[N][N]) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << tablero[i][j] << " ";
        }
        cout << endl;
    }
}

void siguienteGeneracion(int tablero[N][N], int nuevoTablero[N][N]) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            int vecinosVivos = 0;
            for (int ni = -1; ni <= 1; ++ni) {
                for (int nj = -1; nj <= 1; ++nj) {
                    if (ni == 0 && nj == 0) continue; 
                    int filaVecino = i + ni;
                    int colVecino = j + nj;
                    if (filaVecino >= 0 && filaVecino < N && colVecino >= 0 && colVecino < N) {
                        vecinosVivos += tablero[filaVecino][colVecino];
                    }
                }
            }

            if (tablero[i][j] == 1) {
                if (vecinosVivos < 2 || vecinosVivos > 3) {
                    nuevoTablero[i][j] = 0; 
                } else {
                    nuevoTablero[i][j] = 1; 
                }
            } else {
                if (vecinosVivos == 3) {
                    nuevoTablero[i][j] = 1; 
                } else {
                    nuevoTablero[i][j] = 0; 
                }
            }
        }
    }
}

int main() {
    int tablero[N][N];
    int nuevoTablero[N][N];

    inicializarTablero(tablero);

    siguienteGeneracion(tablero, nuevoTablero);

    cout << "Tablero inicial y segunda generacion:" << endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << tablero[i][j] << " ";
        }
        cout << " | ";
        for (int j = 0; j < N; ++j) {
            cout << nuevoTablero[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

