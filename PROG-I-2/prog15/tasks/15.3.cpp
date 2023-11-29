//Sastādīt programmu, kura izveido un aizpilda ar nejaušiem skaitļiem 
//intervālā [0;9] masīvu A[5][7]. Izdrukāt masīva vērtības ekrānā.
// Aprēķināt un izvadīt ekrānā masīva katras rindas elementu summu un 
//masīva visu elementu summu.
#include <iostream>
#include <ctime>
using namespace std;
int main(){
	srand(time(0));
	int A[5][7];
	int r,k,sum=0,all_sum=0;
	for(r = 0; r < 5; r++){
		for(k = 0; k < 7; k++){
			A[r][k] = rand()%10;
			cout<<A[r][k]<<" ";
			all_sum += A[r][k];
			sum += A[r][k];
		}
		cout<<" | sum = "<<sum;
		sum = 0;
		cout<<"\n";
	}
	cout<<"Visu massivu summa ir "<<all_sum;
	return 0;
}	
