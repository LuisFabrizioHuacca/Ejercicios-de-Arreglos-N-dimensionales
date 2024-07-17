#include <iostream>
using namespace std;

int main() {
    int matriz[4][4];
    int sumaDiagonalPrincipal = 0;
    int sumaDiagonalSecundaria = 0;

    cout << "Ingrese los elementos de la matriz (4x4):" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        sumaDiagonalPrincipal += matriz[i][i];
        sumaDiagonalSecundaria += matriz[i][3 - i];
    }

    cout << "Suma de la diagonal principal: " << sumaDiagonalPrincipal << endl;
    cout << "Suma de la diagonal secundaria: " << sumaDiagonalSecundaria << endl;
    cout << "Suma total de las diagonales: " << sumaDiagonalPrincipal + sumaDiagonalSecundaria << endl;

    return 0;
}

