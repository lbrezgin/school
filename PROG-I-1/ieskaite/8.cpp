#include <iostream>
#include <ctime>
using namespace std;
int main(){
	srand(time(0));
	int sk,i,a=0,b=0,c=0,d=0,e=0,f=0;
	for(i = 1; i <= 100; i++){
		sk = rand()%6+1;
		switch(sk){
			case 1: a++; break;
			case 2: b++; break;
			case 3: c++; break;
			case 4: d++; break;
			case 5: e++; break;
			case 6: f++; break;
		}
	}
	cout<<"1 bija uzmests "<<a<<" reizes\n";
	cout<<"2 bija uzmests "<<b<<" reizes\n";
	cout<<"3 bija uzmests "<<c<<" reizes\n";
	cout<<"4 bija uzmests "<<d<<" reizes\n";
	cout<<"5 bija uzmests "<<e<<" reizes\n";
	cout<<"6 bija uzmests "<<f<<" reizes\n";
	return 0;
}
