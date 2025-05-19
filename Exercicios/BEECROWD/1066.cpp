#include <iostream>
#include <cstdio>

using namespace std;

int main() {
  int valorPar = 0, valorImpar = 0, valorPosi = 0, valorNega = 0;

  int valores[5];
  for (int i = 0; i < 5; i++) {
    cin >> valores[i];
    if (valores[i] % 2 == 0) {
      valorPar++;
    }else{
      valorImpar++;
    }if (valores[i] > 0) {
      valorPosi++;
    }else if (valores[i] < 0) {
      valorNega++;
    }
  }
  printf("%d valor(es) par(es)\n", valorPar);
  printf("%d valor(es) impar(es)\n", valorImpar);
  printf("%d valor(es) positivo(s)\n", valorPosi);
  printf("%d valor(es) negativo(s)\n", valorNega);
}