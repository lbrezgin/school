#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double r,c,s;
	const double PI = 3.14;
	cout<<"Ievadiet radiusu: "; cin>>r;
	c = 2*PI*r;
	double r_square = pow(r, 2);
	s = PI*r_square;
	cout<<"Rinka linijas garums ir: "<<c<<", laukums: "<<s;
}	
