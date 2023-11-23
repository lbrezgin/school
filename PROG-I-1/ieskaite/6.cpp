#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int N;
	double sum;
	cout<<"Ievadiet žodziņa garumu: "; cin>>N;
	sum = ceil(((N * 8.0 * 4) / 20)) * 0.88;
	cout<<"Nepieciešamo skrūvju izmaksas būs: "<<sum<<" EUR.";
	return 0;
}
