#include <iostream>
#include <fstream>
using namespace std;
int main(){
    char x;
    int count = 0;
    ifstream in;
    ofstream out;
    in.open("teksts.txt", ios::in);
    out.open("burtsO.txt", ios::out);
    in.get(x);
    while (!in.eof()) {
        if (x == 'o' || x == 'O') {
            count++;
        }
        cout << x;
        in.get(x);
    }
    out << "o vai O tekstā atrodās " << count << " reizes ";
    in.close();
    out.close();
    return 0;
}

