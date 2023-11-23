#include <iostream>
using namespace std;
int main() {
   int A[15], i;   

   for ( i = 0; i < sizeof(A) / sizeof(A[0]); i++ ){
      A[i] = 2 * i + 2;     
      cout << A[i] << " ";
   }
} 
