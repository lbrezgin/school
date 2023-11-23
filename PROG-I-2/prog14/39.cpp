#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	srand(time(0));
	int A[10],i;
	int k;
	for(i = 0; i < 10; i++){
		A[i] = rand()%100+1;
		cout<<A[i]<<" ";
	}
	//алгоритм пузырька 
	 for ( k = 1; k <= 9; k++ ) {
      for ( i = 0; i <= 9-k; i++ ) {
         if (A[i] > A[i+1] ) swap(A[i],A[i+1]);
      }
   }
   cout << "\n";
   for ( i = 0; i < 10; i++ ) cout << A[i] << " ";
}
