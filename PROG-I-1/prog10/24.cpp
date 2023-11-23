#include <iostream>
using namespace std;
int main(){
	int a,b;
	cout << "Ievadi skaitļa a vērtību: ";   cin >> a; 
	cout << "Ievadi skaitļa b vērtību: ";   cin >> b;
	while(a!=b){
		cout << a << " un " << b << "\n";
		a -= 2;
		b += 3;
	}
}
