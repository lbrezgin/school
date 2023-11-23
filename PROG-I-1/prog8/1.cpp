#include <iostream>
using namespace std;
int main() {
   char s;
   cout << "Lūdzu, ievadi vienu simbolu: ";   cin >> s;
   switch(s) {
         case '0': case '1': case '2': case '3':  case '4':  case '5': case '6': case '7': case '8': case '9': cout << "Cipars!"; break;

         case 'a': case 'b': case 'c': case 'd':  case 'e': case 'f': case 'g': case 'h': case 'i': case 'j': case 'k': case 'l': 
         case 'm':  case 'n': case 'o': case 'p': case 'r': case 's': case 't': case 'u':  case 'v': case 'q': case 'w': case 'x':
         case 'y': case 'z': cout << "Mazais burts!"; break;

         case 'A': case 'B': case 'C': case 'D':  case 'E': case 'F': case 'G': case 'H': case 'I': case 'J': case 'K': case 'L':
         case 'M': case 'N': case 'O': case 'P': case 'R': case 'S': case 'T': case 'U':  case 'V': case 'Q': case 'W': case 'X':
         case 'Y': case 'Z': cout << "Lielais burts!"; break;

         case '+': case '-': case '*': case '/': case '=': case '>': case '<': cout << "Matemātiskais simbols!"; break;

         case '.': case '!': case '?': case ',': case ':': case ';': case '"': cout << "Pieturzīme!"; break;

         default: cout << "Speciālais simbols!";
   }
} 
