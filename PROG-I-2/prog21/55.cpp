#include <iostream>
using namespace std;

int Summa(int x, int y, int&c);

int main() {
    int a, b, c, sum;
    cout << "1. skaitlis: ";   cin >> a;
    cout << "2. skaitlis: ";   cin >> b;
    cout << "3. skaitlis: ";   cin >> c;
    sum = Summa(a, b, c);
    cout << a << "+" << b << "+" << c << "=" << sum << "\n";
}

int Summa(int x, int y, int&c) {
    int rez;
    c = c + 1;
    rez = x + y + c;
    return rez;
}

