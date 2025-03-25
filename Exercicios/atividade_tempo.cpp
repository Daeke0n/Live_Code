#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    int horas = n / 3600;
    int restantes = n % 3600;
    int minutos = restantes / 60;
    int segundos = n % 60;

    cout << horas << ":" << minutos << ":" << segundos << endl;


    return 0;
}