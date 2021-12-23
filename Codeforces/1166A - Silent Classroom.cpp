#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int freq[200];

int nc2( int n ) {
    int res = 1;
    for (int i = 0, j = n; i < 2; ++i, --j) res *= j;
    res /= 2;
    return res;
}

int main() {
    #ifdef __DEBUG
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // __DEBUG

    int n;
    cin >> n;
    while(n--) {
        string str;
        cin >> str;
        freq[ str[0] ]++;
    }

    int res = 0;
    for (int i = 'a'; i <= 'z'; ++i) {
        if (freq[i] < 2) continue;
        res += nc2(freq[i] / 2);
        res += nc2((freq[i] + 1) / 2);
    }

    cout << res << endl;


    return 0;
}
