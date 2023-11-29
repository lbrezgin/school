#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
	srand(time(0));
	int a[4][5];
	int i,j;
	for(i = 0; i < 4; i++){
		for(j = 0; j < 5; j++){
			a[i][j] = rand()%10;
			cout << a[i][j] << " ";   
		}
		cout << "\n";
	}
	return 0;
}
