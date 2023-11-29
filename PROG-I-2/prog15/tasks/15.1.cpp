// Sastādīt programmu, kas izveido masīvu A[10][10] un piešķir 
//tā elementiem vērtības, kas iegūtas aprēķinot  elementa rindas un 
//kolonnas indeksu starpību. Izdrukāt masīva vērtības ekrānā
#include <iostream>
using namespace std;
int main(){
	int A[10][10];
	int r,k;
	for(r = 0; r < 10; r++){
		for(k = 0; k < 10; k++){
			A[r][k] = r-k;
			if(r-k > 0){
				cout<<A[r][k]<<"  ";
			}else{
				cout<<A[r][k]<<" ";
			}
			
		}	
		cout<<"\n";
	}
	return 0;
}
