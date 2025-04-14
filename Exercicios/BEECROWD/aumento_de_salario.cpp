#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  double salario;
  cin >> salario;

  if (salario > 0 && salario <= 400.00) {
    double reajuste_Salario = salario * 0.15;
    double salario_total = salario + reajuste_Salario;
    printf("Novo salario: %.2f\n", salario_total);
    printf("Reajuste ganho: %.2f\n", reajuste_Salario);
    printf("Em percentual: 15 %%\n");
  }else if (salario >= 400.01 && salario <= 800.00) {
    double reajuste_Salario = salario * 0.12;
    double salario_total = salario + reajuste_Salario;
    printf("Novo salario: %.2f\n", salario_total);
    printf("Reajuste ganho: %.2f\n", reajuste_Salario);
    printf("Em percentual: 12 %%\n");
  }else if (salario >= 800.01 && salario <= 1200.00) {
    double reajuste_Salario = salario * 0.10;
    double salario_total = salario + reajuste_Salario;
    printf("Novo salario: %.2f\n", salario_total);
    printf("Reajuste ganho: %.2f\n", reajuste_Salario);
    printf("Em percentual: 10 %%\n");
  }else if (salario >= 1200.01 && salario <= 2000.00) {
    double reajuste_Salario = salario * 0.07;
    double salario_total = salario + reajuste_Salario;
    printf("Novo salario: %.2f\n", salario_total);
    printf("Reajuste ganho: %.2f\n", reajuste_Salario);
    printf("Em percentual: 7 %%\n");
  }else if (salario > 2000.00) {
    double reajuste_Salario = salario * 0.04;
    double salario_total = salario + reajuste_Salario;
    printf("Novo salario: %.2f\n", salario_total);
    printf("Reajuste ganho: %.2f\n", reajuste_Salario);
    printf("Em percentual: 4 %%\n");
  }

}