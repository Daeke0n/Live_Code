#include <iostream>

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  int origA = a, origB = b;
  if (a > b) {
    int temp = a;
    a = b;
    b = temp;
    cout << " \n" << a << " \n" << b << endl;
  }

    cout << " \n" << origA << " \n" << origB;
}