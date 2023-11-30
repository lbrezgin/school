#include <iostream>
using namespace std;

double Milimetri(double x);
double Metri(double x);
double Collas(double x);

int main() {
    double cm, mm, m, c;
    cout << "Ievadīet nogriežņa garumu centimetros: "; cin >> cm;
    mm = Milimetri(cm);
    m = Metri(cm);
    c = Collas(cm);
    cout << "\n" << cm << " cm milimetros būs " << mm << " mm, metros būs " << m << " m, un collas " << c <<" in.";
    return 0;
}

double Milimetri(double x) {
    return x * 10;
}
double Metri(double x) {
    return x / 100;
}

double Collas(double x) {
    return x * 0.39370;
}
