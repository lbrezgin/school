#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
int main(){
	srand(time(0));
	int i,x,cip = 0, ger = 0;
	for(i = 1; i <= 200; i++){
		x = rand()%2;
		if(x == 0){
			ger++;
		}else{
			cip++;
		}
	}
	cout << "Metot monētu 200 reizes cipars uzkrita " << cip << " reizes, bet ģērbonis " << ger << " reizes.";
	return 0;
}
