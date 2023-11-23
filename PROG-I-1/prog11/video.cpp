#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main(){
	srand(time(0));
	int x,y,atb,punkti=0,sk=0;
	do{
		x = rand()%101;
		y = rand()%101;
		cout<<"Cik ir "<<max(x,y)<<" - "<<min(x,y)<<" = ";
		cin>>atb;
		if(atb==max(x,y)-min(x,y)){
			cout<<"Pareizi!\n\n";
			punkti++;
		}else{
			cout<<"Nepareizi!\n\n";
		}
		sk++;
	}while(punkti<10);
	cout<<"Lai sniegtu 10 pareizas atbildes, tu risināji: "<<sk<<" piemērus.";
	return 0;
}
