#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

  int c, q;
  double total;

  cin >> c >> q;

  switch (c) {
    case 1:
      total = q * 4.00;
      break;
    case 2:
      total = q * 4.50;
      break;
    case 3:
      total = q * 5.00;
      break;
    case 4:
      total = q * 2.00;
      break;
    case 5:
      total = q * 1.50;
      break;
  }

  printf("Total: R$ %.2f", total);

}