#include <iostream>
#include <fstream>
using namespace std;
int main(){
    char x1, x2;
    ifstream in; //читаем
    ofstream out; //записываем
    in.open("info.in.txt", ios::in);
    out.open("info.out.txt", ios::out);
    in.get(x1);
    while (!in.eof()) {
        in.get(x2);
        if (x2 == '0') {
            cout << "DESMIT"; out << "DESMIT"; in.get(x1);
        } else {
            switch (x1) {
                case '1': cout << "VIENS"; out << "VIENS"; break;
                case '2': cout << "DIVI"; out << "DIVI"; break;
                case '3': cout << "TRIS"; out << "TRIS"; break;
                case '4': cout << "CETRI"; out << "CETRI"; break;
                case '5': cout << "PIECI"; out << "PIECI"; break;
                case '6': cout << "SESI"; out << "SESI"; break;
                case '7': cout << "SEPTINI"; out << "SEPTINI"; break;
                case '8': cout << "ASTONI"; out << "ASTONI"; break;
                case '9': cout << "DEVINI"; out << "DEVINI"; break;
                default: cout << x1; out << x1;
            }
            x1 = x2;
        }
    }
    in.close();
    out.close();
    return 0;
}
