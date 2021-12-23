#include <bits/stdc++.h>
using namespace std;

void print_char(char c, int n) {while(n--) {cout << c;}}

int main() {
    string line;
    while(getline(cin, line)) {
        int number = 0;

        for (auto ch: line) {
            if (ch == 'b')
                ch = ' ';

            if ( isdigit(ch) ) 
                number += ch - '0';

            else if ( ch == '!')
                cout << endl;

            else {
                print_char(ch, number);
                number = 0;
            }
        }
        
        cout << endl;
    }

    return 0;
}
