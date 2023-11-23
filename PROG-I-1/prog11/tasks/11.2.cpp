#include <iostream>
using namespace std;
int main(){
	int x,c=0;
	cout<<"Ievadiet x vertību: "; cin>>x;
	cout<<x;
	do {
		x = x / 10;
		c++;
	}while(x > 0);
	cout<<" ir "<<c<<" ciparu skaitlis";
	return 0;
}
