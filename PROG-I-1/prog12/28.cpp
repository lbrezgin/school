#include <iostream>
using namespace std;
int main() {
   int a, b, c, sum = 0;
   do {
        system("clear");   
        cout << "Ievadi intervāla sākuma vērtību: "; cin >> a;
        cout << "Ievadi intervāla beigu vērtību: ";  cin >> b;
   } while(a >= b);
   c = a;
   while (a <= b) {
   		cout << a << " ";
        sum = sum + a;
        a = a + 1;
   }
   cout << "Skaitļu summa intervālā ["<<c<<";"<<b<<"] ir "<<sum;
} 
