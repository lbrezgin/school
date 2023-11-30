#include <iostream>
using namespace std;
int VarduSkaits( string s);
int main() {
    string pantins;
    string berni[] = { "Alise", "Raitis", "Toms", "Anna", "Loreta", "Santa", "Sanita", "Agris", "Dace" };
    int i, bernuSkaits, vardi;
    bernuSkaits = sizeof(berni) / sizeof(berni[0]);
    cout << "Ievadi skaitāmpantiņa tekstu: ";
    getline(cin, pantins);
    cout << "Paslēpes spēlēs " << bernuSkaits << " bērni:\n";
    for ( i = 0; i < bernuSkaits-2; i++ ) cout << berni[i] << ", ";
    cout << berni[i] << " un " << berni[i+1] << ".\n";
    cout << "Viņi skaitīs pantiņu: " << pantins << "\n";
    vardi = VarduSkaits(pantins);
    cout << berni[vardi-1] << " jāmeklē citus!";
    return 0;
}
int VarduSkaits( string s) {
    int vardi = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == ' ') {
            vardi += 1;
            if (vardi >= 9) {
                vardi = 0;
            }
        }
    }
    return vardi += 1;
}
