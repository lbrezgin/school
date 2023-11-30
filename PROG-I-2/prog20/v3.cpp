#include "iostream"
#include "fstream"
using namespace std;
int main(){
    string v, u;
    int g;
    const int gads = 2023;
    ifstream data;
    data.open("personas.txt", ios::in);
    data >> v;
    while (!data.eof()) {
        data >> u;
        data >> g;
        cout << v << " " << u << " " << gads - g << "\n";
        data >> v;
    }
    data.close();
    return 0;
}

