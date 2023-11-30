#include <iostream>
using namespace std;

class Taisnsturis {
private:
    int garums;
    int platums;
public:
    void UzdotMaluGarumus(int g, int p) {
        garums = g;
        platums = p;
    }

    int AprekinatPerimetru() {
        return 2 * (platums + garums);
    }

    int AprekinatLaukumu() {
        return platums * garums;
    }
};

int main() {
    Taisnsturis T;
    int mala1, mala2;
    cout << "Ievadi taisnstūra platumu: "; cin >> mala1;
    cout << "Ievadi taisnstūra garumu: ";  cin >> mala2;
    T.UzdotMaluGarumus(mala1, mala2);
    cout << "Taisnstūra perimetrs P = " << T.AprekinatPerimetru() << "\n";
    cout << "Taisnstūra laukums S = " << T.AprekinatLaukumu() << "\n";
    return 0;
}
