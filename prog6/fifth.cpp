#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Ievadiet skaitļa a vertibu: "; cin>>a;
	cout<<"Ievadiet skaitļa b vertibu: "; cin>>b;
	if(a>b){
		c=a-b;
	}else{
		c=b-a;
	} 
	cout<<"Skaitļu starpība: "<<c;
}
