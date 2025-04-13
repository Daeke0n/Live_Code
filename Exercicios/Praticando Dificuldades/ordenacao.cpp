#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  int a,b,c,d;
  cin>>a>>b>>c>>d;

  if (a > b) {
    int temp = a;
    a = b;
    b = temp;
  }else if (a > c){
    int temp = a;
    a = c;
    c = temp;
  }else if (a > d) {
    int temp = a;
    a = d;
    d = temp;
  }else if (b > c) {
    int temp = b;
    b = c;
    c = temp;
  }else if (b > d){
    int temp = b;
    b = d;
    d = temp;
  }else if (c > d){
    int temp = c;
    c = d;
    d = temp;
  }
  cout<<"Ordenados: " << a << " \n" << b << " \n" << c << " \n" << d;
}