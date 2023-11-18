#include <iostream>
using namespace std;
int main() {
   int i, sum = 0;   
   for (i = 1; i <= 10; i = i + 2) {
      sum = sum + i;   
   }
   cout << "Pirmo 10 naturālo skaitļu summa: " << sum;
} 
