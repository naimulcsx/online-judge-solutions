#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int n, q;
string str;
int freq[200200][26];

bool possible( string &str, int k ) {
    int len = str.size();
    int fr[26];
    for (int i = 0; i <= 25; ++i) fr[i] = 0;
    for (auto el: str) fr[el - 'a']++;

    for (int i = 0; i <= 25; ++i) {
        if ( freq[k][i] < fr[i] ) {
            return false;
        }
    }

    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin >> n >> str >> q;
    for (int i = 1; i <= n; ++i) {
        freq[i][str[i - 1] - 'a']++;
        for (int j = 0; j <= 25; ++j) {
            freq[i][j] += freq[i - 1][j];
        }
    }

    while(q--) {
        string qstr;
        cin >> qstr;

        int lo = 1, hi = n, res = INT_MAX;
        while( lo <= hi ) {
            int mid = (hi + lo) / 2;
            if ( possible(qstr, mid) ) {
                res = min(res, mid);
                hi = mid - 1;
            }
            else lo = mid + 1;
        }

        cout << res << endl;
    }

    return 0;   
}
