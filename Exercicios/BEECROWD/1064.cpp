#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    const int tam = 6;
    double valores[tam];
    int positivos = 0;
    double soma = 0;

    for (int i = 0; i < tam ; i++ ) {
        cin >> valores[i];
        if (valores[i] > 0) {
            positivos++;
        soma += valores[i];
        }
    }

    double result = soma / positivos;

    cout << "" << positivos << " valores positivos" << endl;
    printf ("%.1f\n" , result);
}
