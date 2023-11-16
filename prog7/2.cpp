#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double a, b, c, p, pag, S; 
	cout << "Trijstūra malas a garums: ";     cin >> a;
   	cout << "Trijstūra malas b garums: ";     cin >> b;
   	cout << "Trijstūra malas c garums: ";     cin >> c;
   	p = (a + b + c) / 2;
   	pag = p * (p - a) * (p - b) * (p - c);   
   	if (pag>0) {
   		S = sqrt(pag);
        cout << "Trijstūra laukums S = " << S;
   	}else{
   		cout<<"Ievadītie malu garumi neatbilst trijstūrim!";
   	}
}
