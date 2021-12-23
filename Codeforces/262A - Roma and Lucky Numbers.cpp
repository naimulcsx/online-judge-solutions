#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, k;
    cin >> n >> k;

    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        string num;
        cin >> num; 
        int luc_dig = 0;
        for (auto el: num) if ( el == '4' || el == '7' ) luc_dig++;
        if (luc_dig <= k) cnt++;
    }
    cout << cnt << endl;
    return 0;
}