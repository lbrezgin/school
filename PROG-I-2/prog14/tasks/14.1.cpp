#include <iostream>
#include <ctime>
using namespace std;
int main(){
	srand(time(0));
	int A[15];
	int i, min;
	for(i = 0; i < 15; i++){
		A[i] = rand()%50+20;
		cout<<A[i]<<" ";
	}
	min = A[0];
	for(i = 0; i < 15; i++){
		if(min > A[i]){
			min = A[i];
		}
	}
	cout<<"\nMIN = "<<min;
	return 0;
}
