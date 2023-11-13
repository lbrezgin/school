#include <iostream>
using namespace std;
int main() {
    int a, b, c;      // definē mainīgos
   //jautā ievadīt trīs skaitļus - nogriežņu garumus
   cout << "Nogriežņa a garums: ";     cin >> a;
   cout << "Nogriežņa b garums: ";     cin >> b;
   cout << "Nogriežņa c garums: ";     cin >> c;
   //pārbauda trijstūra eksistences nosacījumu
   if (a < b + c && b < a + c && c < a + b)
         cout<<"Var izveidot trijstūri!";
   else       
         cout<<"Nevar izveidot trijstūri!";  
}