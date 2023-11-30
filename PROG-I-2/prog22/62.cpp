#include <iostream>
using namespace std;

class Daudzsturis {
protected:
    int nogrieznis1, nogrieznis2;
public:
    void Parametri(int a, int b) {
        nogrieznis1 = a;
        nogrieznis2 = b;
    }
};

class Taisnsturis: public Daudzsturis {
public:
    int Laukums() {
        return nogrieznis1 * nogrieznis2;
    }
};

class Rombs: public Daudzsturis {
public:
    double Laukums() {
        return (nogrieznis1 * nogrieznis2) / 2.0;
    }
};

int main() {
    Taisnsturis T;
    Rombs R;
    int x, y;
    cout << "Ievadi taisnstūra garumu: "; cin >> x;
    cout << "Ievadi taisnstūra platumu: "; cin >> y;
    T.Parametri(x, y);
    cout << "Taisnstūra laukums S = " << T.Laukums() << "\n\n";

    cout << "Ievadi romba vienas diagonāles garumu: "; cin >> x;
    cout << "Ievadi romba otras diagonāles garumu: "; cin >> y;
    R.Parametri(x, y);
    cout << "Romba laukums S = " << R.Laukums() << "\n";
}
