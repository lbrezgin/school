#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
   srand(time(0));
   int A[10];   // definē veselu skaitļu masīvu A ar 10 elementiem
   int i, sum=0;   // definē cikla mainīgo un summas mainīgo ar sākuma vērtību 0
   // cikls masīva elementu vērtību aizpildīšanai, izdrukāšanai ekrānā un summas aprēķināšanai 
   for ( i = 0; i < 10; i++ ){
      A[i] = rand()%10;     
      cout << A[i] << " ";
      sum = sum + A[i];
   }
   cout << "\nMasīva elementu summa: " << sum;
} 
