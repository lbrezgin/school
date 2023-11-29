#include <iostream>
using namespace std;
struct dati {
	string vards;
	string mobnr;
};
int main(){
	dati kontakti[200];
	int n = 0, i, k;
	int izv;
	do {
		system("clear");
		cout << "1. Pievienot jaunu kontaktpersonu\n";
      	cout << "2. Apskatīt kontaktpersonu sarakstu\n";
      	cout << "3. Beigt darbu ar programmu\n";
      	cout << "------------------------------------------------\n";
      	cout << "Ko darīt? ";   cin >> izv;
      	switch(izv){
      	case 1: 
      		system("clear");
      		if(n < 200){
      			cout << "Vārds: "; cin >> kontakti[n].vards;
   				cout << "Telefona numurs: "; cin >> kontakti[n].mobnr;
   				n++;
      		}else{
      			cout << "Datus par jaunu kontaktpersonu nav iespejams pievienot!";

      		}
      		break;
      	case 2:
      		system("clear");
      		for(k = 0; k < n-1; k++){
      			for(i = 0; i < n-1-k; i++){
      				if(kontakti[i].vards > kontakti[i+1].vards){
      					swap(kontakti[i].vards, kontakti[i+1].vards);
      				}
      			}
      		}
      		for(i = 0; i < n; i++){
      			cout << kontakti[i].vards << " mob.nr: " << kontakti[i].mobnr << "\n";
      		}
      		cin.get();
      		cin.ignore();   
      		break;
    		}
		}while(izv != 3);
	return 0;
}

