#include <iostream>
using namespace std;
int main(){
	int x,c1,c2,sum;
	do{
		system("clear"); 
		cout << "Ievadi naturālu divciparu skaitli: ";
		cin>>x;
	}while(x<10 || x>99);
	c1 = x / 10;
	c2 = x % 10;
	sum = c1 + c2;
	cout<<"Skaitļa "<<x<<"ciparu summa ir "<<sum;
}
