#include <iostream>
#include <cstdlib>

using namespace std;

int main () {

  //sensor 1 == 11 sensor 2 == 23 sensor 3 = 36

  int dt;
  cin >> dt;

  int dr = dt - 3;
  int df = dr % 8;

  if(df == 3) {
    printf("1\n");
  }else if(df == 4) {
    printf("2\n");
  }else if(df == 5) {
    printf("3\n");
  }else {
    printf("nao acertou nenhum sensor!\n");
  }

}