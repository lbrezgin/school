#include <iostream>
using namespace std;

double Faktorials(int x);

int main() {
    int n;
    do {
        cout << "Ievadi nenegatīvu skaitli: "; cin >> n;

    } while (n < 0);
    cout << n << "! = " << Faktorials(n) << "\n";
}

double Faktorials(int x) {
    if (x == 1) {
        return 1;
    } else {
        return Faktorials(x-1)*x;
    }
}

