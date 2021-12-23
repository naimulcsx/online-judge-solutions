#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int n, k, a[110];

int main() {
    ios::sync_with_stdio(false);
    cin >> n >> k;
    for (int i = 0; i < k; ++i) cin >> a[i];

    vector<int> s;
    for (int i = 1; i <= n; ++i) s.push_back(i);

    int curr_leader = 0;
    for (int i = 0; i < k; ++i) {
        int elim = (curr_leader + a[i]) % n;
        cout << s[elim] << ' ';
        s.erase(s.begin() + elim);
        curr_leader = elim;
        n--;
    }

    cout << endl;
    return 0;
}
