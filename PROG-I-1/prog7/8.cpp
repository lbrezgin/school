#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	srand(time(0));
	int x,y;
	x = rand()%10+1;
	y = rand()%21-10;
	if(x%3==0){
		cout<<x<<" dalas ar 3.\n";
	}else{
		cout<<x<<" nedalas ar 3.\n";
	}	
	if(y%3==0){
		cout<<y<<" dalas ar 3.\n";
	}else{
		cout<<y<<" nedalas ar 3.\n";
	}
}
