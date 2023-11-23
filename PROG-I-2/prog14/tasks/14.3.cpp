#include <iostream>
#include <ctime>
#include <algorithm>
using namespace std;
int main(){
	srand(time(0));
	int A[30], i;
	int n = sizeof(A)/sizeof(A[0]);
	cout<<"Nesakartots: ";
	for(i = 0; i < 30; i++){
		A[i] = rand()%100;
		cout<<A[i]<<" ";
	}
	sort(A, A+n);
	cout<<"\nSakartots: ";
	for(i = 0; i < 30; i++) cout<<A[i]<<" ";
	return 0; 
}
