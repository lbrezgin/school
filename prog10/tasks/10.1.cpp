#include <iostream>
using namespace std;
int main(){
	int a = 100, b = 1;
	while(a >= b){
		cout<<b<<" "<<a<<" ";
		a -= 5;
		b += 3;
	}
	return 0;
}
