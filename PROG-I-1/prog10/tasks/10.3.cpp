#include <iostream>
using namespace std;
int main(){
	int a,b,mkd,n;
	cout<<"Ievadiet a vērtību: "; cin>>a;
	cout<<"Ievadiet b vertibu: "; cin>>b;
	mkd = max(a, b);
	n = 1;
	while(mkd % a != 0 || mkd % b != 0){
		mkd *= n;
		n++;
	}
	cout<<"MKD("<<a<<";"<<b<<") = "<<mkd;
	return 0;
}
