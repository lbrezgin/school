 //Sastādi programmu, kas atbilstoši lietotāja ievadītajam kārtas numuram no 1 līdz 7 izvada nedēļas dienas nosaukumu - 
//PIRMDIENA, OTRDIENA, ... vai SVĒTDIENA. Ja lietotājs ievada neatbilstošu kārtas numuru, programma izvada paziņojumu 
//"Tāda nedēļas diena neeksistē!".

#include <iostream>
using namespace std;
int main() {
	int day;
	cout<<"Ievadiet ciparu no 1 līdz 7: "; cin>>day;
	switch(day){
	case 1: cout<<"PIRMDIENA"; break;
	case 2: cout<<"OTRDIENA"; break;
	case 3: cout<<"TREŠDIENA"; break;
	case 4: cout<<"CETURDIENA"; break;
	case 5: cout<<"PIEKTDIENA"; break;
	case 6: cout<<"SESTDIENA"; break;
	case 7: cout<<"SVĒTDIENA"; break;
	default: cout << "Tāda nedēļas diena neeksistē!";
	}
	return 0;
}
