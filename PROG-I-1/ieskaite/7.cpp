#include <iostream>
#include <ctime>
using namespace std;
int main(){
	srand(time(0));
	int sk;
	string dz;
	sk = rand()%10+1;
	switch(sk){
		case 1: dz = "zirgs";  break;
		case 2: dz = "lācis";  break;
		case 3: dz = "vilks";  break;
		case 4: dz = "suns";   break;
		case 5: dz = "kaķis";  break;
		case 6: dz = "putns";  break;
		case 7: dz = "zivs";   break;
		case 8: dz = "pīle";   break;
		case 9: dz = "vāvere"; break;
		case 10: dz = "jērs";  break;
	}
	cout<<dz;
	return 0;
}
