
#include <iostream>
using namespace std;
#include <cmath>

int main () {

  float v;
  float m;

  cout << "digite o valor da massa: " ;
  cin >> m;

  cout << "Digite o valor da velocidade:" ;
  cin >> v;

  cout << "O valor da energia cinetica e: " << (m * pow(v,2)) /2 << endl;

}