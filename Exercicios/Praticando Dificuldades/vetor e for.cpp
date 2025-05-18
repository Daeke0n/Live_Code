#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n;
    cin >> n;
    int qtd = 0;
    float soma = 0;
    string nome[n];
    int idade[n];
    float altura[n];

    for (int i = 0; i < n ; i++ ) {
        cin >> nome[i];
        cin >> idade[i];
        cin >> altura[i];

        soma = soma + altura[i];

        if (idade[i] < 16) {
            qtd++;
        }
    }

    float media = soma / n;
    float porcentagem = (qtd * 100) / n;
    printf("Altura média: %.2f\n", media);
    printf("Procentagem de alunos com menos de 16 anos: %.1f%%\n", porcentagem);
}
