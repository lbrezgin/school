//Uzzīmē blokshēmu vai izveido algoritma vārdisko aprakstu un
//sastādi programmu, kas nosaka, kurš no trīs lietotāja
//ievadītiem skaitļiem x, y vai z ir lielākais.
#include <iostream>
using namespace std;
int main(){
  double x,y,z;
  cout<<"Ievadiet x vertību: "; cin>>x;
  cout<<"Ievadiet y vertību: "; cin>>y;
  cout<<"Ievadiet z vertību: "; cin>>z;
  if(x>y && x>z)
      cout<<"x ("<<x<<")"<<" ir lielākais no skaitļiem ("<<x<<" "<<y<<" "<<z;
    else if (y>z)
      cout<<"y ("<<y<<")"<<" ir lielākais no visiem ("<<x<<" "<<y<<" "<<z;
      else
          cout<<"z ("<<z<<")"<<" ir lielākais no visiem ("<<x<<" "<<y<<" "<<z;
}
