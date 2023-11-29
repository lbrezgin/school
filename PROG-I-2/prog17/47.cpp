#include <iostream>
using namespace std;
struct skolens{
	string vards;
	string uzvards;
	int klase;
};
int main(){
	skolens kl2_1, kl2_2, kl2_3;
	skolens kl3_1, kl3_2, kl3_3;
	kl2_1.vards = "Anna";
   	kl2_1.uzvards = "Liepa";
   	kl2_1.klase = 2;
   	kl2_2.vards = "Juris";
   	kl2_2.uzvards = "Ozols";
   	kl2_2.klase = 2;
   	kl2_3.vards = "Jānis";
   	kl2_3.uzvards = "Lazda";
   	kl2_3.klase = 2;
   	kl3_1 = kl2_1;
   	kl3_2 = kl2_2;
   	kl3_3 = kl2_3;
   	kl3_1.klase = 3;
   	kl3_2.klase = 3;
   	kl3_3.klase = 3;
   	cout << kl3_1.vards << " " << kl3_1.uzvards << " " << kl3_1.klase << ". klase\n";
	cout << kl3_2.vards << " " << kl3_2.uzvards << " " << kl3_2.klase << ". klase\n";
   	cout << kl3_3.vards << " " << kl3_3.uzvards << " " << kl3_3.klase << ". klase\n";
}

