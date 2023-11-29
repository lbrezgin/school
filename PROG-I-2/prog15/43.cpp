#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
   srand(time(0));
   int a[3][10];   
   int i, j, sum;   

   for ( i = 0; i < 3; i++ ) {   
      for ( j = 0; j < 10; j++ ) {   
         a[i][j] = 10 * (rand()%9 + 1);   
         cout << "\t" << a[i][j];   
      }
      cout << "\n";   
   }
   cout << "\t";
   for ( j = 0; j < 10; j++ ) cout<<"----";   
   cout << "\n";
   for ( j = 0; j < 10; j++ ) {   
      sum = 0;   
      for ( i = 0; i < 3; i++) {   
         sum = sum + a[i][j];    
      }
      cout << "\t" << sum;   
   }
} 
