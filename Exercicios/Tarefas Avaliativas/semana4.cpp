#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  int numero;
  printf("Insira um numero: ");
  cin >> numero;

  if (numero > 1 && numero < 100) {
    printf("Numero valido!\n");
  }else {
    printf("Numero invalido!\n");
  }
}