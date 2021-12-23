#include <iostream>
#include <string>

using namespace std;

int main() {
    int _case = 1;

    while(1) {
        string greet;
        cin >> greet;
        if (greet == "#") break;
        

        if (greet == "HELLO") {
            cout << "Case " << _case << ": ENGLISH" << endl;
        } else if (greet == "HOLA") {
            cout << "Case " << _case << ": SPANISH" << endl;
        } else if (greet == "HALLO") {
            cout << "Case " << _case << ": GERMAN" << endl;
        } else if (greet == "BONJOUR") {
            cout << "Case " << _case << ": FRENCH" << endl;
        } else if (greet == "CIAO") {
            cout << "Case " << _case << ": ITALIAN" << endl;
        } else if (greet == "ZDRAVSTVUJTE") {
            cout << "Case " << _case << ": RUSSIAN" << endl;
        }  else {
            cout << "Case " << _case << ": UNKNOWN" << endl;
        }

        _case++;
    }

    return 0;
}