#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double a,b,c,d,x,x1,x2;
	cout<<"Ievadiet a vērtību: "; cin>>a;
	cout<<"Ievadiet b vērtību: "; cin>>b;
	cout<<"Ievadiet c vērtību: "; cin>>c;
	if(a!=0){
		d = (pow(b,2))-(4*a*c);
		if(d>0){
			x1 = (-b+sqrt(d))/(2*a);
			x2 = (-b-sqrt(d))/(2*a);
			cout<<"x1= "<<x1<<" x2= "<<x2;
		}else{
			if(d==0){
				x = -b/(2*a);
				cout<<"x = "<<x;
			}else{
				cout<<"Sakņu nav!";
			}
		}
	}else{
		cout<<"a vērtība nedrikst būt 0!";
	}
	return 0;
}
