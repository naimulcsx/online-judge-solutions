#include <bits/stdc++.h>
using namespace std;

int cnt[110];

int main() {
    ios::sync_with_stdio(false);
    int n, m, inp;
    cin >> n >> m;

    for (int i = 0; i < m; ++i) {
        cin >> inp;
        cnt[inp]++;
    }

    bool notEnoughFood = true;
    for ( int i = 150; i > 0; --i ) {
        int total = 0;
        for ( int j = 1; j <= 100; ++j ) {
            total += cnt[j] / i;
        }
        if ( total >= n ) {
            notEnoughFood = false;
            cout << i << endl;
            break;
        }
    }

    if ( notEnoughFood ) cout << "0" << endl;
    return 0;
}
