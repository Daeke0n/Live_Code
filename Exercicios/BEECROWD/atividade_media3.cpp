#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

  double n1, n2, n3, n4;

  cin >> n1 >> n2 >> n3 >> n4;

  double media = ((n1*2) + (n2*3) + (n3*4) + (n4*1)) /10;

  printf("Media: %.1f\n",media);

  if (media >= 7.0){
    printf("Aluno aprovado.\n");
  }else if(media < 5.0){
    printf("Aluno reprovado.\n");
  }else if(media >= 5.0 && media <= 6.9) {
    printf("Aluno em exame.\n");
    double notaexame;

    cin >> notaexame;

    printf("Nota do exame: %.1f\n", notaexame);

    double mediafinal = (media + notaexame) /2;
      if (mediafinal >= 5.0) {
      printf("Aluno aprovado.\n");
      printf("Media final: %.1f\n", mediafinal);
    }else {
      printf("Aluno reprovado.\n");
      printf("Media final: %.1f\n", mediafinal);
    }
  }
}