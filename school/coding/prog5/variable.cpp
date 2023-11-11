#include <iostream>
using namespace std;
int main(){
	int skaitlis;
	string krasa, dzivnkieks;
	char vards, uzvards;
	cout<<"Tavs miļakais skaitlis: "; 		cin>>skaitlis;
	cout<<"Tava miļaka krasa: "; 			cin>>krasa;
	cout<<"Tava varda pirmais burts: "; 	cin>>vards;
	cout<<"Tava uzvarda pirmais burts: "; 	cin>>uzvards;
	cout<<"Tavs miļakais dzivnieks: ";		cin>>dzivnkieks;
	cout<<"Tavs ekslibris ir "<<skaitlis<<"-stūra formas. ";
	cout<<"Tas izpildas "<<krasa<<" krasa. ";
	cout<<"Uz tā attelots "<<dzivnkieks<<" un tavi iniciāli "
		<<vards<<"."<<uzvards<<".";
}
