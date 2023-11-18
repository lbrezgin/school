#include <iostream>
using namespace std;
int main(){
	int a,b;
	int dal;
	cout << "Ievadi 1. skaitli: ";   cin >> a;
	cout << "Ievadi 2. skaitli: ";   cin >> b;
	dal = min(a,b);
	while(a%dal!=0 || b%dal!=0){
		--dal;
	}
	cout<<"LKD("<<a<<";"<<b<<")="<<dal;
}
