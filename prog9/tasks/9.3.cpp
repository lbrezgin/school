#include <iostream>
using namespace std;
int main(){
	int i,n;
	cout<<"Ievadiet n vertību: "; cin>>n;
	for(i = 1; i <= 10; ++i){
		cout<<i<<" * "<<n<<" = "<<i*n<<"\n";
	}
	return 0;
}
