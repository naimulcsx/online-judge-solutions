#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        if (s.length() == 1) {
            if ( s[0] == '1' || s[0] == '4' )
                cout << '+' << endl;
        }

        else if (s.length() == 2) {
            if (s[0] == '7' && s[1] == '8')
                cout << '+' << endl;
        }

        else {
            if (s[s.length() - 1] == '5' && s[s.length() -2] == '3')
                cout << '-' << endl;

            else if (s[0] == '9' && s[s.length() - 1] == '4')
                cout << '*' << endl;

            else if (s[0] == '1' && s[1] == '9' && s[2] == '0')
                cout << '?' << endl;

            else
                cout << '?' << endl;
        }
    }
    return 0;
}
