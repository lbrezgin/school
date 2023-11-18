#include <iostream>
using namespace std;
int main(){
	int i;
	char BURTS, burts;
	for(i=90; i>=65; i--){
		BURTS=i;
		burts=i+32;
		cout<<BURTS<<" "<<burts<<"\t";
	}
	return 0;
}
