#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int n, k;
vector<int> odd, even;

int main() {
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> k;
        if ( abs(k % 2) == 1 ) odd.push_back(k);
        else even.push_back(k);
    }

    int res = 0;
    for (int i = 0; i < even.size(); ++i) if (even[i] > 0) res += even[i];
    for (int i = 0; i < odd.size(); ++i) if (odd[i] > 0) res += odd[i];

    if ( res % 2 == 0 ) {
        // smallest positive odd
        int sm_pos_odd = INT_MAX;
        for (int i = 0; i < odd.size(); ++i)
            if (odd[i] > 0) sm_pos_odd = min(sm_pos_odd, odd[i]);
            
        // largest negetive odd
        int lg_neg_odd = INT_MIN;
        for (int i = 0; i < odd.size(); ++i)
            if (odd[i] < 0) lg_neg_odd = max(lg_neg_odd, odd[i]);

        if (sm_pos_odd == INT_MAX) res += lg_neg_odd;
        else if (lg_neg_odd == INT_MIN) res -= sm_pos_odd;
        else res += max(-sm_pos_odd, lg_neg_odd);
    }
    
    cout << res << endl;
    return 0;
}
