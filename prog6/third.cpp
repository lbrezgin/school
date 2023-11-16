#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Nogriežņa a garums: ";
    cin >> a;
    cout << "Nogriežņa b garums: ";
    cin >> b;
    cout << "Nogriežņa c garums: ";
    cin >> c;

    if (a < b + c) {
        if (b < a + c) {
            if (c < a + b) {
                cout << "Var izveidot trijstūri!";
            } else {
                cout << "Nevar izveidot trijstūri!";
            }
        } else {
            cout << "Nevar izveidot trijstūri!";
        }
    } else {
        cout << "Nevar izveidot trijstūri!";
    }
}
