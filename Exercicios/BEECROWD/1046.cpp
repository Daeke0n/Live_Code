#include <iostream>
#include <cstdio>

using namespace std;

int main() {
  int horaInicial, horaFinal;
  cin >> horaInicial >> horaFinal;

  int duracao;

  if(horaFinal > horaInicial) {
    duracao = horaFinal - horaInicial;
  }else if(horaFinal < horaInicial) {
    duracao = (24 - horaInicial) + horaFinal;
  }else {
    duracao = 24;
  }

  printf("O JOGO DUROU %d HORA(S)\n", duracao);
}