#include <iostream>
#include <string>
using namespace std;
int main(){
	srand(time(0));
	int num;
	string lot;
	num = rand()%31+20;
	lot = "00"+to_string(num);
	cout<<"Loterijas biļetes "<<lot<<" īpašnieks laimējis\n";
	switch(num){
	case 20: cout<<"Bezmaksas konsultāciju programmēšanā."; break;
	case 23: cout<<"1 000 000 $."; 							break;
	case 25: cout<<""; 										break;
	case 30: cout<<"Kafiju."; 								break;
	case 33: cout<<"Jaunu mašīnu"; 							break;
	case 35: cout<<"Krēslu"; 								break;
	case 40: cout<<"20 000 $";								break;
	case 43: cout<<"0.02 $"; 								break;
	case 45: cout<<"Dzīvokli"; 								break;
	case 50: cout<<"Suni"; 									break;
	default: cout<<"Diemžēl neko :(";
	}
	return 0;
}
