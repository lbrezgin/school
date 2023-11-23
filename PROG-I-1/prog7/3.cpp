#include <iostream>
#include <cmath>
using namespace std;
int main() {
   const double PI=3.14;    
   double a, b, g, rad, S;      
   cout << "Trijstūra malas a garums: ";     cin >> a;
   cout << "Trijstūra malas b garums: ";     cin >> b;
   cout << "Leņķis starp malām a un b (grādos): ";      cin >> g;
   rad = PI/180*g;   
   S = a * b * sin(rad) / 2;
   cout<<"Trijstūra laukums S = "<<S;   
} 
