#include <bits/stdc++.h>
#define len(str) (int) str.size()
#define what_is(x) cout << #x << " : " << x << endl;
#define ll long long
using namespace std;

int main() {
    int n;
    cin >> n;

    int p = -1, q = -1, mn = numeric_limits<int>::max();
    for ( int b = 0; 7 * b <= n; ++b ) {
        if ( (n - (7 * b)) % 4 == 0 ) {
            int a = (n - 7 * b) / 4;

            if ( a + b < mn ) {
                p = a;
                q = b;
                mn = a + b;
            }
        }
    }

    if (p + q == -2) cout << "-1" << endl;
    else {
        while(p--) cout << "4";
        while(q--) cout << "7";
        cout << endl;
    }
    return 0;
}
