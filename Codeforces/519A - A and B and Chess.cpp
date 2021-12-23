#include <bits/stdc++.h>
using namespace std;

int m[200];

int main() {
    m['q'] = 9; m['r'] = 5; m['b'] = 3; m['n'] = 3; m['p'] = 1;

    string str;
    int w = 0, b = 0;

    while( cin >> str ) {
        for ( auto el: str ) {
            if ( isupper(el) ) w += m[tolower(el)];
            else b += m[el];
        }
    }

    if ( w == b ) cout << "Draw" << endl;
    else if ( w > b ) cout << "White" << endl;
    else cout << "Black" << endl;
    return 0;
}
