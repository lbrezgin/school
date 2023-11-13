#include <iostream>
using namespace std;
int main() {
	int a,b,c;
	cout<<"1. skaitlis: "; cin>>a;
	cout<<"2. skaitlis: "; cin>>b;
	cout<<"3. skaitlis: "; cin>>c;
	if(a==b && b==c){
		cout<<"Skaitli ir vienādi\n";
	}else{
		cout<<"Skaitli nav vienādi\n";
	}
}
