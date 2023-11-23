#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	srand(time(0));
	int a[10];
	int i;
	for(i = 0; i < 10; i++){
		a[i] = rand()%10+1;
		cout<<a[i]<<" ";
	}
}
