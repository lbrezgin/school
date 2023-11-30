#include "iostream"
#include "fstream"
using namespace std;
int main() {
    ofstream data;
    data.open("personas.txt", ios::app);
    string v, u;
    int g;
    char q;
    do {
        cout << "Personas vards: "; cin >> v;
        cout << "Personas uzvards: "; cin >> u;
        cout << "Dzimsanas gads: "; cin >> g;
        data << v << " " << u << " " << g << "\n";
        cout << "Turpinat? (j/n)";
        cin >> q;
    } while (q != 'n' && q != 'N');
    data.close();
    return 0;
}
