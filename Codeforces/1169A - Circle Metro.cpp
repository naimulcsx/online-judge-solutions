#include <bits/stdc++.h>
using namespace std;

int main() {    
    int n, a, x, b, y;
    cin >> n >> a >> x >> b >> y;

    int currP1 = a, currP2 = b;

    while( true )  {
        if ( currP2 == 0 ) currP2 = n;
        if ( currP1 > n ) currP1 = 1;
        if ( currP1 == currP2 ) {
            cout << "YES" << endl;
            return 0;
        }

        if ( currP2 == y || currP1 == x ) break;
        currP1++; 
        currP2--;
    }

    cout << "NO" << endl;
    return 0;
}