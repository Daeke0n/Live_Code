#include <iostream>

using namespace std;

int main() {

  int i;

  cin >> i;

  int ano = i / 365;
  int sobra = i % 365;
  int mes = sobra / 30;
  int dia = sobra % 30;

  cout << ano << " ano(s)" << endl;
  cout << mes << " mes(es)" << endl;
  cout << dia << " dia(s)" << endl;

}