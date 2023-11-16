//Uzzīmē blokshēmu vai izveido algoritma vārdisko aprakstu un sastādi programmu,
//kas nosaka vai lietotāja ievadītais skaitlis x ir pozitīvs, negatīvs vai nulle.
#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Ievadiet x vērtību: "; cin>>x;
    if(x>0){
        cout<<"Skaitlis ir pozitīvs!";
    }else{
        if(x==0){
            cout<<"Skaitlis ir nulle!";
        }else{
            cout<<"Slaitlis ir negatīvs!";
        }
    }
}
