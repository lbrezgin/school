//Sastādi programmu, kas lietotājam jautā ievadīt vēja ātrumu
//(m/s) un atbilstoši Boforta skalai izdrukā vēja nosaukumu
//latviešu valodā
#include <iostream>
using namespace std;
int main(){
  double wind;
  cout<<"Ievadiet vēja atrumu: "; cin>>wind;
  if(wind<=0.2)                   cout<<"bezvējš";
      else if(wind>=0.3 && wind<=1.5)      cout<<"vēja vēsma";
            else if(wind>=1.6 && wind<=3.3)      cout<<"viegls vējš";
                  else if(wind>=3.4 && wind<=5.4)      cout<<"lēns vējš";
                      else if(wind>=5.5 && wind<=7.9)      cout<<"mērens vējš";
                          else if(wind>=8.0 && wind<=10.7)     cout<<"mēreni stiprs vējš";
                              else if(wind>=10.8 && wind<=13.8)    cout<<"stiprs vējš";
                                  else if(wind>=13.9 && wind<=17.1)    cout<<"ļoti stiprs vējš";
                                      else if(wind>=17.2 && wind<=20.7)    cout<<"vētrains";
                                          else if(wind>=20.8 && wind<=24.4)    cout<<"vētra";
                                              else if(wind>=24.5 && wind<=28.4)    cout<<"stipra vētra";
                                                  else if(wind>=28.5 && wind<=32.6)    cout<<"ļoti stipra vētra (Auka)";
                                                      else if(wind>=32.7)                  cout<<"Orkāns";
}
