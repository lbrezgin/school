#include <iostream>
using namespace std;
int main(){
	double d;
	int a,sk;
	cout<<"Cik km garu distanci skriesi: "; cin>>d;
	cout<<"Cik garš ir stadiona aplis: "; cin>>a;
	d = d * 1000;
	while(d >= a){
		d -= a;
		sk += 1;
		cout<<"Noskrieto apļu skaits - "<<sk<<" atlikusi "<<d<<" metri\n";
	}
	if(d>0) cout<<"Noskriet pēdeji "<<d<<" metri\n";
	cout<<"Finish!";
	return 0;
}
