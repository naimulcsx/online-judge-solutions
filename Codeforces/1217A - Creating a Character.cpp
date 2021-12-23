#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    while(q--) {
        int a, b, c;
        cin >> a >> b >> c;
        
        int lo = 0, hi = c, res = -1;
        while(lo <= hi) {
            int mid = (lo + hi) / 2;
            if (mid + b < a + (c - mid)) {
                lo = mid + 1;
                res = max(res, mid);
            }
            else {
                hi = mid - 1;
            }
        }

        cout << res + 1 << endl;
    }   

    return 0;
}