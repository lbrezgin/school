#include <iostream>
using namespace std;
int main() {
   int A[15], i;   
   A[0] = 2;       A[1] = 4;         A[2] = 6;       A[3] = 8;         A[4] = 10;  
   A[5] = 12;     A[6] = 14;      A[7] = 16;     A[8] = 18;      A[9] = 20;     
   A[10] = 22;   A[11] = 24;   A[12] = 26;   A[13] = 28;   A[14] =30; 
   for ( i = 0; i < sizeof(A) / sizeof(A[0]); i++ ){
      cout << A[i] << " ";
   }
} 
