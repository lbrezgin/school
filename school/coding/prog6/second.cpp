#include <iostream>
using namespace std;
int main() {
	double a,b,y;
	cout<<"Skaitļa a vērtība: "; 
	cin>>a;
	cout<<"Skaitļa b vērtība: ";
	cin>>b;
	if (b!=0) {
		y = a/b;
		cout<<"y="<<a<<":"<<b<<"="<<y;
	}else{
		cout<<"Ar 0 dalīt nedrikst!";
	}
}
