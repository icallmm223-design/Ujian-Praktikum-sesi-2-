#include <iostream>

using namespace std;

int main() {
    int matriks[4][4];
    int angka = 1;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matriks[i][j] = angka;
            angka++;
        }
    }

    cout << "Matriks 4x4 :" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matriks[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
