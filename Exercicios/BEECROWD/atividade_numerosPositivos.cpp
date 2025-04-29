#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    const int tam = 6;
    double valores[tam];
    int positivos = 0;

    for (int i = 0; i < tam ; i++ ) {
        cin >> valores[i];
        if (valores[i] > 0) {
            positivos++;
        }
    }

    cout << "" << positivos << " valores positivos" << endl;
}
