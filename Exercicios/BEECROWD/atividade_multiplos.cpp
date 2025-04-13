#include <iostream>
#include <cstdlib>

using namespace std;

int main () {
  int a, b;
  cin >> a >> b;

  int resta = a % b;
  int restb = b % a;

  if (resta == 0 || restb == 0) {
    printf("Sao Multiplos\n");
  }else {
    printf("Nao sao Multiplos\n");
  }
}