#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  string nome;
  printf("Insira o seu nome: \n");
  cin >> nome;

  double nota;
  printf("Insira a nota: \n");
  cin >> nota;

  int frequencia;
  printf("Insira a sua frequencia: \n");
  cin >> frequencia;

  if (nota >= 7 && frequencia >= 20) {
    printf("Voce esta aprovado!");
  }else if (nota >= 5 && nota < 7 && frequencia >= 20) {
    printf("Voce esta de recuperacao!");
  }else {
    printf("Voce esta reprovado!");
  }
}