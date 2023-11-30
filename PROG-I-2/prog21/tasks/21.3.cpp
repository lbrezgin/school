#include <iostream>
using namespace std;
struct shop {
    string name;
    int count;
    float price;
};

void JaunaPrece(shop A[], int &n); //kas lietotājam ļauj ievadīt preces nosaukumi, skaitu un cenu;
void PrecuSumma(shop A[], int &n); //kas aprēķina visu tirdzniecībā esošo preču kopējo vērtību;
void PrecuSaraksts(shop A[], int &n); //kas ļauj apskatīties preču sarakstu alfabēta secībā pēc nosaukuma;
void PirktPreci(shop A[], int &n); //kas ievadot preces nosaukumu, ja prece ir pieejama tirdzniecībā, tās skaitu samazina par 1.

int main() {
    shop A[1000];
    int izv, n = 0;
    do {
        cout << "Darbības ar e-veikalu\n";
        cout << "1. Uzkrāt jaunu preci\n";
        cout << "2. Aprēķināt tirdzniecībā esošo preču kopējo vērtību\n";
        cout << "3. Apskatīt preču sarakstu alfabēta secībā pēc nosaukuma\n";
        cout << "4. Nopirkt preci\n";
        cout << "5. Beigt darbu\n";
        cout << "----------------------------------\n";
        cout << "Izvēle: "; cin >> izv;
        switch (izv) {
            case 1: JaunaPrece(A, n); break;
            case 2: PrecuSumma(A, n); break;
            case 3: PrecuSaraksts(A, n); break;
            case 4: PirktPreci(A, n); break;
        }
    } while (izv != 5);
    cout << "Uz redzēšanos!";
    return 0;
}

void JaunaPrece(shop A[], int &n) {
    cout << "\nIevadiet preces nosaukumu: ";
    cin >> A[n].name;
    cout << "Ievadiet preces skaitu: ";
    cin >> A[n].count;
    cout << "Ievadiet preces cenu: ";
    cin >> A[n].price;
    n++;
    cout << "\n";
}

void PrecuSumma(shop A[], int &n) {
    double sum = 0;
    cout << "Jūsu visu preču kopējā summa ir: ";
    for (int i = 0; i < n; i++) {
        sum += A[i].count * A[i].price;
    }
    cout << sum << "€";
    cout << "\n\n";
}

void PrecuSaraksts(shop A[], int &n) {
    for (int k = 0; k < n - 1; k++) {
        for (int i = 0; i < n - 1 - k; i++) {
            if (A[i].name > A[i + 1].name) {
                swap(A[i], A[i + 1]);
            }
        }
    }
    cout << "Jūsu veikalā tagad ir " << n << " dažādas preces\n";
    for (int i = 0; i < n; i++) {
        cout << "Nosaukums: " << A[i].name << "\n";
        cout << "Atlikums noliktavā: " << A[i].count << "\n";
        cout << "Cena par 1 vienību: " << A[i].price << "€\n";
        cout << "\n";
    }
}

void PirktPreci(shop A[], int &n) {
    string p_name;
    cout << "Ievadiet preces nosaukumu: "; cin >> p_name;
    for (int i = 0; i < n; i++) {
        if (A[i].name == p_name) {
            if (A[i].count > 0) {
                A[i].count -= 1;
                cout << "Prece nopirkta! Paliek " << A[i].count << " preces " << A[i].name << "\n";
            } else {
                cout << "Šī prece ir izpārdota!\n";
            }
        }
    }
}
