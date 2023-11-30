#include <iostream>
#include <fstream>
using namespace std;
int main() {
    double t = 0;
    double sum = 0, min = 0;
    int count = 0, min_day = 0;
    ifstream march;
    march.open("marts.txt", ios::in);
    march >> t;
    min = t;
    min_day = count;
    while (!march.eof()) {
        count++;
        cout << t << "\n";
        if (t > 0) {
            sum += t;
        } else {
            sum -= t;
        }
        march >> t;
        if (min > t) {
            min = t;
            min_day = count;
        }
    }
    cout << "Vidēja temperātura martā bija: " << sum / count<<"\n";
    cout << "Viszemaka temperatūra bijā " << min_day+1 << "mārta.";
    march.close();
    return 0;
}







