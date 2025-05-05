#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    double salario;
    printf("Digite o seu salario: ");
    cin >> salario;
    double imposto;
    printf("Digite o imposto (em porcentagem, por exemplo 15 para 15%%): ");
    cin >> imposto;

    double salarioLiquido = salario * (imposto / 100);
    double salarioTotal = salario - salarioLiquido;

    printf("Salario: %.2f\n", salarioTotal);
}