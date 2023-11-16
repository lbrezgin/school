#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"ievadi skaitli a: "; cin>>a;
	cout<<"ievadi skaitli b: "; cin>>b;
	if(a>b){
		c=a-b;
	}else{
		c=b-a;
	}
	cout<<"skaitlu starpiba: "<<c;
}
