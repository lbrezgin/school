#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int mas[] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
	int i, n = sizeof(mas)/sizeof(mas[0]);
	cout<<"Nesakārtoti masīva elementi: ";
	for(i = 0; i < n; i++) cout<<mas[i]<<" ";
   	cout << "\nAugošā secībā sakārtoti masīva elementi: ";
   	sort(mas, mas+n);
   	for(i = 0; i < n; i++) cout<<mas[i] << " ";
   	cout << "\nDilstošā secībā sakārtoti masīva elementi: ";
   	for ( i = n-1; i >= 0; i--) cout << mas[i] << " ";    
}
