#include <iostream>
using namespace std;
int main(){
	int a,x=1,y=1;
	do {
		cout<<"Ievadi skaitli no 10 līdz 1000: "; cin>>a;
	}while(a<10 || a>1000);
	while(x<=a){
		cout<<x<<" ";
		x = x+y;
		y++;
	}
}
