#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string name, username;
    ofstream data;
    data.open("persona.txt", ios::out);
    cout << "Ievadiet vārdu: "; cin >> name;
    data << name;
    data << "\n";
    cout << "Ievadiet uzvārdu: "; cin >> username;
    data << username;
    data.close();
    return 0;
}
