#include <iostream>
using namespace std;
int main(){
	int a,b;
	double r;
	cout<<"Ievadiet skaitli a: "; cin>>a;
	cout<<"Ievadiet skaitli b: "; cin>>b;
	if(a>b){
		r = 1.0*a/b;
		cout<<a<<" par "<<b<<" ir "<< r<<" reizes lielāks";
	}else{
		r = 1.0*b/a;
		cout<<b<<" par "<<a<<" ir "<< r<<" reizes lielāks";

	}
	return 0;
}
