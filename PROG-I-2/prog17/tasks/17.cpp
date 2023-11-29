#include <iostream>
using namespace std;
struct shop {
    string name;
    int count;
    float price;
};
int main() {
    shop A[1000];
    int izv, i, k, n = 0;
    float sum = 0;
    string p_name;
    do {
        cout << "Darbības ar e-veikalu\n";
        cout << "1. Uzkrāt jaunu preci\n";
        cout << "2. Informācija par precēm\n";
        cout << "3. Aprēķināt tirdzniecībā esošo preču kopējo vērtību\n";
        cout << "4. Apskatīt preču sarakstu alfabēta secībā pēc nosaukuma\n";
        cout << "5. Nopirkt preci\n";
        cout << "6. Atlikušo preču skaits\n";
        cout << "7. Beigt darbu\n";
        cout << "----------------------------------\n";
        cout << "Izvēle: "; cin >> izv;
        switch (izv) {
            case 1:
                cout << "\nIevadiet preces nosaukumu: ";
                cin >> A[n].name;
                cout << "Ievadiet preces skaitu: ";
                cin >> A[n].count;
                cout << "Ievadiet preces cenu: ";
                cin >> A[n].price;
                n++;
                cout << "\n";
                break;
            case 2:
                cout << "Jūsu veikalā tagad ir " << n << " dažādas preces\n\n";
                for (i = 0; i < n; i++) {
                    cout << "Nosaukums: " << A[i].name << "\n";
                    cout << "Atlikums noliktavā: " << A[i].count << "\n";
                    cout << "Cena par 1 vienību: " << A[i].price << "€\n";
                    cout << "\n";
                }
                break;
            case 3:
                sum = 0;
                cout << "Jūsu visu preču kopējā summa ir: ";
                for (i = 0; i < n; i++) {
                    sum += A[i].count * A[i].price;
                }
                cout << sum << "€";
                cout << "\n\n";
                break;
            case 4:
                for (k = 0; k < n - 1; k++) {
                    for (i = 0; i < n - 1 - k; i++) {
                        if (A[i].name > A[i + 1].name) {
                            swap(A[i], A[i + 1]);
                        }
                    }
                }
                cout << "\n";
                for (i = 0; i < n; i++) {
                    cout << A[i].name << "\n";
                }
                cout << "\n";
                break;
            case 5:
                cout << "Ievadiet preces nosaukumu: "; cin >> p_name;
                for (i = 0; i < n; i++) {
                    if (A[i].name == p_name) {
                        if (A[i].count > 0) {
                            A[i].count -= 1;
                            cout << "Prece nopirkta! Paliek " << A[i].count << " preces " << A[i].name << "\n";
                        } else {
                            cout << "Šī prece ir izpārdota!\n";
                        }
                    }
                }
                break;
            case 6:
                cout << "Ievadiet preces nosaukumu: "; cin >> p_name;
                for (i = 0; i < n; i++) {
                    if (A[i].name == p_name) {
                        cout << "Atlikušas " << A[i].count << " vienības\n";
                    }
                }
                break;
        }
    } while (izv != 7);
    cout << "Uz redzēšanos!";
    return 0;
}
