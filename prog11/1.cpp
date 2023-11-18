#include <iostream>
using namespace std;
int main(){
	int x,c;
	cout<<"Ievadiet skaitli: "; cin>>x;
	do {
		c = x % 10;
		cout<<c;
		x = x / 10;

	}while(x != 0);
}
