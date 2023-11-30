#include <iostream>
using namespace std;
class Dalibnieks {
private:
    string vards;
    string uzvards;
    int rezultats;
public:
    void TavasDates(string v, string u, int r) {
        vards = v;
        uzvards = u;
        rezultats = r;
    }
    void Info() {
        cout << vards << "\n";
        cout << uzvards << "\n";
        cout << rezultats << "\n";
        cout << "\n";
    }
    int Rezult() {
        return rezultats;
    }
};

void Registresana(Dalibnieks &dalibnieks) {
    string v, u;
    int r;
    cout << "Ievadi dalibnieka vardu: "; cin >> v;
    cout << "Ievadi dalibnieka uzvardu: "; cin >> u;
    cout << "Ievadi dalibnieka rezultātu: "; cin >> r;
    cout << "\n";
    dalibnieks.TavasDates(v, u, r);
}

int main() {
    int n = 6;
    Dalibnieks dalibnieki[n];
    for (int i = 0; i < n; ++i) {
        Registresana(dalibnieki[i]);
    }
    for (int i = 0; i < n-1; ++i) {
        for (int j = 0; j < n - 1 - i; ++j) {
            if (dalibnieki[j].Rezult() < dalibnieki[j+1].Rezult()) {
                swap(dalibnieki[j], dalibnieki[j + 1]);
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        dalibnieki[i].Info();
    }
    return 0;
}
