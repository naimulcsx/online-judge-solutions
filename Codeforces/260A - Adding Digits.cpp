#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    int a, b, c;
    cin >> a >> b >> c;

    for (int i = 0; i < 10; ++i) {
        if ( (a * 10 + i) % b == 0 ) {
            cout << a * 10 + i;
            for (int i = 0; i < c - 1; ++i) cout << 0;
            return 0;
        }
    }
    
    cout << -1 << endl;
    return 0;
}
