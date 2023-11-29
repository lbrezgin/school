#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
	srand(time(0));
	string name, username, password;
	char symbol;
	int year, i, sum = 0, num = 1000, ost;
	cout<<"Ievdiet Jūsu vardu: "; 
	cin>>name;
	cout<<"Ievdiet Jūsu uzvardu: "; 
	cin>>username;
	cout<<"Ievdiet Jūsu dzimšanas gādu: "; 
	cin>>year;
	do {
		cout<<"Ievadiet jebkūru simbolu (ne burts un ne cipars): ";
		cin>>symbol;
		if(isalpha(symbol)){
			cout<<"Tas ir burts!";
		}else if(isdigit(symbol)){
			cout<<"Tas ir cipars!";
		}
		cout<<"\n";
	}while(isalpha(symbol) || isdigit(symbol));
	password[0] = tolower(username[0]); 
	password[1] = toupper(name[name.length()-1]);
	password[2] = tolower(username[username.length()/2]);
	password[3] = symbol;
	password[4] = '0' + (rand()%10);
	password[5] = tolower(name[name.length()/2]);
	password[6] = toupper(username[username.length()-1]);
	password[7] = tolower(name[0]);
	while(year > 0){
		sum += year / num;
		year = year % num;
		num = num / 10;
	}
	if(sum > 9){
		ost = sum % 10;
		password[8] = '0' + sum/10;
		password[9] = '0' + ost/1;
	}else{
		password[8] = '0' + sum;
	}
	cout<<"Jūsu parole ir: ";
	for(i = 0; i <= 9; i++){
		cout<<password[i];
	}
	return 0;
}



