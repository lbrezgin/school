#include <iostream>
using namespace std;
int main(){
	string vards;
	int n,i;
	cout<<"Ievadi kādu vārdu: "; cin>>vards;
	n = vards.length();
	cout<<vards<<"-";
	for(i = 0; i < n; i++)vards[i] = toupper(vards[i]);
	for(i = n-1; i >= 0; i--)cout<<vards[i];
}
