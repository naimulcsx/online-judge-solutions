#include <bits/stdc++.h>
using ll = long long;
using namespace std;

ll dp[100100];
const int m = 1e9 + 7;

int main() {
    ios::sync_with_stdio(false);

    string str;
    cin >> str;
    dp[1] = 1;
    dp[2] = 2;

    int i = 0, sz = str.size();
    for (int i = 3; i <= sz; ++i) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % m;
    }

    ll res = 1;

    while( i < sz ) {
        int j = i + 1;
        if ( str[i] == 'm' || str[i] == 'w' ) {
            cout << 0 << endl;
            return 0;
        }
        while(j < sz && str[j] == str[i]) j++;

        if ( str[i] == 'u' || str[i] == 'n' ) {
            if ( j - i >= 2 ) {
                res = (res * dp[j - i]) % m;
            }
        }

        i = j;
    }
    
    cout << res % m << endl;
    return 0;
}
