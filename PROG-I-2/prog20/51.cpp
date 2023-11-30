#include <iostream>
#include <fstream>
using namespace std;
int main(){
    char s;
    int sk = 0;
    ifstream datne; //открытие для чтения
    datne.open("info.txt", ios::in); //чтение файла
    datne.get(s);
    while (!datne.eof()) {
        cout << s;
        if (s == ' ') sk++;
        else if (s == '\n') sk++;
        datne.get(s);
    }
    cout << "\n\nTeksta fragments ir " << (sk+1) << " vārdus garš.\n";
    datne.close();
    return 0;
}
