// Sastādīt programmu, kas nosaka vai lietotāja ievadītā simbolu virkne 
// varētu tikt uzskatīta par e-pasta adresi - satur tieši vienu 
// simbolu '@'.
#include <iostream>
using namespace std;
int main(){
	string email,a = "@";
	string check;
	int n,j;
	cout<<"Ievadiet paredzēto e-pasta adresi: "; cin>>email;
	int i = email.find(a);
	n = email.length();
	check = email.substr(i+1,n-1);
	j = check.find(a);
	if(i > 0 && j < 0){
		cout<<"Jūsu simblu virkne vārētu būt par e-pasta adresi.";
	}else{
		cout<<"Ievadita simbolu virkne neatbilst e-pastas veidošanas standartiem.";
	}
	return 0;
}
