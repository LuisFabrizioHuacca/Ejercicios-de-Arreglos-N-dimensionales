#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int SIZE = 10;

void inicializarTablero(int tablero[][SIZE]) {
    srand(time(nullptr)); 

    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            tablero[i][j] = rand() % 2; 
        }
    }
}

void contarMinasAdyacentes(const int tablero[][SIZE], int minasAdyacentes[][SIZE]) {
    int dirI[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dirJ[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (tablero[i][j] == 1) {
                for (int d = 0; d < 8; ++d) {
                    int ni = i + dirI[d];
                    int nj = j + dirJ[d];
                    if (ni >= 0 && ni < SIZE && nj >= 0 && nj < SIZE) {
                        minasAdyacentes[ni][nj]++;
                    }
                }
            }
        }
    }
}

void imprimirTablero(const int tablero[][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << tablero[i][j] << " ";
        }
        cout << endl;
    }
}

void imprimirTableroMinas(const int minasAdyacentes[][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << minasAdyacentes[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int tablero[SIZE][SIZE] = {0};
    int minasAdyacentes[SIZE][SIZE] = {0};

    inicializarTablero(tablero);
    contarMinasAdyacentes(tablero, minasAdyacentes);

    cout << "Tablero Original (0 = vacio, 1 = mina):" << endl;
    imprimirTablero(tablero);

    cout << "\nTablero de Minas Adyacentes:" << endl;
    imprimirTableroMinas(minasAdyacentes);

    return 0;
}

