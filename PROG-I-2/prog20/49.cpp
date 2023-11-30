#include <iostream>
#include <fstream>
using  namespace std;
int main(){
    string vards;
    string mob_nr;
    cout<<"Ievadi vārdu: "; cin>>vards;
    cout<<"Ievadi telefona numuru: "; cin>>mob_nr;
    ofstream datne;
    datne.open("kontakti.txt", ios::app);
    datne<<vards<<" "<<mob_nr<<"\n";
    datne.close();
}
