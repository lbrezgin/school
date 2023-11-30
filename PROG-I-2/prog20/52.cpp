#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string s;
    int sk = 0;
    ifstream datne;
    datne.open("info.txt", ios::in);
    while (!datne.eof()) {
        datne >> s;
        cout << s << ' ';
        sk++;
    }
    cout << "\n\nTeksta fragments ir " << sk << " vārdus garš.\n";
    datne.close();
}
