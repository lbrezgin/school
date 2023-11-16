#include <iostream>
using namespace std;
int main(){
	int a,b;
	double r;
	cout<<"Ievadiet skaitli a: "; cin>>a;
	cout<<"Ievadiet skaitli b: "; cin>>b;
	r = 1.0*max(a,b) / min(a,b);
	cout<<"Viens skaitlis par otru ir "<<r<<" reizes lielāks.\n";
	return 0;
}
