#include <iostream>
using namespace std;
int main(){
	int n,m,k = 0;
	cout<<"Ievadiet n malu: "; cin>>n;
	cout<<"Ievadiet m malu: "; cin>>m;
	cout<<"No taisnstūra ar maliem "<<n<<" un "<<m;
	do {
		if (n < m){
			m = m - n;
		}else if (m < n){
			n = n - m;
		}
		k += 1;
	} while (n != m);
	cout<<" var izveidot "<<k<<" kvadrātus.";
	return 0;
}
