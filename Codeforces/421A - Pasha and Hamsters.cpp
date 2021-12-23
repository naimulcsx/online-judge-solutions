#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);

    int n, ar, al;
    cin >> n >> ar >> al;
    vector<int> taken(n + 1, 0);

    for (int i = 0; i < ar; ++i) {
        int k; cin >> k;
        taken[k] = 1;
    }

    for (int i = 0; i < al; ++i) {
        int k; cin >> k;
        if (taken[k] == 0) taken[k] = 2;
    }

    for (int i = 1; i <= n; ++i) cout << taken[i] << ' ';
    cout << endl;
    return 0;
}
