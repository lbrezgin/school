#include <iostream>
using namespace std;
class Lietotajs {
protected:
    int failmax, fail;
public:
    void MaxFailuSkaitsMenesi(int fm) {
        failmax = fm;
    }
    void FailuSkaitsMenesi(int f) {
        fail = f;
    }
    int MaxFiile() {
        return failmax;
    };
    int Fail() {
        return fail;
    };
    void Lejuplade() {
        if (fail < failmax) {
            fail++;
        } else {
            cout << "Sasniegts failu maksimums!";

        }
    }
};
class Makslinieks: public Lietotajs {
public:
    void Augspielade() {
        failmax += 3;
    }
};

int main() {
    Makslinieks L;
    int q;
    L.MaxFailuSkaitsMenesi(10);
    L.FailuSkaitsMenesi(0);
    do {
        system("cls");
        cout << "Ši menesi izmanto lejupladeto skaits: " << L.Fail() << " no " << L.MaxFiile() << "\n";
        cout << "1. Lejupladet failu\n";
        cout << "2. Jauns menesis\n";
        cout << "3. Beigt darbu\n";
        cout << "----------------------------------------\n";
        cout << "Ko darit?";
        cin >> q;
        if (q == 1) {
            L.Lejuplade();
        } else {
            L.FailuSkaitsMenesi(0);
        }
    } while (q != 3);
    return 0;
}
