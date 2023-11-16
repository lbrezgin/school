#include <iostream>
using namespace std;
int main(){
	const double izcenojums = 0.75;
	const double PVN = 0.21;
	double garums, platums, platiba, cena, kopa;
	cout<<"Telpas garums: "; 	cin>>garums;
	cout<<"Telpas platums: "; 	cin>>platums;
	platiba = garums * platums;
	cena = platiba * izcenojums;
	kopa = cena + cena * PVN;
	cout<<"Par "<<platiba<<" kvadratmetrus lielas telpas uzkopsanu "
		<<"bus jamaksa "<<cena<<" eiro + PVN (21%)\n";
	cout<<"Kopa "<<kopa<<" eiro.\n";
}
