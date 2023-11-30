#include <iostream>
#include <fstream>
using namespace std;
int main() {
    int sum = 0, x, count = 0;
    ifstream in;
    ofstream out;
    in.open("skaitli.txt", ios::in);
    out.open("rezultats.txt", ios::out);
    in >> x;
    while (!in.eof()) {
        count++;
        sum += x;
        in >> x;
    }
    cout << "Summa: " << sum;
    out << "Summa: " << sum;
    cout << "\n";
    out << "\n";
    cout << "Vidējais aritmētiskai: " << sum*1.0 / count;
    out << "Vidējais aritmētiskai: " << sum*1.0 / count;
    in.close();
    out.close();
    return 0;
}
