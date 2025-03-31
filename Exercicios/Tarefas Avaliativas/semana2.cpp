#include <iostream>
#include <cstdlib>

using namespace std;

int main () {

  int idade;
  string nome;

  cin >> idade >> nome;

  printf("Idade: %d\n", idade);
  printf("Nome: %s\n", nome.c_str());

}