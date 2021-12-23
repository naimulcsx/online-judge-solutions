#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int row[1010], col[1010];
int mat[1010][1010];


ll bigmod( ll n, ll p, ll m ) {
    if (p == 0) return 1;

    if (p & 1) {
        ll res = bigmod(n, p - 1, m);
        return ((n % m) * res) % m;
    }

    ll res = bigmod(n, p / 2, m);
    return ((res % m) * (res % m)) % m;
}

int main() {
    #ifdef __DEBUG
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // __DEBUG

    int r, c;
    cin >> r >> c;
    for (int i = 1; i <= r; ++i) {
        cin >> row[i];
        for (int j = 1; j <= row[i]; ++j) mat[i][j] = 1;
    }
    for (int j = 1; j <= c; ++j) {
        cin >> col[j];
        for (int i = 1; i <= col[j]; ++i) mat[i][j] = 1;
    }


    for (int i = 1; i <= r; ++i) {
        int j = 1, cnt = 0;
        while(j <= c && mat[i][j] == 1) cnt++, j++;
        if (cnt != row[i]) {
            cout << 0 << endl;
            return 0;
        }
    }



    for (int i = 1; i <= c; ++i) {
        int j = 1, cnt = 0;
        while(j <= r && mat[j][i] == 1) cnt++, j++;
        if (cnt != col[i]) {
            cout << 0 << endl;
            return 0;
        }
    }


    for (int i = 1; i <= r; ++i) {
        for (int j = 1; j <= c; ++j) {
            if (mat[i][j] == 1) continue;
            if (row[i] + 1 < j && col[j] + 1 < i) mat[i][j] = -1;
        }
    }

    int cnt = 0;
    for (int i = 1; i <= r; ++i) {
        for (int j = 1; j <= c; ++j) {
            if (mat[i][j] == -1) cnt++;
        }
    }

    cout << bigmod(2, cnt, 1e9 + 7) << endl;
    return 0;
}
