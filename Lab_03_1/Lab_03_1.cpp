#include <iostream>
#include <cmath>

using namespace std;
int main() {
    double x, y;
    double A;
    double B;

    cout << "x = ";
    cin >> x;
    A = x * x;

    // Спосіб 1: розгалуження в скороченій формі
    if (x <= -5)
        B = exp(x - floor(x));
    if (x > -5 && x <= 3)
        B = tan(x + 1) - 3.2 + log10(1 + pow(8, x));
    if (x > 3)
        B = sqrt(abs(x));

    y = A + B;

    cout << endl;
    cout << "1) y = " << y << endl;

    // Спосіб 2: розгалуження в повній формі
    if (x <= -5) {
        B = exp(x - floor(x));
    }
    else if (x > -5 && x <= 3) {
        B = tan(x + 1) - 3.2 + log10(1 + pow(8, x));
    }
    else {
        B = sqrt(abs(x));
    }
    y = A + B;

    cout << "2) y = " << y << endl;
    cin.get();
    return 0;
}