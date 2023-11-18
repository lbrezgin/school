#include <iostream>
using namespace std;
int main() {
   int N; 
   int X; 
   int K = 0; 
   int D = 0; 
   cout << "Cik EUR vēlaties sakrāt? "; cin >> N;
   cout << "Cik centus liksi krājkase pirmajā dienā? "; cin >> X;
   N = N * 100;   
   while (K < N) {
        D = D + 1;   
        K = K + X;   
        cout << D << ". diena - krājkasē ieliek " << X << " centus. Uzkrājums " << K << " centi.\n";
        X = X * 2;    
   }
   cout << "Naudu nāksies krāt " << D << " dienas!";
} 
