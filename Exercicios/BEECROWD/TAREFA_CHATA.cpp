#include <iostream>

using namespace std;

int main () {

  int n;

  cin >> n;

  int d1 = n / 100;
  int d2 = n % 100;
  int d3 = d2 / 50;
  int d4 = d2 % 50;
  int d5 = d4 / 20;
  int d6 = d4 % 20;
  int d7 = d6 / 10;
  int d8 = d6 % 10;
  int d9 = d8 / 5;
  int d10 = d8 % 5;
  int d11 = d10 / 2;
  int d12 = d10 % 2;
  int d13 = d12 / 1;
  int d14 = d12 % 1;

  cout << n << endl;
  cout << d1 << " nota (s) de R$ 100,00" << endl;
  cout << d3 << " nota (s) de R$ 50,00" << endl;
  cout << d5 << " nota (s) de R$ 20,00" << endl;
  cout << d7 << " nota (s) de R$ 10,00" << endl;
  cout << d9 << " nota (s) de R$ 5,00" << endl;
  cout << d11 << " nota (s) de R$ 2,00" << endl;
  cout << d13 << " nota (s) de R$ 1,00" << endl;


}