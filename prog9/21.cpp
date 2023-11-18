#include <iostream>
using namespace std;
int main(){
	char s; int sk = 0;

	for(s='A'; s<='Z'; s+=2){
		cout<<s<<" ";
		sk++;
	}
	cout << "\nLai izdrukātu burtu virkni, cikls strādāja " << sk << " reizes.";
}
