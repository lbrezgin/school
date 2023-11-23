#include <iostream>
using namespace std;
int main(){
	int A[7] = {5, 1, 4, 6, 2, 7, 3};
	int i;
	int max;
	max = A[0];
	for(i = 0; i < 7; i++){
		if ( max < A[i] ) max = A[i];
	}	
	cout << "\nMasīva lielākā vērtība: " << max;
}
