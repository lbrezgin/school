#include <iostream>
using namespace std;
int main(){
        int A, B, N;
        cout << "Ievadi naturāla skaitļa A vērtību: ";
        cin >> A;
        cout << "Ievadi naturāla skaitļa B vērtību: ";
        cin >> B;
        cout << "LKD(" << A << "," << B << ") = ";
        N = A % B;
        while (N != 0){
                A = B;
                B = N;
                N = A % B;
        }
        cout << B;
}
