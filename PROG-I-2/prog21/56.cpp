#include <iostream>
using namespace std;

int Summa(int&x, int&y, int&c);

int main() {
    int a, b, c, sum;
    sum = Summa(a, b, c);
    cout << a << "+" << b << "+" << c << "=" << sum << "\n";
}

int Summa(int&x, int&y, int&c) {
    int rez;
    cout << "1. skaitlis: ";   cin >> x;
    cout << "2. skaitlis: ";   cin >> y;
    cout << "3. skaitlis: ";   cin >> c;
    rez = x + y + c;
    return rez;
}
