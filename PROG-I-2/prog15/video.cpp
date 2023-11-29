#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	srand(time(0));
	int a[5][7];
	int i,j;
	for(i = 0; i < 5; i++){
		for(j = 0; j < 7; j++){
			a[i][j] = rand()%10;
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
}
