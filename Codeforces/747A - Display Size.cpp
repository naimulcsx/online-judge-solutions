#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    pair<int, int> ans;
    int res1, res2, dis = 9999999;
    for ( int i = 1000; i >= 1; --i ) {
        if ( n % i == 0 ) {
            res1 = min(i, n / i);
            res2 = max(i, n / i);

            if ( abs(res1 - res2) < dis ) {
                dis = abs(res1 - res2);
                ans.first = res1;
                ans.second = res2;
            }
        }
    }

    cout << ans.first << ' '  << ans.second << endl;
    return 0;
}
