#include <iostream>
using namespace std;
int main(){
	string vards;
	int n;
	cout<<"Ievadi kādu vārdu: "; cin>>vards;
	n = vards.length();
	cout<<"Vārds sastāv no "<<n<<" burtiem.\n";
	cout<<"Varda pirmais burts ir: \""<<vards[0]<<"\".\n";
	cout<<"Vārda pēdējais burts ir: \""<<vards[n-1]<<"\".\n";
}
