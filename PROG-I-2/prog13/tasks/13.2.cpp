#include <iostream>
using namespace std;
int main(){
	int A[] = {2, 1, 4, 3, 6, 5, 8, 7};
	int i, sum = 0;
	int n = sizeof(A)/sizeof(A[0]);
	for(i = 0; i < n; i++){
		cout<<A[i]<<" ";
	}
	cout<<"\n";
	cout<<"a) "<<A[0]<<"\n";
	cout<<"b) "<<A[n-1]<<"\n";
	cout<<"c) ";
	for(i = n-1; i >= 0; i-- ){
		cout<<A[i]<<" ";
	}
	cout<<"\nd) ";
	for(i = 0; i < n; i++){
		sum += A[i];
	}	
	cout<<sum;
	return 0;
}
