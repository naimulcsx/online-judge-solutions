#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    int n;
    string str;
    cin >> n >> str;

    int p = 0, q = 0;
    for (auto el: str) {
        if (el == 'x') p++;
        else if (el == 'X') q++;
    }

    int req = n / 2;
    if (p == req && q == req) {
        cout << 0 << endl;
        cout << str << endl;
    } 
    
    else if ( p > req ) {
        int diff = p - req, i = 0, l = str.length();
        cout << diff << endl;

        while( diff != 0 ) {
            if (i == l) break;
            if ( islower(str[i]) ) {
                str[i] = toupper(str[i]);
                diff--;
            }
            ++i;
        }

        cout << str << endl;
    } 
    
    else if ( q > req ) {
        int diff = q - req, i = 0, l = str.length();
        cout << diff << endl;

        while(diff != 0) {
            if (i == l) break;
            if ( isupper(str[i]) ) {
                str[i] = tolower(str[i]);
                diff--;
            }
            ++i;
        }

        cout << str << endl;
    }
    
    return 0;   
}