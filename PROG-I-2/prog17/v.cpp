#include <iostream>
#include <algorithm>
using namespace std;
struct dalibnieks{
    string nos;
    string vards;
    int vec;
    int punkti1;
    int punkti2;
    int punkti3;
    int punkti;
};
int main(){
    dalibnieks a[30];
    int n = 0, i, k;
    int izv;
    int sum = 0;
    do{
        cout<<"1. Pievienot datus par konkursa dalibniekiem\n";
        cout<<"2. Apskatit dalibnieku sarakstu\n";
        cout<<"3. Uzvarētāju saraksts\n";
        cout<<"4. Dalibnieku vidēju vecums\n";
        cout<<"5. Beigt darbu\n";
        cout<<"--------------------------------------------------\n";
        cout<<"Izvele: "; cin>>izv;
        switch(izv){
            case 1:
                if(n < 30){
                    cout<<"\nDarba nosaukums: "; cin>>a[n].nos;
                    cout<<"\nVards: "; cin>>a[n].vards;
                    cout<<"\nVēcums: "; cin>>a[n].vec;
                    do {
                        cout<<"\n1. tiesnesa vērtējums: ";
                        cin>>a[n].punkti1;
                    }while(a[n].punkti1 < 1 || a[n].punkti1 > 20);
                    do {
                        cout<<"\n2. tiesnesa vērtējums: ";
                        cin>>a[n].punkti2;
                    }while(a[n].punkti2 < 1 || a[n].punkti2 > 20);
                    do {
                        cout<<"\n3. tiesnesa vērtējums: ";
                        cin>>a[n].punkti3;
                    }while(a[n].punkti3 < 1 || a[n].punkti3 > 20);
                    a[n].punkti = a[n].punkti1 + a[n].punkti2 + a[n].punkti3;
                    n++;
                    cout<<"\n";
                }else{
                    cout<<"Visi konkursa dalibnieki ir reģistrēti!";
                }
                break;
            case 2:
                cout<<"\n";
                for(i = 0; i < n; i++){
                    cout<<a[i].nos<<"\t"<<a[i].vards<<"\t"<<a[i].vec<<"\t"<<a[i].punkti<<"\n";

                }
                cout<<"\n";
                break;
            case 3:
                for(k = 0; k < n-1; k++){
                    for(i = 0; i < n-1-k; i++){
                        if(a[i].punkti < a[i+1].punkti){
                            swap(a[i], a[i+1]);
                        }
                    }
                }
                cout<<"\n";
                for(i = 0; i < 3; i++){
                    cout<<i+1<<". vieta "<<a[i].nos<<"\t"<<a[i].vards<<"\t"<<a[i].punkti<<"\n";
                }
                cout<<"\n";
                break;
            case 4:
                sum = 0;
                for(i = 0; i < n; i++){
                    sum += a[i].vec;
                }
                cout<<"\nKonkursa dalībnieku vidējais vēcums ir "<<1.0*sum/n<<"\n";
                break;
        }
    }while(izv != 5);
}
