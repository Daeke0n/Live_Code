#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

void bhaskara (double a, double b, double c) {
    double delta = (b * b) - (4 * a * c);
    if (a == 0 || delta < 0) {
        cout << "Impossivel Calcular" << endl;
    } else {
        double calcn = ((b*-1) - pow(delta, 0.5)) / (2 * a);
        double calcp = ((b*-1) + pow(delta, 0.5)) / (2 * a);
        printf("R1 = %.5f\n", calcp);
        printf("R2 = %.5f\n", calcn);
    }
}

int main() {

    double a, b, c;

    cin >> a >> b >> c;

    bhaskara(a,b,c);


    return 0;
}