#include <iostream>

using namespace std;

int main () {
  int a,b,c;
  cin >> a >> b >> c;

  int origA = a, origB = b, origC = c;

  if (a > b) {
    int temp = a;
    a = b;
    b = temp;
  }
  if (a > c) {
    int temp = a;
    a = c;
    c = temp;
  }
  if (b > c) {
    int temp = b;
    b = c;
    c = temp;
  }

  cout << "\n" << a << "\n" << b << "\n" << c << endl;
  cout << "\n" << origA << "\n" << origB << "\n" << origC;

}