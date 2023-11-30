#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void IzveidotMasivu(int a[], int n);
void DrukatMasivu(int a[], int n);
double AprekinatVidejo(int a[], int n);

int main() {
    srand(time(0));
    int n1, n2, vid;
    cout << "1. masīva elementu skaits: "; cin >> n1;
    int a1[n1];
    IzveidotMasivu(a1, n1);
    DrukatMasivu(a1, n1);
    double vid1 = AprekinatVidejo(a1, n1);
    cout << "Masīva vērtību vidējais aritmētiskais: " << vid1 << "\n\n";
    cout << "2. masīva elementu skaists: ";   cin >> n2;
    int a2[n2];
    IzveidotMasivu(a2, n2);
    DrukatMasivu(a2, n2);
    double vid2 = AprekinatVidejo(a2, n2);
    cout << "Masīva vērtību vidējais aritmētiskais: " << vid2 << "\n";
}

void IzveidotMasivu(int a[], int n) {
    for (int i = 0; i < n; ++i) a[i] = rand()%10;
}

void DrukatMasivu(int a[], int n) {
    for (int i = 0; i < n; ++i) cout << a[i] << " "; cout << "\n";
}

double AprekinatVidejo(int a[], int n) {
    double vid = 0;
    for ( int i = 0; i < n; i++ ) vid = vid + a[i];
    vid = vid / n;
    return vid;
}
