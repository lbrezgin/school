#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	srand(time(0));
	int x,y, sk = 0;
	x = rand()%100+1;
	do {
		sk++;
		cout<<"Uzmini skaitli no 1 lidz 100: ";
		cin>>y;
		if(x>y) cout<<"Datora skaitlis ir lielāks!\n";
		else if(x<y) cout<<"Datora skaitlis ir mazāks!\n";
			else cout<<"Apsveicam! Tas patiesam ir skaitlis "<<x<<"\n";
	}while(x!=y);
	cout<<"Skaitlis tika uzminets "<<sk<<" reize(s)\n";
}
