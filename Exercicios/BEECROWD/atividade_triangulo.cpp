#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  float a, b, c;;
  cin>>a>>b>>c;

  if (a + b > c && a + c > b && b + c > a) {
      double perimetro = a + b + c;
      printf("Perimetro = %.1f\n", perimetro);
  }else {
    double area = (a + b) * c /2;
    printf("Area = %.1f\n", area);
  }
}