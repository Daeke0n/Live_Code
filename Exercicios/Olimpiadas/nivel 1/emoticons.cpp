#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main() {
    string a;
    getline(cin, a);

    int divertido = 0;
    int chateado = 0;

    for (int i = 0; i < a.length() -2; i++) {
        if (a.substr(i, 3) == ":-)") {
            divertido++;
        }else if (a.substr(i, 3) == ":-(") {
            chateado++;
        }
    }

    if (divertido > chateado) {
        printf("divertido\n");
    }else if (chateado > divertido) {
        printf("chateado\n");
    }else {
        printf("Neutro\n");
    }
}