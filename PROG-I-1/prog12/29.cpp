#include <iostream>
using namespace std;
int main(){
	int a,b,reiz;
	for(a = 1; a <= 10; a++){
		for(b = 1; b <= 10; b++){
			reiz = a * b;
			cout << reiz << "/" << b << "=" << a << "\t";
		}
		cout << "\n";
	}
}
