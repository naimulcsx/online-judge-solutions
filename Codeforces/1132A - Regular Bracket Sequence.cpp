#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    int p, q, r, s;
    cin >> p >> q >> r >> s;

    if ( p == 0 && p == s ) {
        if ( r == 0 && q > 0 ) cout << "1" << endl;
        else if ( r == 0 && q == 0 ) cout << "1" << endl;
        else cout << "0" << endl;
    }

    else if ( p == s ) 
        cout << "1" << endl;

    else 
        cout << "0" << endl;
    
    return 0;
}
