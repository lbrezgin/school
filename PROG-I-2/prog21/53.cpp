#include <iostream>
#include <cmath>
using namespace std;

double RAD(double x);

int main() {
    double a, b, lenkis, S;
    cout << "Ievadi trijstūra 1. malas garumu: ";   cin >> a;
    cout << "Ievadi trijstūra 2. malas garumu: ";   cin >> b;
    cout << "Ievadi leņķi starp abām malām: ";   cin >> lenkis;
    lenkis = RAD(lenkis);
    S = 0.5 * a * b * sin(lenkis);
    cout << "Trijstūra laukums S = " << S << "\n";
}

double RAD(double x) {
    const double PI = 3.1415926;
    x = x * PI / 180;
    return x;
}
