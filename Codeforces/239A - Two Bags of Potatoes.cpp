#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int y, k, n;
    cin >> y >> k >> n;

    int start = (y / k) * k;
    if (start < y) start += k;

    bool flag = false;
    while(start <= n) {
        if (start - y != 0) {
            flag = true;
            cout << start - y << ' ';
        }
        start += k;
    }

    if (!flag) cout << -1 << endl;
    cout << endl;
    return 0;   
}
