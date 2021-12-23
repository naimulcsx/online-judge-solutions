#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int cnt[100100]; 
bitset<100100> marks;
vector<int> pf[100100];

void sieve(int n) {
    for (int i = 2; i <= n; ++i) {
        if (!marks[i]) {
            for (int j = 2 * i; j <= n; j += i) {
                marks[j] = 1;
                pf[j].push_back(i);
            }
            pf[i].push_back(i);
        }
    }
}


int main() {
    ios::sync_with_stdio(false);
    sieve(1e5);

    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &el: arr) cin >> el;

    for (auto &el: arr) {
        vector<int> &divs = pf[el];
        for (auto &el: divs) cnt[el]++;
    }

    int mx = 1;
    for (int i = 0; i <= 1e5; ++i) {
        if (!marks[i]) mx = max(mx, cnt[i]);
    }

    cout << mx << endl;
    return 0;
}
