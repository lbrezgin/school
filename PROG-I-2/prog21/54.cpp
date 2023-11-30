#include <iostream>
using namespace std;

int a, b, c;

int Summa();

int main() {
    int sum;
    cout << "1. skaitlis: "; cin >> a;
    cout << "2. skaitlis: "; cin >> b;
    cout << "3. skaitlis: "; cin >> c;
    sum = Summa();
    cout << a << " + " << b << " + " << c << " = " << sum << "\n";
}

int Summa() {
    int rez;
    rez = a + b + c;
    return rez;
}
