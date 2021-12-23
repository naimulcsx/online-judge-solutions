#include <bits/stdc++.h>
using namespace std;

bool can( int dig, int sum ) {
    return sum >= 0 && sum <= dig * 9;
}

int main() {
    int m, k, s;
    cin >> m >> k;

    s = k;
    string mn, mx;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < 10; ++j) {
            if ( m > 1 && i == 0 && j == 0 ) continue;
            if ( !can(m - i - 1, s - j) ) continue;
            
            mn += char(j + '0');
            s -= j;
            break;
        }
    }

    s = k;
    for (int i = 0; i < m; ++i) {
        for (int j = 9; j >= 0; --j) {
            if ( !can( m - i - 1, s - j ) ) continue;
            mx += char(j + '0');
            s -= j;
            break;
        }
    }

    if ( (m > 1 && k == 0 ) || can(m, k) == false ) cout << -1 << ' ' << -1 << endl;
    else cout << mn << ' ' << mx << endl;
    
    return 0;
}
