#include <iostream>
using namespace std;

int NaturalSkaitlis(int& x);
int MazakaisSkaitlis(int a, int b, int c, int d);

int main(){
    int a, b, c, d, mala, s;
    cout << "Ievdai nogriezna a garumu: ";
    NaturalSkaitlis(a);
    cout << "Ievdai nogriezna b garumu: ";
    NaturalSkaitlis(b);
    cout << "Ievdai nogriezna c garumu: ";
    NaturalSkaitlis(c);
    cout << "Ievdai nogriezna d garumu: ";
    NaturalSkaitlis(d);
    mala = MazakaisSkaitlis(a, b, c, d);
    s = mala * mala;
    cout << "Kvadrata laukums: S = " << s;
}

int NaturalSkaitlis(int& x) {
    do {
        cin >> x;
        if (x < 1) cout << "Kluda, Ievadi naturalo skaitli: ";
    } while (x < 1);
    return x;
}

int MazakaisSkaitlis(int a, int b, int c, int d) {
    int MIN;
    MIN = min(a, min(b, min(c, d)));
    return MIN;
}


