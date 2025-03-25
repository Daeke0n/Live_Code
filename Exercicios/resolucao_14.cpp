
#include <iostream>
using namespace std;
#include <cmath>

int main () {

  float xb = 2;
  float xa = 5;

  float yb = 7;
  float ya = 9;

  float xtotal = pow((xb - xa), 2);
  float ytotal = pow((yb - ya), 2);

  cout << "A distancia dos pontos e: " << pow((xtotal + ytotal), 0.5);

}