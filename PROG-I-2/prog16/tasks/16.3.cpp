#include <iostream>
using namespace std;
int main(){
	string palindrome, emordnilap;
	int i;
	cout<<"Ievadiet paredzēto palindromu: "; cin>>palindrome;
	emordnilap = palindrome;
	for(i = palindrome.length()-1; i >= 0; i--){
		emordnilap[palindrome.length()-1-i] = palindrome[i];
	}
	if(palindrome == emordnilap){
		cout<<"IR";	
	}else{
		cout<<"NAV";
	}
	return 0;
}
