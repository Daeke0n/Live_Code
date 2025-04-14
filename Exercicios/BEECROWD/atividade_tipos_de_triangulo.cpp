#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  double a, b, c;

  cin >> a >> b >> c;

  if (c > a) {
    double temp = c;
    c = a;
    a = temp;
  }
  if (c > b) {
    double temp = c;
    c = b;
    b = temp;
  }
  if (b > a) {
    double temp = b;
    b = a;
    a = temp;
  }

  if (a >= (b + c)) {
    printf("NAO FORMA TRIANGULO\n");
  }else {
    if ((a*a) == ((b*b) + (c*c))) {
      printf("TRIANGULO RETANGULO\n");
    }if ((a*a) > ((b*b) + (c*c))) {
      printf("TRIANGULO OBTUSANGULO\n");
    }if ((a*a) < ((b*b) + (c*c))) {
      printf("TRIANGULO ACUTANGULO\n");
    }if (a == b && b == c) {
      printf("TRIANGULO EQUILATERO\n");
    } else if (a == b || a == c || b == c) {
      printf("TRIANGULO ISOSCELES\n");
    }
  }
}