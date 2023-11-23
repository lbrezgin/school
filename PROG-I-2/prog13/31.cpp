#include <iostream>
using namespace std;
int main(){
	string week[] = {"Pirmdiena", "Otrdiena", "Trešdiena", "Ceturtdiena", "Piektdiena", "Sestdiena", "Svētdiena"};
	int i;
	cout << "Dienas:\n";

	for ( i = 0; i < (sizeof(week)/sizeof(week[0])); i++ ) {
       cout << "\t" << week[i] << "\n";
   }
	return 0;
}
