#include <iostream>
using namespace std;
int main(){
	int i,j;
	for(i = 1; i <= 5; i++){
		for(j = i; j <= i * 10; j+=i){
			cout<<j<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
