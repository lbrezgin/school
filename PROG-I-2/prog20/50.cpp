#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string nosaukums;
    int skaits;
    double cena, kopsumma = 0;
    ifstream datne;
    datne.open("preces.txt", ios::in);
    while(datne >> nosaukums >> skaits >> cena){
        cout<<nosaukums<<"\t"<<skaits<<"x"<<cena<<" = "<<(skaits*cena)<<"\n";
        kopsumma += skaits*cena;
    }
    cout<<"Pirkuma kopsumma: "<<kopsumma;
    datne.close();
    ofstream datne2; //открытие для записи
    datne2.open("rekins.txt", ios::out); //открытие для записи
    datne2 << "Pirkuma kopsumma: " << kopsumma;
    datne2.close();
}
