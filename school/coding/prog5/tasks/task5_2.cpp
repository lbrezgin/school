#include <iostream>
using namespace std;
int main(){
	int a,i,b,atl;
	double f;
	cout<<"Ievadiet dalāmo: "; 		cin>>a;
	cout<<"Ievadier dalitāju: "; 	cin>>b;
	i = a / b;
	atl = a % b; 
	double new_a = a;
	f = new_a / b;
	cout<<a<<" : "<<b<<" = "<<i<<" atl "<<atl<<"\n";
	cout<<a<<" : "<<b<<" = "<<f;
}
