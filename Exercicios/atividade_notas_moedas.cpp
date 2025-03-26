#include <iostream>

using namespace std;

int main () {

    float m;

    cin >> m;

    int n = m * 100;


    int d1 = n / 10000;
    int d2 = n % 10000;
    int d3 = d2 / 5000;
    int d4 = d2 % 5000;
    int d5 = d4 / 2000;
    int d6 = d4 % 2000;
    int d7 = d6 / 1000;
    int d8 = d6 % 1000;
    int d9 = d8 / 500;
    int d10 = d8 % 500;
    int d11 = d10 / 200;
    int d12 = d10 % 200;
    int d13 = d12 / 100;
    int d14 = d12 % 100;
    int m1 = d14 / 50;
    int m2 = d14 % 50;
    int m3 = m2 / 25;
    int m4 = m2 % 25;
    int m5 = m4 / 10;
    int m6 = m4 % 10;
    int m7 = m6 / 5;
    int m8 = m6 % 5;
    int m9 = m8 / 1;
    int m10 = m8 % 1;


    cout << "NOTAS: " << endl;
    cout << d1 << " nota(s) de R$ 100,00 " << endl;
    cout << d3 << " nota(s) de R$ 50,00 " << endl;
    cout << d5 << " nota(s) de R$ 20,00 " << endl;
    cout << d7 << " nota(s) de R$ 10,00 " << endl;
    cout << d9 << " nota(s) de R$ 5,00 " << endl;
    cout << d11 << " nota(s) de R$ 2,00 " << endl;
    cout << "MOEDAS: " << endl;
    cout << d13 << " moeda(s) de R$ 1,00" << endl;
    cout << m1 << " moeda(s) de R$ 0,50" << endl;
    cout << m3 << " moeda(s) de R$ 0,25" << endl;
    cout << m5 << " moeda(s) de R$ 0,10" << endl;
    cout << m7 << " moeda(s) de R$ 0,05" << endl;
    cout << m9 << " moeda(s) de R$ 0,01" << endl;




}