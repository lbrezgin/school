#include <iostream>
using namespace std;
int main(){
	int num, sum = 0, count = 0;
	for(num = 10; num < 100; num += 2){
		sum += num;
		cout<<num<<"\n";
		if(num % 3 == 0) count += 1;
	}
	cout<<"Summa ir: "<<sum<<", dalas ar 3 bez atlikuma: "<<count;
	return 0;
}
