#include <iostream>
using namespace std;

void Balts();
void Melns();

int main() {
    for (int i = 0; i < 10; ++i) {
        Balts();
        cout << " un ";
        Melns();
        cout << "\n";
    }
    return 0;
}

void Balts() {
    cout << "balts";
}

void Melns() {
    cout << "melns";
}
