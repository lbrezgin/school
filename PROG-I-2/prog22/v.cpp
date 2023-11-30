#include <iostream>
#include <cmath>
using namespace std;
class Muca {
private:
    double d, h;
public:
    void Parametri(double diametrs, double augstums) {
        d = diametrs;
        h = augstums;
    }


    int Tilpums() {
        double r, V;
        int v;
        r = d / 2;
        V = 3.14 * r * r * h;
        v = floor(V/1000000 * 1000);
        return v;
    }
};
int main() {
    double diam, aug;
    Muca a, b;
    int lielas_mucas = 0, mazas_mucas = 0, litri;
    cout << "1. Mucas diametrs (cm): "; cin >> diam;
    cout << "1. Mucas augstums (cm): "; cin >> aug;
    a.Parametri(diam, aug);
    cout << "1. Mucas tilpums: " << a.Tilpums() << " litri\n";

    cout << "2. Mucas diametrs (cm): "; cin >> diam;
    cout << "2. Mucas augstums (cm): "; cin >> aug;
    b.Parametri(diam, aug);
    cout << "2. Mucas tilpums: " << b.Tilpums() << " litri\n";

    lielas_mucas = 50000 / max(a.Tilpums(), b.Tilpums());
    litri = 5000 % max(a.Tilpums(), b.Tilpums());
    mazas_mucas = litri / min(a.Tilpums(), b.Tilpums());
    litri = litri % min(a.Tilpums(), b.Tilpums());
    if (litri > 0) mazas_mucas++;
    cout << "10000 litru saulcpeķi izlišanai ir nepieciešams - " << lielas_mucas << " lielas mucas " << " un " << mazas_mucas << " mazas mucas";
}
