#include <iostream>
using namespace std;
int main(){
	int sk=0,sum=0,vid,n;
	do {
		cout<<"Ievadiet skaitli: "; cin>>n;
		sk++;
		sum+=n;
	}while(n!=0);
	sk--;
	vid = sum / sk;
	cout<<"Jūs ievadijāt "<<sk<<" skaitļus, tos vidējasis aritmētiskais is: "<<vid; 
	return 0;
}
