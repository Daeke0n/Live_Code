
#include <iostream>
using namespace std;
#include <cmath>

int main () {

 float r;

 cout << "Qual o valor do raio: " << endl;
 cin >> r;

 cout << "O volume da esfera e: " << (4 * M_PI * pow(r,3)) /3 << endl;

}