#include <iostream>
using namespace std;
class Persona {
private:
    string vards;
    int gadi;
public:
    void Druka() { cout << vards << " ir " << gadi << " gadus vecs."; }
};
int main () {
    Persona P;
    P.vards="Roberts";
    P.gadi=17;
    P.Druka();
}
