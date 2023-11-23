#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	srand(time(0));
	int x,y,z,i;
	for(i = 1; i <= 10; i++){
		x = rand()%9+1;
		y = rand()%9+1;
		do {
			cout<<x<<" * "<<y<<" = ";
			cin>>z;
		}while(x * y != z);
	}
}
