#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int x,floors = 0;
	cout<<"Ievadiet klucīšu skaitu: "; cin>>x;
	while(x > floors){
		floors += 1;
		x -= floors;
	}
	cout<<"Var uzbuvēt "<<floors<<" stāvu māju!\n";
	cout<<"Pari paliek "<<x<<" klucīšu";
	return 0;
}
