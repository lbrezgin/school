#include <iostream>
using namespace std;
int main(){
	int a,b,i;
	cout<<"Ievadi skaitli a: "; cin>>a;
	cout<<"Ievadi skaitli b:"; cin>>b;
	for (i = max(a,b); i >= min(a,b); i--) cout<<i<<" ";
}
