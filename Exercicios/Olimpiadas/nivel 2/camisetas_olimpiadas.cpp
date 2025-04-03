#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

  int n;
  cin>>n;

  int pequeno = 0, medio = 0;
    for(int i = 0; i < n; i++) {
      int ti;
      cin>>ti;
      if (ti == 1) {
        pequeno++;
      }else if (ti == 2) {
        medio++;
      }
    }

    int p, m;
    cin>>p;
    cin>>m;
    if (pequeno <= p && medio <= m) {
      printf("S");
    }else {
      printf("N");
    }


}