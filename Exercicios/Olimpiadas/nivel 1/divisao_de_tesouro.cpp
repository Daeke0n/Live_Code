#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  int q_marinheiro;
  int moedas;

  cin>>moedas;
  cin>>q_marinheiro;


  int result_marinheiro = moedas / (q_marinheiro + 2);
  int capitao = result_marinheiro * 2;

  printf(" %d\n", capitao);
}