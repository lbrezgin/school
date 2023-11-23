#include <iostream>
using namespace std;
int main(){
	string week[7];
	int i;
	week[0] = "Pirmdiena";
	week[1] = "Otrdiena";
	week[2] = "Trešdiena";
	week[3] = "Ceturdiena";
	week[4] = "Piektdiena";
	week[5] = "Sestdiena";
	week[6] = "Svētdiena";
 	cout << "Darbdienas:\n";

 	for(i = 0; i < 10; i++){
 		cout << "\t" << week[i] << "\n";
 	}

	cout << "Brīvdienas:\n";
	cout << "\t" << week[5] << "\n";
	cout << "\t" << week[6] << "\n";

	return 0;
}
