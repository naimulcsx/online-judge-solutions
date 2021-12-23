#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifdef DEBUG
        freopen("files/input.txt", "r", stdin);
    #endif

    ios::sync_with_stdio(false);
    int n, pos = 0, neg = 0, zeros;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int input; cin >> input;
        if (input < 0) neg++;
        else if (input > 0) pos++;
    }
    zeros = n - neg - pos;
    int half = n / 2 + n % 2;

    if (pos >= half) cout << 1 << endl;
    else if (neg >= half) cout << -1 << endl;
    else cout << 0 << endl;

    return 0;
}
