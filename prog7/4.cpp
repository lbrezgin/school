#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
   srand(time(0));
   int x;
    x = rand()%6 + 1;
   cout << "Metot metamo kauliņu tika uzmests " << x ;
} 
