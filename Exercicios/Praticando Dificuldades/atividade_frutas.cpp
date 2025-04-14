#include <iostream>
#include <string>

using namespace std;

int main() {
  string cor, formato, tamanho;
  cin >> cor;
  cin >> formato;
  cin >> tamanho;

  if (cor == "Verde" && formato == "Redondo" && tamanho == "Pequeno") {
    cout << "Maca" << endl;
  }else if (cor == "Amarelo" && formato == "Alongado" && tamanho == "Medio") {
    cout << "Banana" << endl;
  }else if (cor == "Roxo" && formato == "Redondo" && tamanho == "Pequeno") {
    cout << "Uva" << endl;
  }else if (cor == "Vermelho" && formato == "Redondo" && tamanho == "Grande") {
    cout << "Melancia" << endl;
  }else {
    cout << "Desconhecido" << endl;
  }
}