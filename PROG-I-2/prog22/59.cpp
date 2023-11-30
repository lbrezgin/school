#include <iostream>
using namespace std;

class Taisnsturis {
public:
    int garums;
    int platums;

    int AprekinatPerimetru() {
        return 2 * (platums + garums);
    }

    int AprekinatLaukumu() {
        return platums * garums;
    }
};

int main() {
    Taisnsturis T;
    cout << "Ievadi taisnstūra platumu: ";
    cin >> T.platums;
    cout << "Ievadi taisnstūra garumu: ";
    cin >> T.garums;
    cout << "Taisnstūra perimetrs P = " << T.AprekinatPerimetru() << "\n";
    cout << "Taisnstūra laukums S = " << T.AprekinatLaukumu() << "\n";
    return 0;
}
