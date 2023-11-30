#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream data;
    data.open("burti.txt", ios::out); //перезапись
    char b = 'a';
    int i, n = 5, k = 6;
    for (i = 1; i <= 26; ++i) {
        cout << b << " ";
        data << b << " ";
        b++;
        if (i == n) {
            cout << "\n";
            data << "\n";
            n = n + k;
            k++;
        }
    }
    data.close();
    return 0;
}
