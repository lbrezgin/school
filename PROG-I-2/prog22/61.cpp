#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Dzivnieks {
private:
    string nosaukums;
    int kajas;
    bool aste;
    bool lido;
    bool peld;
    string krasa;
public:
    void IzveidoDatus(string n, int k, int a, int l, int p, string kr) {
        nosaukums = n;
        kajas = k;
        aste = a;
        lido = l;
        peld = p;
        krasa = kr;
    }

    void UzdodJautajumu() {
        cout << "Uzmini, ka es esmu!\n";
        cout << "Man ir " << kajas << " kājas ";
        if ( aste == true ) cout << "un aste. "; else cout << "un man nav astes. ";
        if ( lido == true && peld == true ) cout << "Es protu lidot un peldēt. ";
        if ( lido == true && peld == false ) cout << "Es protu lidot, bet neprotu peldēt. ";
        if ( lido == false && peld == true ) cout << "Es neprotu lidot, bet protu peldēt. ";
        if ( lido == false && peld == false) cout << "Es neprotu ne lidot, ne peldēt. ";
        cout << "Man ir " << krasa <<".\nKā mani sauc? ";
    }

    string NolasaNosaukumu() {
        return nosaukums;
    }
};

int main() {
    srand(time(0));
    Dzivnieks Dz[10];
    string dzivnieks;
    int kurs = rand()%10;
    Dz[0].IzveidoDatus("kaķis", 4, true, false, true, "mīksts, spalvains, vienkrāsains vai raibs kažoks");
    Dz[1].IzveidoDatus("suns", 4, true, false, true, "biezs spalvu kažoks, sastopami īpatņi arī ar pavisam plānu kažoku");
    Dz[2].IzveidoDatus("zoss", 2, true, true, true, "baltas vai brūnas spalvas");
    Dz[3].IzveidoDatus("gailis", 2, true, false, false, "greznas krāsaianas spalvas, bet varu būt arī balts");
    Dz[4].IzveidoDatus("bite", 6, false, true, false, "melns ietērps ar baltām un dzeltenām svītrām");
    Dz[5].IzveidoDatus("zebra", 4, true, false, true, "melns kažoks ar baltām svītrām, bet varbūt otrādi");
    Dz[6].IzveidoDatus("govs", 4, true, false, true, "brūns, melns, melnbalts vai zilgans īsspalvains kažoks");
    Dz[7].IzveidoDatus("varde", 4, false, false, true, "zaļš vai brūngans ietērps");
    Dz[8].IzveidoDatus("zivs", 0, true, 0, true, "spīdīgs zvīņains ietērps");
    Dz[9].IzveidoDatus("krokodils", 4, true, false, true, "pelēcīgi brūngans vai zaļģans raupjš ietērps");
    Dz[kurs].UzdodJautajumu();
    cin >> dzivnieks;
    if ( dzivnieks == Dz[kurs].NolasaNosaukumu() )   cout << "Pareizi!";   else   cout << "Neareizi!";
}
