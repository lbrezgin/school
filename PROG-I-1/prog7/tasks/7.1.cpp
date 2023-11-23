#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double a;
	cout<<"Ievadiet skaitli: "; cin>>a;
	cout<<"Noapaļot "<<a<<" iznāk "<<round(a)<<"\n";
	cout<<"Mazāka iespējama veselo skaitļu vērtība lielāka par skaitli "<<a<<" ir "<<ceil(a)<<"\n";
	cout<<"Lielāka iespējama veselo skaitļu vērtība mazāka par skaitli "<<a<<" ir "<<floor(a)<<"\n";
	return 0;
}
