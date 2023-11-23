#include <iostream>
using namespace std;
int main(){
	int a,b,x;
	cout<<"Ievadiet x vertību: "; cin>>x;
	cout<<"Ievadiet a vertību: "; cin>>a;
	do {
		cout<<"Ievadiet b vertību: "; cin>>b;
	}while(b < a);
	if(x >= a && x <= b){
		cout<<x<<" pieder intervalam ["<<a<<";"<<b<<"]";
	}else{
		cout<<x<<" nepieder intervalam ["<<a<<";"<<b<<"]";
	}
	return 0;
}
