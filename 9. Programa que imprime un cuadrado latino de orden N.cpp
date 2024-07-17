#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Ingrese el orden N del cuadrado latino: ";
    cin >> N;

    cout << "Cuadrado latino de orden " << N << ":" << endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            int num = (i + j) % N + 1;
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}

