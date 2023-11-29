// Sastādīt programmu, kas izveido masīvu A[7][10] un aizpilda tā 
//vērtības ar nejaušiem skaitļiem intervālā [10;90]. Noteikt, vai masīvs
//satur skaitli 45, ja satur noteikt, tā atrašanās vietas rindas un kolonnas indeksu.
#include <iostream>
#include <ctime>
using namespace std;
int main(){
	srand(time(0));
	int A[7][10];
	int r,k;
	for(r = 0; r < 7; r++){
		for(k = 0; k < 10; k++){
			A[r][k] = rand()%81+10;
			cout<<A[r][k]<<" ";
		}
		cout<<"\n";
	}
	cout<<"\n";
	for(r = 0; r < 7; r++){
		for(k = 0; k < 10; k++){
			if(A[r][k] == 45){
				cout<<"45 atrodas "<<r+1<<" rindā "<<k+1<<" kolonnā.";
				cout<<"\n";
			}
		}
	}
	return 0;
}
