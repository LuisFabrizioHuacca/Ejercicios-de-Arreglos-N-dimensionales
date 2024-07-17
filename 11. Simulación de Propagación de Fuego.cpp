#include <iostream>
#include <cstdlib>
using namespace std;

const int FILAS=10;
const int COLUMNAS=10;

int seed=12345; 
int simpleRand(int limit) {
    seed=(1103515245*seed+12345) % 2147483648;
    return seed % limit;
}

void inicializarBosque(int bosque[FILAS][COLUMNAS]) {
    for (int i=0;i<FILAS;i++) {
        for(int j=0;j<COLUMNAS;j++) {
            bosque[i][j]=simpleRand(2); 
    }
}
}

void mostrarBosque(int bosque[FILAS][COLUMNAS]) {
    cout <<"Estado inicial del bosque:\n";
    for (int i=0;i<FILAS;i++) {
        for (int j = 0;j<COLUMNAS;j++) {
            cout<<bosque[i][j]<<' ';
        }
        cout<<endl;
    }
}

void propagarFuego(int bosque[FILAS][COLUMNAS]) {
    int vecinosX[]={-1, 0, 1, 0}; 
    int vecinosY[]={0, -1, 0, 1}; 

    int nuevoBosque[FILAS][COLUMNAS]; 


    for (int i=0;i<FILAS;i++) {
        for (int j=0;j<COLUMNAS;j++) {
            nuevoBosque[i][j]=bosque[i][j];
        }
    }

    for (int i=0;i<FILAS; i++) {
        for (int j=0;j<COLUMNAS;j++) {
            if (bosque[i][j]==0) {
                
                for (int k=0;k<4;k++) {
                    int ni=i+vecinosX[k];
                    int nj=j+vecinosY[k];
                    if (ni >= 0 && ni < FILAS && nj>=0 && nj<COLUMNAS && bosque[ni][nj]==1) {
                        nuevoBosque[i][j]=1; 
                        break;
                    }
                }
            } else if (bosque[i][j]==1) { 
                nuevoBosque[i][j]=2; 
            }
           
        }
    }

    for (int i=0;i<FILAS;i++) {
        for (int j=0;j<COLUMNAS;j++) {
            bosque[i][j]=nuevoBosque[i][j];
        }
    }
}

int main() {
    int bosque[FILAS][COLUMNAS];

    inicializarBosque(bosque);
    mostrarBosque(bosque);

    cout<<endl;
    propagarFuego(bosque);
    mostrarBosque(bosque);

    return 0;
}
