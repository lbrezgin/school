#include <iostream>
#include <ctime>
using namespace std;
int main(){
	srand(time(0));
	int A[20];
	int i, k;
	cout<<"Nesakartots masīvs: ";
	for(i = 0; i < 20; i++){
		A[i] = rand()%89+10;
		cout<<A[i]<<" ";
	}
	for(k = 1; k <= 19; k++){
		for(i = 0; i <= 19-k; i++){
			if(A[i] < A[i+1]) swap(A[i],A[i+1]);
		}
	}
	cout<<"\nSakartots masīvs: ";
	for (i = 0; i < 20; i++) cout<<A[i]<<" ";
	return 0;
}
