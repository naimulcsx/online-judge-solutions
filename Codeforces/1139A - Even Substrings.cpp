#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    int n;
    string str;
    cin >> n >> str;

    ll cnt = 0;
    for (int i = 0; i < n; ++i) {
        int dig = str[i] - '0';
        if ( dig % 2 == 0 ) cnt += (i + 1);
    }

    cout << cnt << endl;
    return 0;
}
