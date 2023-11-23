#include <iostream>
using namespace std;
int main(){
	int a,b,pag;
	cout << "Ievadi intervāla sākuma vērtību: "; cin >> a;
	cout << "Ievadi intervāla beigu vērtību: ";	 cin >> b;
	if( a > b){
		pag = a;
		a = b;
		b = pag;
	}
	cout << "Intervāls [" << a << ";" << b << "]";
}
