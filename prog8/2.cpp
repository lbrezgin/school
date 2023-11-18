#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	srand(time(0));
	double sum, cena;
	int kods;
	cout<<"Pirkuma summa: "; cin>>sum;
	kods=rand()%4+1;
	switch(kods){
		case 1: cena=sum-sum*0.5; 	break;
		case 2:	cena=sum-sum*0.1;	break;
		case 3:	cena=sum-sum*0.25;	break;
		case 4:	cena=sum-sum*0.4;	break;
	}
	cout<<"Pirkuma summa ar atlaidi ir: "<<cena;
}
