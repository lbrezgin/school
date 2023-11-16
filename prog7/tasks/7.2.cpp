#include <iostream>
using namespace std;
int main(){
	srand(time(0));
	int a,b;
	a = rand()%11+10;
	b = rand()%11+15;
	cout<<"No skaitliem "<<a<<" un "<<b<<" lielākais ir "<<max(a,b);
}
