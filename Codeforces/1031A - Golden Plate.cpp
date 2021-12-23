#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int r, c, k;
    cin >> r >> c >> k;

    int cnt = 0;
    while(k--) {
        cnt += (r * 2) + (c - 2) * 2;
        r -= 4;
        c -= 4;
    }

    cout << cnt << endl;
    return 0;
}
