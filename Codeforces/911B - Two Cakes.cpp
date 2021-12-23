#include <bits/stdc++.h>
using namespace std;



int main() {
    ios::sync_with_stdio(false);
    
    int n, a, b;
    cin >> n >> a >> b;

    int taken = min( a, b );
    for (int i = taken; i >= 1; --i) {
        if ( a / i + b / i >= n ) {
            cout << i << endl;
            break;
        }
    }
    
    return 0;
}
