#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    for (int i = 1; i <= 100; i++ ) {
        int result = i % 2;
        if (result == 0) {
            cout << "" << i << endl;
        }
    }
}
