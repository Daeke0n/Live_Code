#include <iostream>
#include <cstdlib>

using namespace std;

int main () {

  //sensor 1 == 11 sensor 2 == 23 sensor 3

  int dt;
  printf("Digite a distancia total: ");
  cin >> dt;

  int dr = dt - 3;
  int df = dr % 8;

  if(df == 3) {
    printf("Acertou o sensor 1\n");
  }else if(df == 4) {
    printf("Acertou o sensor 2\n");
  }else if(df == 5) {
    printf("Acertou o sensor 3\n");
  }else {
    printf("nao acertou nenhum sensor!\n");
  }

}