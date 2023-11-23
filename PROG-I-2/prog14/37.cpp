#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	srand(time(0));
	int A[20], i;
	for(i = 0; i < 20; i++){
		A[i] = rand()%100+1;
		cout<<A[i]<<" ";
	}
	i = 0;
	while(i < 20 && A[i] != 50) i++;
	if (i == 20) cout<<"Masīvā nav skaitlis 50";
	else cout << "Masīva " << i+1 << ". elements ir 50";
}
