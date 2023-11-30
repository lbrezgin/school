#include <iostream>
#include <cmath>
using namespace std;
int a, h, Ss;
double Sp;

double Spam() {
    Sp = 6 * (a * a * sqrt(3)) / 4;
    return Sp;
}

int Ssanu() {
    Ss = 6 * a * h;
    return Ss;
}

int main() {
    cout << "Regularas sesstura prizmas pamata malas garums: "; cin >> a;
    cout << "Regularas sesstura prizmas augstums: "; cin >> h;
    cout << "Regularas pamata laukums: " << Spam() << "\n";
    cout << "Prizmas sanu virsmas laukums: " << Ssanu() << "\n";
    cout << "Prizmas pilnas virsmas laukums: " << Spam() + Ssanu() << "\n";
}
