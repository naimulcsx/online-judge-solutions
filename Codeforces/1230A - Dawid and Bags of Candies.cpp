#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> coins(4);
int func( int pos, int left ) {
    if ( left == 0 ) return 1;
    if ( pos > 3 ) return 0;

    int p = 0, q = 0;
    if ( left - coins[pos] >= 0 )
        p = func( pos + 1, left - coins[pos] ) ;
    q =  func( pos + 1, left ) ;
    return p | q;
}

int main() {

    int s = 0;
    for (int i = 0; i < 4; ++i) {
        cin >> coins[i];
        s += coins[i];
    }

    if ( s % 2 != 0 ) cout << "NO" << endl;
    else {
        if ( func(0, s / 2) ) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}
