#include <iostream>
#include <cstdlib>
#include <cctype>

using namespace std;

int main() {
    string animais;
    cin >> animais;
    string tipodeAnimal;
    cin >> tipodeAnimal;
    string alimentacao;
    cin >> alimentacao;

    if (animais == "vertebrado" && tipodeAnimal == "ave" && alimentacao == "carnivoro") {
        cout << "aguia" << endl;
    } else if (animais == "vertebrado" && tipodeAnimal == "ave" && alimentacao == "onivoro") {
        cout << "pomba" << endl;
    }
    if (animais == "vertebrado" && tipodeAnimal == "mamifero" && alimentacao == "onivoro") {
        cout << "homem" << endl;
    } else if (animais == "vertebrado" && tipodeAnimal == "mamifero" && alimentacao == "herbivoro") {
        cout << "vaca" << endl;
    }
    if (animais == "invertebrado" && tipodeAnimal == "inseto" && alimentacao == "hematofago") {
        cout << "pulga" << endl;
    }else if (animais == "invertebrado" && tipodeAnimal == "inseto" && alimentacao == "herbivoro") {
        cout << "lagarta" << endl;
    }
    if (animais == "invertebrado" && tipodeAnimal == "anelideo" && alimentacao == "hematofago") {
        cout << "sanguessuga" << endl;
    }else if (animais == "invertebrado" && tipodeAnimal == "anelideo" && alimentacao == "onivoro") {
        cout << "minhoca" << endl;
    }
}
